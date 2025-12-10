#include <stddef.h>

static unsigned char fix_char(int c)
{
    if (c > 255)
        return *((char *)c);
    return (unsigned char)c;
}

char *my_strrchr(const char *s, int c)
{
    unsigned char target = fix_char(c);
    const char *last = NULL;

    while (*s) {
        if (*s == target)
            last = s;
        s++;
    }
    if (target == '\0')
        return (char *)s;

    return (char *)last;
}
