// zad1.c Bartlomiej Bajon
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void print_spaced(char *str, size_t len)
{
        for(size_t i=0;i<len-1;i++) {
                printf("%c ", str[i]);
        }
        printf("%c\n", str[len-1]);
}

void print_spaces(size_t i) 
{
        for(;i>0;i--) {
                printf(" ");
        }
}

int main() 
{
        char *str = "ABRAKADABRA";
        size_t len = strlen(str);
        for(size_t i=0;i<len;i++) {
                print_spaces(i);
                print_spaced(str, len-i);
        }

        return 0;
}
