/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** view_event
*/

#include "hunter.h"

void view_event(game_t *game)
{
    unsigned int width =  game->event.size.width;
    unsigned int heigth =  game->event.size.height;

    get_letterbox_view(game->view, width, heigth);
    sfRenderWindow_setView(game->window, game->view);
}