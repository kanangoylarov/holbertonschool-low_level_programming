#include "function_pointers.h"
/* array_iterator - Is function in c.
 * @array: is array.
 * @size: is length of element.
 * @action: is function in c.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
