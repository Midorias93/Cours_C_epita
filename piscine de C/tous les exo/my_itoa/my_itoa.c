#include "my_itoa.h"

#include <stdio.h>
#include <stdlib.h>

char *my_itoa(int value, char *s)
{
    int i = 0;
    int sauv = 0;
    char retenu;
    if (value < 0)
    {
        value = -value;
        sauv++;
    }
    while (value / 10 != 0)
    {
        s[i] = (value % 10) + '0';
        value = value / 10;
        i++;
    }
    s[i] = value + '0';
    if (sauv == 1)
    {
        i++;
        s[i] = '-';
    }
    int taille = i;
    i = 0;
    while (i <= taille / 2)
    {
        retenu = s[taille - i];
        s[taille - i] = s[i];
        s[i] = retenu;
        i++;
    }
    taille++;
    s[taille] = '\0';
    return s;
}
