/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** init_music
*/

#include "hunter.h"

void init_music(game_t *game)
{
    game->sounds.music = sfMusic_createFromFile(PATH_MUSIC);
    sfMusic_setLoop(game->sounds.music, sfTrue);
    sfMusic_setVolume(game->sounds.music, 50);
    sfMusic_play(game->sounds.music);
}