/*
** EPITECH PROJECT, 2020
** hsy_chrstr
** File description:
** r/ProgrammerHumor
*/

int hsy_chrstr(char c, char const *str)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] == c) {
            return (1);
        }
    }
    return (0);
}
