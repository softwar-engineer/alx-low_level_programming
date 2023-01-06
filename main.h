#ifndef MAIN_H
#define MAIN_H
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_diagsums(int *a, int size);
void print_chessboard(char (*a)[8]);
void set_string(char **s, char *to);
#endif /*MAIN_H*/
