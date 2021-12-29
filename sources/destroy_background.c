/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** destroy_background
*/

#include "hunter.h"

void destroy_background(game_t *game)
{
    sfSprite_destroy(game->background);
    sfSprite_destroy(game->front);
    sfSprite_destroy(game->cursor);
}