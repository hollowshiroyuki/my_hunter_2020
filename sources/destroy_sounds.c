/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** destroy_sounds
*/

#include "hunter.h"

void destroy_sounds(game_t *game)
{
    sfSound_stop(game->sounds.bang_sfx);
    sfSound_destroy(game->sounds.bang_sfx);
    sfSound_stop(game->sounds.quack_sfx);
    sfSound_destroy(game->sounds.quack_sfx);
    sfMusic_stop(game->sounds.music);
    sfMusic_destroy(game->sounds.music);
}