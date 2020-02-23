/*
** EPITECH PROJECT, 2019
** rush1-2
** File description:
** CPool rush1
*/

char first_line(char left, char center, char right, int x)
{
    my_putchar(left);
    for (int i = 1; i < x - 1; i++)
        my_putchar(center);
    if (x != 1)
        my_putchar(right);
    my_putchar('\n');
}

char mid_line(char side, int x)
{
    my_putchar(side);
    for (int i = 1; i < x - 1; i++)
        my_putchar(' ');
    if (x != 1)
        my_putchar(side);
    my_putchar('\n');
}

void rush(int x, int y)
{
    char *str = "Invalid size\n";
    char left = '/';
    char center = '*';
    char right = '\\';

    if (x <= 0 || y <= 0) {
        for (int i = 0; str[i] != '\0'; i++)
            my_putchar(str[i]);
        return;
    }
    if (x == 1 || y == 1) {
        left = center;
        right = center;
    }
    first_line(left, center, right, x);
    for (int i = 1; i < y -1; i++)
        mid_line(center, x);
    if (y != 1)
        first_line(right, center, left, x);
}