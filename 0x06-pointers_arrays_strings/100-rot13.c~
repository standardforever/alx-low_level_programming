#include "main.h"

/**
 * rot13 - it encode a string using rot13
 * @s: the string to encode
 * Description: Applying ROT13 to a piece of text merely requires examining
 *	    its alphabetic characters and replacing each one by the letter 13
 *	    places further along in the alphabet, wrapping back to the 
 *	    beginning if necessary.[2] A becomes N, B becomes O, and so on up
 *	    to M, which becomes Z, then the sequence continues at the beginning
 *	    of the alphabet: N becomes A, O becomes B, and so on to Z, which
 *	    becomes M.
 * Return: a pointer of the encoded string
 */
char *rot13(char *s)
{
	char *cr = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *cp = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; cr[j] != '\0'; j++)
		{
			if (s[i] == cr[j])
			{
				s[i] = cp[j];
				break;
			}
		}
	}
	return (s);
}
