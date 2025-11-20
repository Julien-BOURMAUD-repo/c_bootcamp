#include <stddef.h>

void *my_memset(void *s, int c, size_t n)
{
    unsigned char *ptr = s;

    while (n--) {
        *ptr++ = (unsigned char)c;
    }

    return s;
}
