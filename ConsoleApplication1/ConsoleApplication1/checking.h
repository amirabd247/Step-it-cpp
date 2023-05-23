#pragma once
bool checking(int** table, int x, int y)
{
    if ((table[y][x] != 219 &&
        table[y][x + 1] != 219 &&
        table[y][x - 1] != 219 &&
        table[y + 1][x + 1] != 219 &&
        table[y - 1][x - 1] != 219 &&
        table[y + 1][x - 1] != 219 &&
        table[y - 1][x + 1] != 219 &&
        table[y + 1][x] != 219 &&
        table[y - 1][x] != 219))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool sheep_checking(int** table, int x, int y)
{

    if ((table[y][x + 1] != 219 &&
        table[y][x - 1] != 219 &&
        table[y + 1][x] != 219 &&
        table[y - 1][x] != 219))
    {
        return true;
    }
    else
    {
        return false;
    }

}