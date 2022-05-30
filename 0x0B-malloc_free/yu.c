#include "main.h"

int main(void)
{
    int i = 0;
    char *tab = "      ALX School         #cisfun      ";
    
    while(*(tab + i))
    {
        if (*(tab + i) == ' ')
        {
            i++;
            continue;
        }
            
        printf("%c", *(tab + i));
        i++;
        
    }
    return (0);
}