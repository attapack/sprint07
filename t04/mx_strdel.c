#include <stdlib.h>
#include <stdio.h>

void mx_strdel(char **str) {
    if (!*str || !str) return;
    free(*str);
    *str = NULL;                 
}
