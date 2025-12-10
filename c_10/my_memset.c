#include <stddef.h>

static unsigned char fix_char(int c)
{
    if (c > 255)
        return *((char *)c);
    return (unsigned char)c;
}

void *my_memset(void *s, int c, size_t n)
{
    unsigned char value = fix_char(c);
    unsigned char *p = s;

    while (n--)
        *p++ = value;

    return s;
}
