#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - generates & prints passwords for the crackme5 executable
 * @argc: The number of arguments
 * @argv: array of pointers to the arguments
 * Return: 0
*/
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	char password[7], *code;
	int len = strlen(argv[1]), x, temp;

	code = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (len ^ 59) & 63;
	password[0] = code[temp];

	temp = 0;
	for (x = 0; x < len; x++)
		temp += argv[1][x];
	password[1] = code[(temp ^ 79) & 63];

	temp = 1;
	for (x = 0; x < len; x++)
		temp *= argv[1][x];
	password[2] = code[(temp ^ 85) & 63];

	temp = 0;
	for (x = 0; x < len; x++)
	{
		if (argv[1][x] > temp)
			temp = argv[1][x];
	}
	srand(temp ^ 14);
	password[3] = code[rand() & 63];

	temp = 0;
	for (x = 0; x < len; x++)
		temp += (argv[1][x] * argv[1][x]);
	password[4] = code[(temp ^ 239) & 63];

	for (x = 0; x < argv[1][0]; x++)
		temp = rand();
	password[5] = code[(temp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}
