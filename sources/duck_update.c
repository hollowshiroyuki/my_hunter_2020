/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** duck_update
*/

#include "hunter.h"

void duck_move(duck_t *duck, game_t *game)
{
    sfVector2f pos = sfSprite_getPosition(duck->sprite);
    float x = pos.x + duck->speed * game->dt;

    sfSprite_setPosition(duck->sprite, (sfVector2f){x, pos.y});
}

void duck_correct(duck_t *duck, game_t *game)
{
    score_t *score = &game->score;
    sfVector2f pos = sfSprite_getPosition(duck->sprite);

    if (pos.x > 800.0) {
        duck_reset(duck, game);
        score->score -= (score->score < 250) ? score->score : 250;
    }
}

void duck_anim(duck_t *duck, game_t *game)
{
    if (duck->is_alive && CLK_AS_MS(duck->an_clk) > 200) {
        sfClock_restart(duck->an_clk);
        duck_next_frame(duck);
    }
    if (!duck->is_alive)
        duck_frame_shoot(duck);
}

void duck_update(duck_t *duck, game_t *game)
{
    if (duck->is_alive) {
        duck_move(duck, game);
        duck_correct(duck, game);
    }
    if (!duck->is_alive) {
        if (CLK_AS_MS(duck->an_clk) > 1000) {
            duck_reset(duck, game);
        }
    }
    duck_anim(duck, game);
}