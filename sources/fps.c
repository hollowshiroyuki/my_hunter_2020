/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** fps
*/

#include "hunter.h"
#include <SFML/System.h>
#include <stdlib.h>

fps_t *fps_create(void)
{
    fps_t *fps = malloc(sizeof(fps_t));

    if (!fps)
        return (0);
    fps->clock = sfClock_create();
    if (!fps->clock) {
        free(fps);
        return (0);
    }
    fps->fps = 0;
    fps->f = 0;
    return (fps);
}

void fps_update(fps_t *fps)
{
    if(sfTime_asSeconds(sfClock_getElapsedTime(fps->clock)) >= 1.0) {
        fps->fps = fps->f;
        fps->f = 0;
        sfClock_restart(fps->clock);
    }
    fps->f += 1;
}

unsigned int fps_get_fps(fps_t *fps)
{
    return (fps->fps);
}

void fps_destroy(fps_t *fps)
{
    sfClock_destroy(fps->clock);
    free(fps);
}