/*
** EPITECH PROJECT, 2020
** hunter [WSL: Ubuntu-20.04]
** File description:
** update_score
*/

#include "hunter.h"

void minitoa(unsigned int nb, char *str)
{
    if (nb > 999999)
        return;
    for (int i = 5; i >= 0; i--) {
        str[i] = nb % 10 + '0';
        nb /= 10;
    }
}

void update_score(game_t *game)
{
    minitoa(game->score.score, game->score.text);
    sfText_setString(game->score.display, game->score.text);
}