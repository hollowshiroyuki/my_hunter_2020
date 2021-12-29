/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** init_front
*/

#include "hunter.h"

void init_front(game_t *game)
{
    game->front = sfSprite_create();
    sfSprite_setTexture(game->front, game->graphics.front, sfFalse);
}