/*
** EPITECH PROJECT, 2022
** countisland
** File description:
** bonus
*/

void run_tab(char **world, int k, int j, int i);

int count_island(char **world)
{
    int i = 0;
    int j = 0;
    int k = 0;
    if (world[0] == 0)
        return 84;
    for (j = 0; world[k][j]; j++) {
        if (world[k][j] == 'X') {
            run_tab(world, k, j, i);
            i++;
        }
        if (world[k][j + 1] == '\0') {
            k++;
            j = 0;
        }
        if (world[k] == 0)
            break;
    }
    return i;
}
