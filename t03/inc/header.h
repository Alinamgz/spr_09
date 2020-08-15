#pragma once

#include <stdbool.h>
#include <unistd.h>


bool mx_isdigit(int c);
bool mx_isspace(char c);

void mx_printint(int n);
void mx_printchar(char c);
void mx_printstr(const char *s);

char *mx_strcpy(char *dst, const char *src);

int mx_atoi(const char *str);
int mx_strlen(const char *c);
int mx_strcmp(const char *s1, const char *s2);


