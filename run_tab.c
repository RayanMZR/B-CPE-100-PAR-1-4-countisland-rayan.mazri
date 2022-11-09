/*
** EPITECH PROJECT, 2022
** run_tab
** File description:
** count_island
*/

int my_strlen(char *str);

void run_tab(char **world, int k, int j, int i)
{
    int len = my_strlen(world[0]);
    int count = 0;
    for (count = 0; world[count]; count++);

    if (world[k][j] == 'X')
        world[k][j] = i + 48;
    else
        return;
    if (k > 0)
        run_tab(world, k - 1, j, i);
    if (j > 0)
        run_tab(world, k, j - 1, i);
    if (k < count - 1)
        run_tab(world, k + 1, j, i);
    if (j < len - 1)
        run_tab(world, k, j + 1, i);
}
