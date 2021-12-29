/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** cursor_update
*/

#include "hunter.h"

void cursor_update(game_t *game)
{
    sfVector2i w_pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f g_pos = sfRenderWindow_mapPixelToCoords(game->window, w_pos, 0);

    if (g_pos.x < 0 || g_pos.x > 800 || g_pos.y < 0 || g_pos.y > 700) {
        sfRenderWindow_setMouseCursorVisible(game->window, sfTrue);
    } else {
        sfRenderWindow_setMouseCursorVisible(game->window, sfFalse);
    }
    g_pos.y -= 23;
    g_pos.x -= 25;
    sfSprite_setPosition(game->cursor, g_pos);
}