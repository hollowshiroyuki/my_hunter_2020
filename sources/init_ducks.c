/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** init_ducks
*/

#include "hunter.h"

void init_ducks(game_t *game)
{
    duck_t *ducks = game->ducks;
    float y = 0;

    for (int i = 0; i < DUCKS; i++) {
        ducks[i].sprite = sfSprite_create();
        sfSprite_setTexture(ducks[i].sprite, game->graphics.ducks, sfFalse);
        sfSprite_setTextureRect(ducks[i].sprite, duck_colors[i % 3]);
        y = R_RAND(42, 400);
        sfSprite_setPosition(ducks[i].sprite, (sfVector2f){-68.0, y});
        ducks[i].an_clk = sfClock_create();
        ducks[i].speed = R_RAND(SPEED_MIN, SPEED_MAX);
        ducks[i].is_alive = 1;
    }
}