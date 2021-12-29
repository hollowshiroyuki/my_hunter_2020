/*
** EPITECH PROJECT, 2020
** hunter [WSL: Ubuntu-20.04]
** File description:
** duck_anim
*/

#include "hunter.h"

void duck_next_frame(duck_t *duck)
{
    sfIntRect current = sfSprite_getTextureRect(duck->sprite);

    current.left += 68;
    if (current.left == 204)
        current.left = 0;
    sfSprite_setTextureRect(duck->sprite, current);
}

void duck_frame_shoot(duck_t *duck)
{
    sfIntRect current = sfSprite_getTextureRect(duck->sprite);

    current.left = 204;
    sfSprite_setTextureRect(duck->sprite, current);
}