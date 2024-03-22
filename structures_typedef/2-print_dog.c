#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - definitiooo.
 *
 * @*d: is pointer to variables.
 *
 * Returns: Always is 0.
 */
void print_dog(struct dog *d)
{
	int i = 0;
	if (d != 0)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (d->age < 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner)
	}
	else
		return;
}
