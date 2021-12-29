/*
** EPITECH PROJECT, 2020
** hunter [WSL: Ubuntu-20.04]
** File description:
** shoot_event
*/

#include "hunter.h"
#include <stdio.h>

duck_t *check_collisions(sfVector2f pos, duck_t *ducks)
{
    sfFloatRect box = {0, 0, 68, 64};
    sfVector2f s_pos = {0};

    for (int i = 0; i < DUCKS; i++) {
        s_pos = sfSprite_getPosition(ducks[i].sprite);
        box.top = s_pos.y;
        box.left = s_pos.x;
        if (sfFloatRect_contains(&box, pos.x, pos.y) && ducks[i].is_alive)
            return (ducks + i);
    }
    return (0);
}

void shoot_event(game_t *game)
{
    sfVector2i pos = sfMouse_getPositionRenderWindow(game->window);
    sfVector2f worldpos = sfRenderWindow_mapPixelToCoords(game->window, pos, 0);
    duck_t *dead_duck = check_collisions(worldpos, game->ducks);
    float pitch =  0.6 + (float)rand() / (float)(RAND_MAX  / 1.4 - 0.6);
    score_t *score = &game->score;

    sfSound_play(game->sounds.bang_sfx);
    if (dead_duck) {
        sfSound_setPitch(game->sounds.quack_sfx, pitch);
        sfSound_play(game->sounds.quack_sfx);
        duck_kill(dead_duck, game);
        game->score.score += 500;
    } else {
        score->score -= (score->score < 100) ? score->score : 100;
    }
}