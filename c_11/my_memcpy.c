#include <stddef.h>

void *my_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char       *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    if (d == s || n == 0)
        return dest;

    for (size_t i = 0; i < n; ++i)
        d[i] = s[i];

    return dest;
}
