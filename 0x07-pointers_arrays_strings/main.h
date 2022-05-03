#ifndef MAIN_H
#define MAIN_H

int _putchar(char k);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strcpn(char *s, char *accept);
char *_strpbnk(char *s, char *accept);
char *strstr(char *haystack, char *needle);
void print_chessboard(*a[8]);
void print_diagsums(int *a, int size);
void set_string(char **s, char *to);

#endif
