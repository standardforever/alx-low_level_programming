#include "hash_tables.h"

/**
 * key_index - it gives the index of a key
 * @key: the key
 * @size: the value
 * Return: the index of the key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
