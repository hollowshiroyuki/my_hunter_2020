/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** game_loop
*/

#include "hunter.h"

void game_loop(game_t *game)
{
    sfTime dt_time = {0};

    while (sfRenderWindow_isOpen(game->window) && game->run) {
        while (sfRenderWindow_pollEvent(game->window, &game->event))
            game_event(game);
        if (CLK_AS_MS(game->u_clock) > 20) {
            dt_time = sfClock_restart(game->dt_clock);
            game->dt = sfTime_asSeconds(dt_time);
            game_update(game);
            sfClock_restart(game->u_clock);
        }
        if (CLK_AS_MS(game->d_clock) > 33) {
            game_draw(game);
            sfClock_restart(game->d_clock);
        }
        sfSleep((sfTime){1000});
    }
}