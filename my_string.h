#ifndef MY_STRING_H
#define MY_STRING_H

void *my_memset(void *str, int c, unsigned int n);
void *my_memcpy(void *dest, const void * src, unsigned int n);
void *my_memchr(const void *str, int c, unsigned int n);
int my_memcmp(const void *str1, const void *str2, unsigned int n);
void *my_memmove(void *str1, const void *str2, unsigned int n);
char *my_strcat(char *dest, const char *src);
char *my_strncat(char *dest, const char *src,unsigned int n);
char *my_strchr(const char *str, int c);
int my_strcmp(const char *str1, const char *str2);
int my_strncmp(const char *str1, const char *str2, unsigned int n);
int my_strcoll(const char *str1, const char *str2);
char *my_strcpy(char *dest, const char *src);
char *my_strncpy(char *dest, const char *src, unsigned int n);
int my_strcspn(const char *str1, const char *str2);
unsigned int my_strlen(const char *str);
//char *my_strpbrk(const char *str1, const char *str2);
char *my_strrchr(const char *str, int c);
unsigned int my_strspn(const char *str1, const char *str2);
char *my_strstr(const char *haystack, const char *needle);
char *my_strtok(char *str, const char *delim);




#endif
