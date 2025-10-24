// my_strncat.c
#include <stddef.h>

char *my_strncat(char *dest, const char *src, size_t n)
{
    char *ptr = dest;

    // Avancer jusqu’à la fin de dest
    while (*dest != '\0') {
        dest++;
    }

    // Copier au maximum n caractères de src
    size_t i = 0;
    while (i < n && src[i] != '\0') {
        *dest = src[i];
        dest++;
        i++;
    }

    // Toujours ajouter '\0' à la fin
    *dest = '\0';

    return ptr;
}
