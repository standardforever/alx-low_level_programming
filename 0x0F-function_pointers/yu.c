#include <stdio.h>

int is_98(int elem)
{
    return (98 == elem);
}

int main(void)
{
	printf("%i", is_98(119));
	return (0);
}
