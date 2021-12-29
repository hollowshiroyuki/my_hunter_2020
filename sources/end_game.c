/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** end_game
*/

#include "hunter.h"
#include "hsy.h"

void display_score(game_t *game)
{
    hsy_putstr("You scored a total of ");
    hsy_putnbr(game->score.score);
    hsy_putstr(" !\n");
    hsy_putstr(GAME_CREDITS);
}

void end_game(game_t *game)
{
    display_score(game);
    destroy_assets(game);
    destroy_window(game);
    destroy_ducks(game);
    destroy_background(game);
    destroy_sounds(game);
    sfClock_destroy(game->dt_clock);
    sfClock_destroy(game->d_clock);
    sfClock_destroy(game->u_clock);
}