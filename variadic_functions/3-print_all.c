#include <stdarg.h>
#include <stdio.h>

struct f_dt {
    char *identifier;
    void (*f)(char *, va_list);
};

void print_a_char(char *separator, va_list args);
void print_a_integer(char *separator, va_list args);
void print_a_float(char *separator, va_list args);
void print_a_char_ptr(char *separator, va_list args);

void print_all(const char * const format, ...);

void print_a_char(char *separator, va_list args) {
    printf("%s%c", separator, va_arg(args, int));
}

void print_a_integer(char *separator, va_list args) {
    printf("%s%d", separator, va_arg(args, int));
}

void print_a_float(char *separator, va_list args) {
    printf("%s%f", separator, va_arg(args, double));
}

void print_a_char_ptr(char *separator, va_list args) {
    char *arg = va_arg(args, char *);

    if (arg == NULL) {
        printf("%s%s", separator, "(nil)");
        return;
    }

    printf("%s%s", separator, arg);
}

void print_all(const char * const format, ...) {
    va_list args;
    struct f_dt form_types[] = {
        { "c", print_a_char },
        { "i", print_a_integer },
        { "f", print_a_float },
        { "s", print_a_char_ptr }
    };
    unsigned int i = 0;
    unsigned int j = 0;
    char *separator = "";

    va_start(args, format);

    while (format != NULL && format[i]) {
        j = 0;
        while (j < 4) {
            if (format[i] == *form_types[j].identifier) {
                form_types[j].f(separator, args);
                separator = ", ";
            }
            j++;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}

