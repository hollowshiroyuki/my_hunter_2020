/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** game_event
*/

#include "hunter.h"

void game_event(game_t *game)
{
    if (game->event.type == sfEvtClosed) {
        game->run = sfFalse;
    }
    if (game->event.type == sfEvtKeyPressed) {
        if (game->event.key.code == sfKeyEscape) {
            game->run = sfFalse;
        }
    }
    if (game->event.type == sfEvtResized) {
        view_event(game);
    }
    if (game->event.type == sfEvtMouseButtonPressed)
        shoot_event(game);
}