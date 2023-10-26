#include <stdint.h>
#include "main.h"

/**
 * get_endianness - checks the endianness.
 * @
 * Return: void
 */
int get_endianness(void)
{
	uint32_t value = 1;
	uint8_t *byte_pointer = (uint8_t *)&value;

	return ((byte_pointer[0] == 1) ? 1 : 0);
}
