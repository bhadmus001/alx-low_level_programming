#include <stdio.h>
#include "main.h"
int main(void)
{
	char s1[98];
	/*char s2[] = "World!\n";*/
	char *ptr;
	printf("%s\n", s1);
	/*printf("%s\n", s2);*/
	ptr = _strncpy(s1, "My name is Badmus", 10);
	printf("%s\n", s1);
	/*printf("%s\n", s2);*/
	printf("%s\n", ptr);
	return (0);
}
