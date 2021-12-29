/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** duck_reset
*/

#include "hunter.h"

void duck_reset(duck_t *duck, game_t *game)
{
    sfIntRect rect = sfSprite_getTextureRect(duck->sprite);

    duck->is_alive = 1;
    duck->speed = R_RAND(SPEED_MIN, SPEED_MAX);
    rect.left = 0;
    sfSprite_setTextureRect(duck->sprite, rect);
    sfSprite_setPosition(duck->sprite, (sfVector2f){-68, R_RAND(42, 400)});
    sfClock_restart(duck->an_clk);
}