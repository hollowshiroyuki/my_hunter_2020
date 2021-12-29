/*
** EPITECH PROJECT, 2020
** hunter [WSL: Ubuntu-20.04]
** File description:
** init_score
*/

#include "hsy.h"
#include "hunter.h"

void init_score(game_t *game)
{
    game->score.display = sfText_create();
    sfText_setFont(game->score.display, game->graphics.pixeboy);
    sfText_setColor(game->score.display, sfWhite);
    sfText_setLetterSpacing(game->score.display, 2);
    sfText_setCharacterSize(game->score.display, 43);
    hsy_strcpy(game->score.text, "000000");
    sfText_setString(game->score.display, game->score.text);
    sfText_setPosition(game->score.display, (sfVector2f){617.0, 585.0});
}