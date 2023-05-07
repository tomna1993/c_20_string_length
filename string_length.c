#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	string name = get_string("What's your name? ");

	int n = 0;

	while (name[n] != '\0')
	{
		n++;
	}

	printf("Your name length is: %i\n", n);

	printf("The NULL character value from string.h library: %i'\n", NULL);

	printf("Get your name length with strlen function from string.h library: %i\n", strlen(name));
}