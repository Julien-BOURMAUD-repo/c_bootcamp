#include <stdlib.h>
#include <string.h>

char *my_strdup(const char *s) {
    if (!s) {
        return NULL;  // Protection si pointeur NULL
    }

    size_t len = strlen(s);
    char *copy = malloc(len + 1);  // +1 pour le '\0'
    if (!copy) {
        return NULL;  // malloc a échoué
    }

    memcpy(copy, s, len + 1);  // copie aussi le '\0'
    return copy;
}
