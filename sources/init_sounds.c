/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** init_sounds
*/

#include "hunter.h"

void init_sounds(game_t *game)
{
    game->sounds.bang_sfx = sfSound_create();
    sfSound_setBuffer(game->sounds.bang_sfx, game->sounds.bang);
    game->sounds.quack_sfx = sfSound_create();
    sfSound_setBuffer(game->sounds.quack_sfx, game->sounds.quack);
    sfSound_setVolume(game->sounds.bang_sfx, 30.0);
}