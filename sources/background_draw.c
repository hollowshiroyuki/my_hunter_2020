/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** background_draw
*/

#include "hunter.h"

void background_draw(game_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->background, NULL);
}