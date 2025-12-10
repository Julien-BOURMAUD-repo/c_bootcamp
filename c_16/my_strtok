#include <stddef.h>

/*
 * my_strtok : version simplifiée du strtok standard.
 * - str : chaîne à découper lors du premier appel
 * - delim : liste de caractères séparateurs
 * - les appels suivants utilisent str = NULL
 *
 * ⚠️ Modifie la chaîne originale.
 * ⚠️ Utilise un pointeur statique interne.
 */

char *my_strtok(char *str, const char *delim)
{
    static char *save = NULL;
    char *start;

    if (str != NULL)
        save = str;           // Premier appel → init
    if (save == NULL)
        return NULL;          // Rien à parser

    // 1. Ignorer les délimiteurs au début
    while (*save && strchr(delim, *save))
        save++;

    if (*save == '\0')
        return NULL;          // Plus de token

    start = save;             // Début du token

    // 2. Avancer jusqu’à un délimiteur ou fin de chaîne
    while (*save && !strchr(delim, *save))
        save++;

    // 3. Si on est sur un délimiteur → couper
    if (*save != '\0') {
        *save = '\0';
        save++;               // Positionner pour l’appel suivant
    }

    return start;
}
