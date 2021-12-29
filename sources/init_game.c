/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** init_game
*/

#include "hunter.h"
#include <time.h>

void init_game(game_t *game)
{
    time_t t = time(0);
    srand(t);
    init_assets(game);
    init_window(game);
    init_ducks(game);
    init_background(game);
    init_front(game);
    init_score(game);
    init_sounds(game);
    init_music(game);
    game->cursor = sfSprite_create();
    sfSprite_setTexture(game->cursor, game->graphics.cursor, sfFalse);
    sfRenderWindow_setMouseCursorVisible(game->window, sfFalse);
    game->dt_clock = sfClock_create();
    game->d_clock = sfClock_create();
    game->u_clock = sfClock_create();
    game->run = 1;
}