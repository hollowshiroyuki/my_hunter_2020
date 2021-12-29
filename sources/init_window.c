/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** init_window
*/

#include "hunter.h"

void init_window(game_t *game)
{
    sfVideoMode mode = {800, 700, 32};
    sfFloatRect rect = {0, 0, mode.width, mode.height};
    char *name = "Hunter";
    sfUint32 style = sfClose | sfResize;

    game->window = sfRenderWindow_create(mode, name, style, NULL);
    game->view = sfView_createFromRect(rect);
    sfRenderWindow_setVerticalSyncEnabled(game->window, sfFalse);
    sfRenderWindow_setFramerateLimit(game->window, 30);
    sfRenderWindow_setView(game->window, game->view);
}