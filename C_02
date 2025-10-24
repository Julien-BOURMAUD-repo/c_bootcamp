// my_strncpy.c
#include <stddef.h>

char *my_strncpy(char *dest, const char *src, size_t n)
{
    size_t i = 0;

    // Copier jusqu'à n caractères ou jusqu'à la fin de src
    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }

    // Si src est plus court que n, compléter avec des '\0'
    while (i < n) {
        dest[i] = '\0';
        i++;
    }

    return dest;
}
