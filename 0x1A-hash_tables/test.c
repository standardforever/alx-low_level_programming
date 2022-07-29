#include "hash_tables.h"

int main(void)
{
    printf("%lu\n %lu\n", hash_djb2("hetairas"), hash_djb2("mentioner"));
    return (0);
}