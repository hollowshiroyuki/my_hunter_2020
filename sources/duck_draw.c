/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** duck_draw
*/

#include "hunter.h"

void duck_draw(duck_t *duck, game_t *game)
{
    sfRenderWindow_drawSprite(game->window, duck->sprite, NULL);
}