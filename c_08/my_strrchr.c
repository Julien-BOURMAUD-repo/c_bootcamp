#include <stddef.h>

char *my_strrchr(const char *s, int c)
{
    const char *last = NULL;

    while (*s) {
        if (*s == (char)c)
            last = s;
        s++;
    }

    /* Si on cherche le '\0', renvoyer le pointeur sur le terminateur */
    if (c == '\0')
        return (char *)s;

    return (char *)last;   /* peut être NULL si non trouvé */
}
