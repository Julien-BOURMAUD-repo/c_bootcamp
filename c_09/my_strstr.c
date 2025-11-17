/* my_strstr.c */

#include <stddef.h>

char *my_strstr(const char *haystack, const char *needle)
{
    const char *h;
    const char *n;

    /* Si needle est vide, on renvoie haystack */
    if (*needle == '\0')
        return (char *)haystack;

    while (*haystack) {
        h = haystack;
        n = needle;

        while (*h && *n && (*h == *n)) {
            h++;
            n++;
        }

        if (*n == '\0')          /* on a parcouru tout needle : trouvé */
            return (char *)haystack;

        haystack++;
    }

    return NULL;                 /* pas trouvé */
}
