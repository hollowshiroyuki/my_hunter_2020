/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** init_background
*/

#include "hunter.h"

void init_background(game_t *game)
{
    game->background = sfSprite_create();
    sfSprite_setTexture(game->background, game->graphics.back, sfFalse);
}