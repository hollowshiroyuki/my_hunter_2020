/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** hunter
*/

#ifndef HUNTER_H_
#define HUNTER_H_

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <math.h>
#include <stdlib.h>
#include "settings.h"

#define R_RAND(x, y) (rand() % (y + 1 - x) + x)

#define USAGE_LONG \
"USAGE :\n" \
"./my_hunter [-h]\n" \
"\n" \
"DESCRIPTION :\n" \
"This is a NES Duck Hunt like game.\n" \
"Made in only two days as I lost all my previous work when my computer " \
"died ;-;\n" \
"So let's just say it's a downgrade of what I've shown on teams ;w;\n" \
"Don't judge the music plz i didn't know which one to use...\n" \
"\n" \
"SETTINGS :\n" \
"You can change some settings in include/settings.h\n" \
"DUCKS is the number of ducks in the game.\n" \
"SPEED_MIN and SPEED_MAX is the speed range of the ducks.\n" \
"After changing those values just run\n" \
"    make re\n" \
"\n" \
"CONTROLS :\n" \
"     ,.                                                       \n" \
" __.'_                                                        \n" \
"|__|__|   Use your mouse to aim !         _____               \n" \
"|     |       &                  Use the | Esc | key to quit !\n" \
"|-___-|   Click to shoot !                ¯¯¯¯¯               \n" \
"'.___.'                                                       \n"

#define GAME_CREDITS \
"\n" \
"CREDITS\n" \
"\n" \
"ORIGINAL CONCEPT\n" \
"\n" \
"Based on Duck Hunt by Hiroji Kiyotake\n" \
"\n" \
"DIRECTOR\n" \
"HentaiShiroYuki\n" \
"\n" \
"LEAD DESIGNER\n" \
"HentaiShiroYuki\n" \
"\n" \
"SCENARIO\n" \
"HentaiShiroYuki\n" \
"\n" \
"WRITING\n" \
"Hideo Kojima\n" \
"\n" \
"ANIMATION\n" \
"HentaiShiroYuki\n" \
"\n" \
"TECHNICAL DIRECTOR\n" \
"HentaiShiroYuki\n" \
"\n" \
"LEAD PROGRAMMING\n" \
"HentaiShiroYuki\n" \
"\n" \
"EXECUTIVE PRODUCER\n"\
"HentaiShiroYuki\n"\
"\n" \
"QUALITY ASSURANCE\n" \
"My little sister\n" \
"\n" \
"SPECIAL THANKS\n" \
"My cat\n" \
"\n" \
"THANKS FOR PLAYING\n" \


#define USAGE_SHORT "Usage: ./my_hunter [-h]\n"

/* Path definitions */
// Graphic assets
#define PATH_FRONT "./assets/spritesheets/front.png"
#define PATH_BACKGROUNDS "./assets/spritesheets/back.png"
#define PATH_DUCKS "./assets/spritesheets/ducks.png"
#define PATH_PIXEBOY "./assets/fonts/pixeboy.ttf"
#define PATH_CURSOR "./assets/spritesheets/cursor.png"

// Audio assets
#define PATH_BANG "./assets/sounds/shoot.ogg"
#define PATH_QUACK "./assets/sounds/quack.ogg"
#define PATH_MUSIC "./assets/sounds/music.ogg"

/* CSFML shorthands */
#define CLK_AS_MS(clk) (sfTime_asMilliseconds(sfClock_getElapsedTime(clk)))

/* FPS object */
typedef struct fps_s
{
    sfClock *clock;
    unsigned int f;
    unsigned int fps;
} fps_t;
fps_t *fps_create(void);
void fps_update(fps_t *fps);
unsigned int fps_get_fps(fps_t *fps);
void fps_destroy(fps_t *fps);

typedef struct graphics_s
{
    sfTexture *back;
    sfTexture *front;
    sfTexture *ducks;
    sfTexture *cursor;
    sfFont *pixeboy;
} graphics_t;

typedef struct sounds_s
{
    sfSoundBuffer *bang;
    sfSoundBuffer *quack;
    sfSound *bang_sfx;
    sfSound *quack_sfx;
    sfMusic *music;
} sounds_t;

static const sfIntRect duck_colors[3] = {
    {0, 0, 68, 64},
    {0, 64, 68, 64},
    {0, 128, 68, 64}
};

typedef struct duck_s
{
    sfBool is_alive;
    sfSprite *sprite;
    sfClock *an_clk;
    int speed;
} duck_t;

typedef struct score_s
{
    unsigned int score;
    char text[7];
    sfText *display;
} score_t;

typedef struct game_s
{
    sfBool run;
    score_t score;
    sfRenderWindow *window;
    sfView *view;
    sfEvent event;
    graphics_t graphics;
    sounds_t sounds;
    sfSprite *background;
    sfSprite *front;
    sfSprite *cursor;
    duck_t ducks[DUCKS];
    sfClock *dt_clock;
    sfClock *d_clock;
    sfClock *u_clock;
    float dt;
} game_t;

sfView *get_letterbox_view(sfView *view, int width, int height);
void background_draw(game_t *game);
void destroy_assets(game_t *game);
void destroy_background(game_t *game);
void destroy_ducks(game_t *game);
void destroy_window(game_t *game);
void duck_draw(duck_t *duck, game_t *game);
void duck_update(duck_t *duck, game_t *game);
void end_game(game_t *game);
void game_draw(game_t *game);
void game_event(game_t *game);
void game_loop(game_t *game);
void game_update(game_t *game);
void init_assets(game_t *game);
void init_ducks(game_t *game);
void init_game(game_t *game);
void init_window(game_t *game);
void start_game(void);
void view_event(game_t *game);
void score_draw(game_t *game);
void init_background(game_t *game);
void background_draw(game_t *game);
void front_draw(game_t *game);
void init_front(game_t *game);
void duck_reset(duck_t *duck, game_t *game);
void duck_next_frame(duck_t *duck);
void duck_frame_shoot(duck_t *duck);
void shoot_event(game_t *game);
void duck_kill(duck_t *duck, game_t *game);
void init_score(game_t *game);
void update_score(game_t *game);
void init_sounds(game_t *game);
void destroy_sounds(game_t *game);
void cursor_update(game_t *game);
void cursor_draw(game_t *game);
void init_music(game_t *game);
#endif /* !HUNTER_H_ */