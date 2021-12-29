/*
** EPITECH PROJECT, 2020
** hunter
** File description:
** start_game
*/

#include "hunter.h"

void start_game(void)
{
    game_t game = {0};

    init_game(&game);
    game_loop(&game);
    end_game(&game);
}