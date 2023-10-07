#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
char *create_buffer(char *file);
void close_file(int fd);
void negative_one_check(int n, char *mode, char *str);
int _strcmp(char *s1, char *s2);
#endif
