/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** game_draw
*/

#include "hunter.h"

void game_draw(game_t *game)
{
    sfRenderWindow_clear(game->window, sfBlack);
    background_draw(game);
    for (int i = 0; i < DUCKS; i++) {
        duck_draw(&game->ducks[i], game);
    }
    front_draw(game);
    score_draw(game);
    cursor_draw(game);
    sfRenderWindow_display(game->window);
}