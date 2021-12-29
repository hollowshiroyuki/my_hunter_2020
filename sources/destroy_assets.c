/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** destroy_assets
*/

#include "hunter.h"

void destroy_assets(game_t *game)
{
    sfTexture_destroy(game->graphics.back);
    sfTexture_destroy(game->graphics.front);
    sfTexture_destroy(game->graphics.ducks);
    sfTexture_destroy(game->graphics.cursor);
    sfSoundBuffer_destroy(game->sounds.bang);
    sfSoundBuffer_destroy(game->sounds.quack);
    sfText_destroy(game->score.display);
    sfFont_destroy(game->graphics.pixeboy);
}