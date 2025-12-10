#include <stddef.h>

static unsigned char fix_char(int c)
{
    if (c > 255)
        return *((char *)c);
    return (unsigned char)c;
}

void *my_memchr(const void *s, int c, size_t n)
{
    unsigned char target = fix_char(c);
    const unsigned char *p = s;

    while (n--) {
        if (*p == target)
            return (void *)p;
        p++;
    }
    return NULL;
}
