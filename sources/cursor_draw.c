/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** cursor_draw
*/

#include "hunter.h"

void cursor_draw(game_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->cursor, NULL);
}