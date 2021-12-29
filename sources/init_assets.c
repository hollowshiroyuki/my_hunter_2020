/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** init_assets
*/

#include "hunter.h"

void init_assets(game_t *game)
{
    game->graphics.back = 0;
    game->graphics.ducks = 0;
    game->sounds.bang = 0;
    game->front = 0;
    game->graphics.back = sfTexture_createFromFile(PATH_BACKGROUNDS, NULL);
    game->graphics.ducks = sfTexture_createFromFile(PATH_DUCKS, NULL);
    game->sounds.bang = sfSoundBuffer_createFromFile(PATH_BANG);
    game->graphics.front = sfTexture_createFromFile(PATH_FRONT, NULL);
    game->graphics.pixeboy = sfFont_createFromFile(PATH_PIXEBOY);
    game->sounds.quack = sfSoundBuffer_createFromFile(PATH_QUACK);
    game->graphics.cursor = sfTexture_createFromFile(PATH_CURSOR, NULL);
}