/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** score_draw
*/

#include "hunter.h"

void score_draw(game_t *game)
{
    sfRenderWindow_drawText(game->window, game->score.display, NULL);
}