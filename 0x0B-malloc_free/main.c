#include "main.h"

int main(void)
{
	char *str;
	int i = 0;

    str = ("      ALX School         #cisfun      ");

	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
			continue;

		}
		
		while (str[i] != '\0')
		{		
			if (str[i] == ' ')
				break;
			printf("%c", str[i]);
			i++;
		}
		printf("\n");
		i++;
	}
	
	
	return (0);
}