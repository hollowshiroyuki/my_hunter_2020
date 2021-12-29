/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** duck_kill
*/

#include "hunter.h"

void duck_kill(duck_t *duck, game_t *game)
{
    duck->is_alive = 0;
    sfClock_restart(duck->an_clk);
}