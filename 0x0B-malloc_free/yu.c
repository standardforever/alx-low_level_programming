#include "main.h"

int main(void)
{
    int i, j;
    char *str[3] = {
        "start ", "bouww", "abdul"
    };
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%c\n", *(*(str + i) + j));
    }
    return(0);
}