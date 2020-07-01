/*
** EPITECH PROJECT, 2020
** main
** File description:
** main for palindrome
*/

#include <stdio.h>
#include "palindrome.h"

int main(int ac, char **av)
{
    palin_t info = getoptprog(ac, av);

    if (info.nb != -1)
        turnover(info.nb, info);
    else
        palin(info);
    return (0);
}
