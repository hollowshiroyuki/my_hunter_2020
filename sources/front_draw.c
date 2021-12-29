/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** front_draw
*/

#include "hunter.h"

void front_draw(game_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->front, NULL);
}