/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** game_update
*/

#include "hunter.h"

void game_update(game_t *game)
{
    cursor_update(game);
    update_score(game);
    for (int i = 0; i < DUCKS; i++) {
        duck_update(&game->ducks[i], game);
    }
}