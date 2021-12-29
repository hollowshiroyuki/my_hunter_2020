/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** main
*/

#include "hsy.h"
#include "hunter.h"

int main(int argc, char **argv)
{
    if (argc != 1) {
        if (argc == 2 && hsy_strcmp(argv[1], "-h")) {
            hsy_putstr(USAGE_SHORT);
            return (84);
        } else {
            hsy_putstr(USAGE_LONG);
        }
    } else {
        start_game();
    }
    return (0);
}