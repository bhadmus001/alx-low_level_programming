#include <stdio.h>
#include "main.h"
int main(void)
{
	char s3[] = "World!";
	char s1[] = "hello";
	char s2[] = "World!";
	/*char *ptr, *ptr_1;*/
	/*printf("%s\n", s1);*/
	/*printf("%s\n", s2);*/
	/*ptr = _strcmp(s1, s2);*/
	/*ptr_1 = _strcmp(s2, s3);*/
	/*printf("%s\n", _strcmp(s1, s2));*/
	/*printf("%s\n", s2);*/
	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s3));
	return (0);
}
