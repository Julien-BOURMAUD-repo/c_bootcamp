#include <stddef.h>

void *my_memmove(void *dest, const void *src, size_t n)
{
    unsigned char       *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d == s || n == 0)
        return dest;

    if (d < s)
    {
        // Pas d'overlap problématique : on copie vers l'avant
        for (size_t i = 0; i < n; ++i)
            d[i] = s[i];
    }
    else
    {
        // Overlap possible : on copie vers l'arrière
        for (size_t i = n; i > 0; --i)
            d[i - 1] = s[i - 1];
    }

    return dest;
}
