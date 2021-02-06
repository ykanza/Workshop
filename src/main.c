/*
** EPITECH PROJECT, 2021
** Workshop
** File description:
** main
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#include "tek.h"

int main(void)
{
    srand(time(NULL));
    printf("%s\n", get_sentence(rand()));
    return (0);
}
