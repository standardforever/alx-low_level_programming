#include <stdio.h>

int main(void)
{
	unsigned int i, j;
	j = 0;
	i = 0;
	while (i < 1000000000)
	{
		i += 50000;
		j++;
	}
	printf("%u\n", i);
	printf("%u\n", j);
}
