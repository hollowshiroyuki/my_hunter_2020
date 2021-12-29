/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** destroy_window
*/

#include "hunter.h"

void destroy_window(game_t *game)
{
    sfRenderWindow_destroy(game->window);
    sfView_destroy(game->view);
}