/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** destroy_ducks
*/

#include "hunter.h"

void destroy_ducks(game_t *game)
{
    duck_t *ducks = game->ducks;

    for (int i = 0; i < DUCKS; i++) {
        sfSprite_destroy(ducks[i].sprite);
        sfClock_destroy(ducks[i].an_clk);
    }
}