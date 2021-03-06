#include <stdio.h>
#include <string.h>

#include "states-code.h"


int main (int argc, char *argv[])
{
    char *abbr = argv[1];
    int i;

    if (argc != 2) {
        printf("Usage: %s <abbreviation>\n", argv[0]);
        return 2;
    }

    i = get_hashval(abbr);
    if (i >= 0 && strcmp(abbr, states[i].abbr) == 0)
        printf("The state of %s has a population of %g million.\n",
               states[i].name,
               1e-6 * states[i].pop);
    else
        printf("'%s' is not an abbreviation for a state.\n", abbr);

    return 0;
}
