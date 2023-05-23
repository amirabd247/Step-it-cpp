#include <iostream>
#include <time.h>
#include "checking.h"
#include "printing.h"

using namespace std;

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

void print(int** table)
{
    cout << "_____________________" << endl;
    for (int i = 1; i < 11; ++i)
    {
        cout << "|";
        for (int j = 1; j < 11; ++j)
        {
            cout << (char)table[i][j] << "|";
        }
        cout << endl;
    }
    cout << "---------------------" << endl;

}

void CPUvsPlayer(int**& table1, int**& table2, int**& smarttable)
{
    int bot_memory[8]{};
    int choice{};
    int step{};
    cout << "1.Auto 2.Manual" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
    {
        table1_sheep1(table1);
        table2_sheep1(table2);
        table1_sheep2(table1);
        table2_sheep2(table2);
        table1_sheep3(table1);
        table2_sheep3(table2);
        table1_sheep4(table1);
        table2_sheep4(table2);
        break;
    }
    case 2:
    {

        table2_sheep1(table2);

        table2_sheep2(table2);

        table2_sheep3(table2);

        table2_sheep4(table2);
        PlayerSheep(table1);
        break;
    }
    }

    cout << "The Game has been started!" << endl;
    while (true)
    {
        cout << "Step " << step << endl;
        cout << "Your Table" << endl;
        print(table1);
        cout << "Bot Table" << endl;
        print(smarttable);
        shootingPlayer(table2, smarttable);
        smartshooting(table1, *&bot_memory);
        step += 1;
    }

}

void table1_sheep1(int**& table1)
{
    int x{};
    int y{};

    for (int i = 0; i < 4; i += 0)  //размещение корбалей
    {

        x = 1 + rand() % 10;
        y = 1 + rand() % 10;

        while (true)
        {
            if (checking(table1, x, y))
            {
                if (table1[y][x] == 176)
                {
                    table1[y][x] = 219;
                }
                i += 1;
                break;
            }
            else
            {
                x = 1 + rand() % 10;
                y = 1 + rand() % 10;
            }
        }
    }

}

void table2_sheep1(int**& table2)
{
    int x{};
    int y{};

    for (int i = 0; i < 4; i += 0)  //размещение корбалей
    {
        x = 1 + rand() % 10;
        y = 1 + rand() % 10;

        while (true)
        {
            if (checking(table2, x, y))
            {
                if (table2[y][x] == 176)
                {
                    table2[y][x] = 219;
                }
                i += 1;
                break;
            }
            else
            {
                x = 1 + rand() % 10;
                y = 1 + rand() % 10;
            }
        }
    }

}

void table1_sheep2(int**& table1)
{
    int x{};
    int y{};
    int up_down_left_right{};

    for (int i = 0; i < 3; i += 0)  //размещение корбалей
    {

        x = 1 + rand() % 10;
        y = 1 + rand() % 10;
        up_down_left_right = rand() % 4;

        while (true)
        {
            if (checking(table1, x, y))
            {
                if (table1[y][x] == 176)
                {
                    if (up_down_left_right == 0)
                    {
                        if (y == 10)
                        {
                            break;
                        }
                        if (checking(table1, x, y + 1))
                        {
                            table1[y][x] = 219;
                            table1[y + 1][x] = 219;
                            i += 1;
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                    else if (up_down_left_right == 1)
                    {
                        if (y == 1)
                        {
                            break;
                        }
                        if (checking(table1, x, y - 1))
                        {
                            table1[y][x] = 219;
                            table1[y - 1][x] = 219;
                            i += 1;
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                    else if (up_down_left_right == 2)
                    {
                        if (x == 0) {
                            break;
                        }
                        if (checking(table1, x - 1, y))
                        {
                            table1[y][x] = 219;
                            table1[y][x - 1] = 219;
                            i += 1;
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                    else if (up_down_left_right == 3)
                    {
                        if (x == 10)
                        {
                            break;
                        }
                        if (checking(table1, x + 1, y))
                        {
                            table1[y][x] = 219;
                            table1[y][x + 1] = 219;
                            i += 1;
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                }
                break;
            }
            else
            {
                x = 1 + rand() % 10;
                y = 1 + rand() % 10;
            }
        }
    }

}

void table2_sheep2(int**& table2)
{
    int x{};
    int y{};
    int up_down_left_right{};

    for (int i = 0; i < 3; i += 0)  //размещение корбалей
    {
        x = 1 + rand() % 10;
        y = 1 + rand() % 10;
        up_down_left_right = rand() % 4;

        while (true)
        {
            if (checking(table2, x, y))
            {
                if (table2[y][x] == 176)
                {
                    if (up_down_left_right == 0)
                    {
                        if (y == 10) {
                            break;
                        }
                        if (checking(table2, x, y + 1))
                        {
                            table2[y][x] = 219;
                            table2[y + 1][x] = 219;
                            i += 1;
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                    else if (up_down_left_right == 1)
                    {
                        if (y == 1)
                        {
                            break;
                        }
                        if (checking(table2, x, y - 1))
                        {
                            table2[y][x] = 219;
                            table2[y - 1][x] = 219;
                            i += 1;
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                    else if (up_down_left_right == 2)
                    {
                        if (x == 0) {
                            break;
                        }
                        if (checking(table2, x - 1, y))
                        {
                            table2[y][x] = 219;
                            table2[y][x - 1] = 219;
                            i += 1;
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                    else if (up_down_left_right == 3)
                    {
                        if (x == 10)
                        {
                            break;
                        }
                        if (checking(table2, x + 1, y))
                        {
                            table2[y][x] = 219;
                            table2[y][x + 1] = 219;
                            i += 1;
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                }

                cout << endl;
                break;
            }
            else
            {
                x = 1 + rand() % 10;
                y = 1 + rand() % 10;
            }
        }
    }

}

void table1_sheep3(int**& table1)
{
    int x{};
    int y{};
    int up_down_left_right{};

    for (int i = 0; i < 2; i += 0)  //размещение корбалей
    {
        x = 1 + rand() % 10;
        y = 1 + rand() % 10;
        up_down_left_right = rand() % 4;

        while (true)
        {

            if (checking(table1, x, y))
            {
                if (table1[y][x] == 176)
                {
                    if (up_down_left_right == 0)
                    {
                        if (y == 10) {
                            break;
                        }
                        if (checking(table1, x, y + 1))
                        {
                            if (y != 9)
                            {
                                if (checking(table1, x, y + 2))
                                {
                                    table1[y][x] = 219;
                                    table1[y + 1][x] = 219;
                                    table1[y + 2][x] = 219;
                                    i += 1;
                                }
                            }
                            else
                            {
                                if (checking(table1, x, y - 1))
                                {
                                    table1[y][x] = 219;
                                    table1[y + 1][x] = 219;
                                    table1[y - 1][x] = 219;
                                    i += 1;
                                }
                            }
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                    else if (up_down_left_right == 1)
                    {
                        if (y == 1)
                        {
                            break;
                        }
                        if (checking(table1, x, y - 1))
                        {
                            if (y != 2) {
                                if (checking(table1, x, y - 2))
                                {
                                    table1[y][x] = 219;
                                    table1[y - 1][x] = 219;
                                    table1[y - 2][x] = 219;
                                    i += 1;
                                }
                            }
                            else
                            {
                                if (checking(table1, x, y + 1))
                                {
                                    table1[y][x] = 219;
                                    table1[y - 1][x] = 219;
                                    table1[y + 1][x] = 219;
                                    i += 1;
                                }
                            }
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                    else if (up_down_left_right == 2)
                    {
                        if (x == 1)
                        {
                            break;
                        }
                        if (checking(table1, x - 1, y))
                        {
                            if (x != 2) {
                                if (checking(table1, x - 2, y))
                                {
                                    table1[y][x] = 219;
                                    table1[y][x - 1] = 219;
                                    table1[y][x - 2] = 219;
                                    i += 1;
                                }
                            }
                            else
                            {
                                if (checking(table1, x + 1, y))
                                {
                                    table1[y][x] = 219;
                                    table1[y][x - 1] = 219;
                                    table1[y][x + 1] = 219;
                                    i += 1;
                                }
                            }
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                    else if (up_down_left_right == 3)
                    {
                        if (x == 10)
                        {
                            break;
                        }
                        if (checking(table1, x + 1, y))
                        {
                            if (x != 9)
                            {
                                if (checking(table1, x + 2, y))
                                {
                                    table1[y][x] = 219;
                                    table1[y][x + 1] = 219;
                                    table1[y][x + 2] = 219;
                                    i += 1;
                                }
                            }
                            else
                            {
                                if (checking(table1, x - 1, y))
                                {
                                    table1[y][x] = 219;
                                    table1[y][x + 1] = 219;
                                    table1[y][x - 1] = 219;
                                    i += 1;
                                }
                            }
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                }
                break;
            }
            else
            {
                x = 1 + rand() % 10;
                y = 1 + rand() % 10;
            }
        }
    }

}

void table2_sheep3(int**& table2)
{
    int x{};
    int y{};
    int up_down_left_right{};

    for (int i = 0; i < 2; i += 0)  //размещение корбалей
    {
        x = 1 + rand() % 10;
        y = 1 + rand() % 10;
        up_down_left_right = rand() % 4;

        while (true)
        {
            if (checking(table2, x, y))
            {
                if (table2[y][x] == 176)
                {
                    if (up_down_left_right == 0)
                    {
                        if (y == 10) {
                            break;
                        }
                        if (checking(table2, x, y + 1))
                        {
                            if (y != 9)
                            {
                                if (checking(table2, x, y + 2))
                                {
                                    table2[y][x] = 219;
                                    table2[y + 1][x] = 219;
                                    table2[y + 2][x] = 219;
                                    i += 1;
                                }
                            }
                            else
                            {
                                if (checking(table2, x, y - 1))
                                {
                                    table2[y][x] = 219;
                                    table2[y + 1][x] = 219;
                                    table2[y - 1][x] = 219;
                                    i += 1;
                                }
                            }
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                    else if (up_down_left_right == 1)
                    {
                        if (y == 1)
                        {
                            break;
                        }
                        if (checking(table2, x, y - 1))
                        {
                            if (y != 2) {
                                if (checking(table2, x, y - 2))
                                {
                                    table2[y][x] = 219;
                                    table2[y - 1][x] = 219;
                                    table2[y - 2][x] = 219;
                                    i += 1;
                                }
                            }
                            else
                            {
                                if (checking(table2, x, y + 1))
                                {
                                    table2[y][x] = 219;
                                    table2[y - 1][x] = 219;
                                    table2[y + 1][x] = 219;
                                    i += 1;
                                }
                            }
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                    else if (up_down_left_right == 2)
                    {
                        if (x == 1)
                        {
                            break;
                        }
                        if (checking(table2, x - 1, y))
                        {
                            if (x != 2) {
                                if (checking(table2, x - 2, y))
                                {
                                    table2[y][x] = 219;
                                    table2[y][x - 1] = 219;
                                    table2[y][x - 2] = 219;
                                    i += 1;
                                }
                            }
                            else
                            {
                                if (checking(table2, x + 1, y))
                                {
                                    table2[y][x] = 219;
                                    table2[y][x - 1] = 219;
                                    table2[y][x + 1] = 219;
                                    i += 1;
                                }
                            }
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                    else if (up_down_left_right == 3)
                    {
                        if (x == 10)
                        {
                            break;
                        }
                        if (checking(table2, x + 1, y))
                        {
                            if (x != 9)
                            {
                                if (checking(table2, x + 2, y))
                                {
                                    table2[y][x] = 219;
                                    table2[y][x + 1] = 219;
                                    table2[y][x + 2] = 219;
                                    i += 1;
                                }
                            }
                            else
                            {
                                if (checking(table2, x - 1, y))
                                {
                                    table2[y][x] = 219;
                                    table2[y][x + 1] = 219;
                                    table2[y][x - 1] = 219;
                                    i += 1;
                                }
                            }
                        }
                        else
                        {
                            up_down_left_right = (bool)rand() % 4;
                        }
                    }
                }

                break;
            }
            else
            {
                x = 1 + rand() % 10;
                y = 1 + rand() % 10;
            }
        }
    }

}

void table1_sheep4(int**& table1)
{

    int x{};
    int y{};
    int up_down_left_right{};


    while (true)
    {

        x = 1 + rand() % 10;
        y = 1 + rand() % 10;
        up_down_left_right = rand() % 4;

        if (checking(table1, x, y))
        {
            if (table1[y][x] == 176)
            {
                if (up_down_left_right == 0)
                {
                    if (y == 10) {
                        continue;
                    }
                    if (checking(table1, x, y + 1))
                    {
                        if (y != 9)
                        {
                            if (checking(table1, x, y + 2))
                            {
                                if (y != 8)
                                {
                                    if (checking(table1, x, y + 3))
                                    {
                                        table1[y][x] = 219;
                                        table1[y + 1][x] = 219;
                                        table1[y + 2][x] = 219;
                                        table1[y + 3][x] = 219;

                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (checking(table1, x, y - 1))
                            {
                                if (checking(table1, x, y - 2))
                                {
                                    table1[y][x] = 219;
                                    table1[y + 1][x] = 219;
                                    table1[y - 1][x] = 219;
                                    table1[y - 2][x] = 219;

                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        up_down_left_right = (bool)rand() % 4;
                    }
                }
                else if (up_down_left_right == 1)
                {
                    if (y == 1)
                    {
                        continue;
                    }
                    if (checking(table1, x, y - 1))
                    {
                        if (y != 2)
                        {
                            if (checking(table1, x, y - 2))
                            {
                                if (y != 3)
                                {
                                    table1[y][x] = 219;
                                    table1[y - 1][x] = 219;
                                    table1[y - 2][x] = 219;
                                    table1[y - 3][x] = 219;

                                    break;
                                }
                            }
                        }
                        else
                        {
                            if (checking(table1, x, y + 1))
                            {
                                if (checking(table1, x, y + 2))
                                {
                                    table1[y][x] = 219;
                                    table1[y - 1][x] = 219;
                                    table1[y + 1][x] = 219;
                                    table1[y + 2][x] = 219;

                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        up_down_left_right = (bool)rand() % 4;
                    }
                }
                else if (up_down_left_right == 2)
                {
                    if (x == 1)
                    {
                        continue;
                    }
                    if (checking(table1, x - 1, y))
                    {
                        if (x != 2)
                        {
                            if (checking(table1, x - 2, y))
                            {
                                if (x != 3)
                                {
                                    table1[y][x] = 219;
                                    table1[y][x - 1] = 219;
                                    table1[y][x - 2] = 219;
                                    table1[y][x - 3] = 219;
                                    break;
                                }
                            }
                        }
                        else
                        {
                            if (checking(table1, x + 1, y))
                            {
                                if (checking(table1, x + 2, y))
                                {
                                    table1[y][x] = 219;
                                    table1[y][x - 1] = 219;
                                    table1[y][x + 1] = 219;
                                    table1[y][x + 2] = 219;

                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        up_down_left_right = (bool)rand() % 4;
                    }
                }
                else if (up_down_left_right == 3)
                {
                    if (x == 10)
                    {
                        continue;
                    }
                    if (checking(table1, x + 1, y))
                    {
                        if (x != 9)
                        {
                            if (checking(table1, x + 2, y))
                            {
                                if (x != 8)
                                {
                                    if (checking(table1, x + 3, y))
                                    {
                                        table1[y][x] = 219;
                                        table1[y][x + 1] = 219;
                                        table1[y][x + 2] = 219;
                                        table1[y][x + 3] = 219;

                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (checking(table1, x - 1, y))
                            {
                                if (checking(table1, x - 2, y))
                                {
                                    table1[y][x] = 219;
                                    table1[y][x + 1] = 219;
                                    table1[y][x - 1] = 219;
                                    table1[y][x - 2] = 219;

                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        up_down_left_right = (bool)rand() % 4;
                    }
                }
            }
        }
        else
        {
            x = 1 + rand() % 10;
            y = 1 + rand() % 10;
            up_down_left_right = rand() % 4;
        }
    }


}

void table2_sheep4(int**& table2)
{

    int x{};
    int y{};
    int up_down_left_right{};


    while (true)
    {

        x = 1 + rand() % 10;
        y = 1 + rand() % 10;
        up_down_left_right = rand() % 4;

        if (checking(table2, x, y))
        {
            if (table2[y][x] == 176)
            {
                if (up_down_left_right == 0)
                {
                    if (y == 10) {
                        continue;
                    }
                    if (checking(table2, x, y + 1))
                    {
                        if (y != 9)
                        {
                            if (checking(table2, x, y + 2))
                            {
                                if (y != 8)
                                {
                                    if (checking(table2, x, y + 3))
                                    {
                                        table2[y][x] = 219;
                                        table2[y + 1][x] = 219;
                                        table2[y + 2][x] = 219;
                                        table2[y + 3][x] = 219;

                                        cout << endl;
                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (checking(table2, x, y - 1))
                            {
                                if (checking(table2, x, y - 2))
                                {
                                    table2[y][x] = 219;
                                    table2[y + 1][x] = 219;
                                    table2[y - 1][x] = 219;
                                    table2[y - 2][x] = 219;

                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        up_down_left_right = (bool)rand() % 4;
                    }
                }
                else if (up_down_left_right == 1)
                {
                    if (y == 1)
                    {
                        continue;
                    }
                    if (checking(table2, x, y - 1))
                    {
                        if (y != 2)
                        {
                            if (checking(table2, x, y - 2))
                            {
                                if (y != 3)
                                {
                                    table2[y][x] = 219;
                                    table2[y - 1][x] = 219;
                                    table2[y - 2][x] = 219;
                                    table2[y - 3][x] = 219;

                                    break;
                                }
                            }
                        }
                        else
                        {
                            if (checking(table2, x, y + 1))
                            {
                                if (checking(table2, x, y + 2))
                                {
                                    table2[y][x] = 219;
                                    table2[y - 1][x] = 219;
                                    table2[y + 1][x] = 219;
                                    table2[y + 2][x] = 219;

                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        up_down_left_right = (bool)rand() % 4;
                    }
                }
                else if (up_down_left_right == 2)
                {
                    if (x == 1)
                    {
                        continue;
                    }
                    if (checking(table2, x - 1, y))
                    {
                        if (x != 2)
                        {
                            if (checking(table2, x - 2, y))
                            {
                                if (x != 3)
                                {
                                    table2[y][x] = 219;
                                    table2[y][x - 1] = 219;
                                    table2[y][x - 2] = 219;
                                    table2[y][x - 3] = 219;

                                    break;
                                }
                            }
                        }
                        else
                        {
                            if (checking(table2, x + 1, y))
                            {
                                if (checking(table2, x + 2, y))
                                {
                                    table2[y][x] = 219;
                                    table2[y][x - 1] = 219;
                                    table2[y][x + 1] = 219;
                                    table2[y][x + 2] = 219;

                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        up_down_left_right = (bool)rand() % 4;
                    }
                }
                else if (up_down_left_right == 3)
                {
                    if (x == 10)
                    {
                        continue;
                    }
                    if (checking(table2, x + 1, y))
                    {
                        if (x != 9)
                        {
                            if (checking(table2, x + 2, y))
                            {
                                if (x != 8)
                                {
                                    if (checking(table2, x + 3, y))
                                    {
                                        table2[y][x] = 219;
                                        table2[y][x + 1] = 219;
                                        table2[y][x + 2] = 219;
                                        table2[y][x + 3] = 219;

                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (checking(table2, x - 1, y))
                            {
                                if (checking(table2, x - 2, y))
                                {
                                    table2[y][x] = 219;
                                    table2[y][x + 1] = 219;
                                    table2[y][x - 1] = 219;
                                    table2[y][x - 2] = 219;

                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        up_down_left_right = (bool)rand() % 4;
                    }
                }
            }
        }
        else
        {
            x = 1 + rand() % 10;
            y = 1 + rand() % 10;
            up_down_left_right = rand() % 4;
        }
    }


}

void shooter(int**& table)
{
    int x{};
    int y{};
    int up_down_left_right{};

    x = 1 + rand() % 10;
    y = 1 + rand() % 10;
    if (table[y][x] == 2 || table[y][x] == 8)
    {
        x = 1 + rand() % 10;
        y = 1 + rand() % 10;
    }
    else
    {
        if (table[y][x] == 219)
        {
            table[y][x] = 88;
        }
        else if (table[y][x] == 176)
        {
            table[y][x] = 42;
        }
    }


}

void cpuVScpu(int**& table1, int**& table2) {
    table1_sheep1(table1);
    table2_sheep1(table2);
    table1_sheep2(table1);
    table2_sheep2(table2);
    table1_sheep3(table1);
    table2_sheep3(table2);
    table1_sheep4(table1);
    table2_sheep4(table2);
    int counter1{};
    int counter2{};
    cout << "Game has started! 1 is Sheep / 0 is Water / 8 is Crushed Sheep / 2 is Shot spots" << endl;
    cout << "Table of BOT1" << endl;

    print(table1);
    cout << "Table of BOT2" << endl;

    print(table2);
    for (int i = 0; i < 9999; ++i)
    {
        counter1 = 0;
        counter2 = 0;
        for (int j = 1; j < 11; ++j)
        {
            for (int k = 1; k < 11; ++k) {
                if (table1[j][k] == 219)
                {
                    counter1 += 1;
                }
            }

        }
        if (counter1 == 0)
        {
            cout << "Bot2 wins!" << endl;
            break;
        }


        for (int j = 1; j < 11; ++j)
        {
            for (int k = 1; k < 11; ++k) {
                if (table2[j][k] == 219)
                {
                    counter2 += 1;
                }
            }
        }
        if (counter2 == 0)
        {
            cout << "Bot1 wins!" << endl;
            break;
        }
        cout << "__________________________________________________________________________" << endl;
        cout << "step " << i << endl;

        shooter(table2);
        shooter(table1);

        cout << "Table of BOT1" << endl;

        print(table1);
        cout << "Table of BOT2" << endl;

        print(table2);
    }
}

void PlayerSheep(int**& table)
{
    int x{};
    int y{};
    int up_down_left_right{};

    cout << "Enter the single ones" << endl;
    for (int i = 0; i < 4; i += 0)
    {
        cout << "Enter the x coords" << endl;
        cin >> x;
        cout << "Enter the y coords" << endl;
        cin >> y;
        if (checking(table, x, y))
        {
            table[y][x] = 219;
            i += 1;
        }
        else
        {
            cout << "Coords are incorrect" << endl;
            cout << "Enter the x coords" << endl;
            cin >> x;
            cout << "Enter the y coords" << endl;
            cin >> y;
        }
    }

    cout << "Enter the double ones" << endl;
    for (int i = 0; i < 3; i += 0)
    {
        cout << "Enter the x coords" << endl;
        cin >> x;
        cout << "Enter the y coords" << endl;
        cin >> y;
        cout << "Enter the direction 0.Up 1.Down 2.Left 3.Right" << endl;
        cin >> up_down_left_right;
        if (checking(table, x, y))
        {
            if (up_down_left_right == 0 && y != 1)
            {
                if (checking(table, x, y - 1))
                {
                    table[y][x] = 219;
                    table[y - 1][x] = 219;
                    i += 1;
                }
                else
                {
                    cout << "Direction is incorrect" << endl;
                    cin >> up_down_left_right;
                }
            }

            else if (up_down_left_right == 1 && y != 10)
            {
                if (checking(table, x, y + 1))
                {
                    table[y][x] = 1;
                    table[y + 1][x] = 1;
                    i += 1;
                }
                else
                {
                    cout << "Direction is incorrect" << endl;
                    cin >> up_down_left_right;
                }
            }

            else if (up_down_left_right == 2 && x != 1)
            {
                if (checking(table, x - 1, y))
                {
                    table[y][x] = 219;
                    table[y][x - 1] = 219;
                    i += 1;
                }
                else
                {
                    cout << "Direction is incorrect" << endl;
                    cin >> up_down_left_right;
                }
            }

            else if (up_down_left_right == 3 && x != 10)
            {
                if (checking(table, x + 1, y))
                {
                    table[y][x] = 219;
                    table[y][x + 1] = 219;
                    i += 1;
                }
                else
                {
                    cout << "Direction is incorrect" << endl;
                    cin >> up_down_left_right;
                }
            }
            else
            {
                cout << "Direction is incorrect" << endl;
                cin >> up_down_left_right;
            }
        }
        else
        {
            cout << "Coords are incorrect" << endl;
            cout << "Enter the x coords" << endl;
            cin >> x;
            cout << "Enter the y coords" << endl;
            cin >> y;
        }

    }



    cout << "Enter the triple ones" << endl;
    for (int i = 0; i < 2; i += 0)  //размещение корбалей
    {
        cout << "Enter the x coords" << endl;
        cin >> x;
        cout << "Enter the y coords" << endl;
        cin >> y;
        cout << "Enter the direction 0.Up 1.Down 2.Left 3.Right" << endl;
        cin >> up_down_left_right;


        if (checking(table, x, y))
        {
            if (table[y][x] == 176)
            {
                if (up_down_left_right == 0 && y != 1)
                {

                    if (checking(table, x, y - 1))
                    {
                        if (y != 2)
                        {
                            if (checking(table, x, y - 2))
                            {
                                table[y][x] = 219;
                                table[y - 1][x] = 219;
                                table[y - 2][x] = 219;
                                i += 1;
                            }
                        }
                        else
                        {
                            if (checking(table, x, y + 1))
                            {
                                table[y][x] = 219;
                                table[y - 1][x] = 219;
                                table[y + 1][x] = 219;
                                i += 1;
                            }
                        }
                    }
                    else
                    {
                        cout << "Direction is incorrect" << endl;
                        cin >> up_down_left_right;
                    }
                }
                else if (up_down_left_right == 1)
                {
                    if (checking(table, x, y + 1) && y != 10)
                    {
                        if (y != 2)
                        {
                            if (checking(table, x, y + 2))
                            {
                                table[y][x] = 219;
                                table[y - 1][x] = 219;
                                table[y - 2][x] = 219;
                                i += 1;
                            }
                        }
                        else
                        {
                            if (checking(table, x, y - 1))
                            {
                                table[y][x] = 219;
                                table[y - 1][x] = 219;
                                table[y + 1][x] = 219;
                                i += 1;
                            }
                        }
                    }
                    else
                    {
                        cout << "Direction is incorrect" << endl;
                        cin >> up_down_left_right;
                    }
                }
                else if (up_down_left_right == 2)
                {
                    if (checking(table, x - 1, y) && x != 1)
                    {
                        if (x != 2) {
                            if (checking(table, x - 2, y))
                            {
                                table[y][x] = 219;
                                table[y][x - 1] = 219;
                                table[y][x - 2] = 219;
                                i += 1;
                            }
                        }
                        else
                        {
                            if (checking(table, x + 1, y))
                            {
                                table[y][x] = 219;
                                table[y][x - 1] = 219;
                                table[y][x + 1] = 219;
                                i += 1;
                            }
                        }
                    }
                    else
                    {
                        cout << "Direction is incorrect" << endl;
                        cin >> up_down_left_right;
                    }
                }
                else if (up_down_left_right == 3)
                {
                    if (checking(table, x + 1, y) && x != 10)
                    {
                        if (x != 9)
                        {
                            if (checking(table, x + 2, y))
                            {
                                table[y][x] = 219;
                                table[y][x + 1] = 219;
                                table[y][x + 2] = 219;
                                i += 1;
                            }
                        }
                        else
                        {
                            if (checking(table, x - 1, y))
                            {
                                table[y][x] = 219;
                                table[y][x + 1] = 219;
                                table[y][x - 1] = 219;
                                i += 1;
                            }
                        }
                    }
                    else
                    {
                        cout << "Direction is incorrect" << endl;
                        cin >> up_down_left_right;
                    }
                }
            }

        }
        else
        {
            cout << "Coords are incorrect" << endl;
            cout << "Enter the x coords" << endl;
            cin >> x;
            cout << "Enter the y coords" << endl;
            cin >> y;
        }

    }

    cout << "Enter the quadriple ones" << endl;
    while (true)
    {

        cout << "Enter the x coords" << endl;
        cin >> x;
        cout << "Enter the y coords" << endl;
        cin >> y;
        cout << "Enter the direction 0.Up 1.Down 2.Left 3.Right" << endl;
        cin >> up_down_left_right;

        if (checking(table, x, y))
        {
            if (table[y][x] == 176)
            {
                if (up_down_left_right == 0)
                {
                    if (y == 10)
                    {
                        continue;
                    }
                    if (checking(table, x, y + 1))
                    {
                        if (y != 9)
                        {
                            if (checking(table, x, y + 2))
                            {
                                if (y != 8)
                                {
                                    if (checking(table, x, y + 3))
                                    {
                                        table[y][x] = 219;
                                        table[y + 1][x] = 219;
                                        table[y + 2][x] = 219;
                                        table[y + 3][x] = 219;

                                        cout << endl;
                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (checking(table, x, y - 1))
                            {
                                if (checking(table, x, y - 2))
                                {
                                    table[y][x] = 219;
                                    table[y + 1][x] = 219;
                                    table[y - 1][x] = 219;
                                    table[y - 2][x] = 219;

                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        cout << "Direction is incorrect" << endl;
                        cin >> up_down_left_right;
                    }
                }
                else if (up_down_left_right == 1)
                {
                    if (y == 1)
                    {
                        continue;
                    }
                    if (checking(table, x, y - 1))
                    {
                        if (y != 2)
                        {
                            if (checking(table, x, y - 2))
                            {
                                if (y != 3)
                                {
                                    table[y][x] = 219;
                                    table[y - 1][x] = 219;
                                    table[y - 2][x] = 219;
                                    table[y - 3][x] = 219;

                                    break;
                                }
                            }
                        }
                        else
                        {
                            if (checking(table, x, y + 1))
                            {
                                if (checking(table, x, y + 2))
                                {
                                    table[y][x] = 219;
                                    table[y - 1][x] = 219;
                                    table[y + 1][x] = 219;
                                    table[y + 2][x] = 219;

                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        cout << "Direction is incorrect" << endl;
                        cin >> up_down_left_right;
                    }
                }
                else if (up_down_left_right == 2)
                {
                    if (x == 1)
                    {
                        continue;
                    }
                    if (checking(table, x - 1, y))
                    {
                        if (x != 2)
                        {
                            if (checking(table, x - 2, y))
                            {
                                if (x != 3)
                                {
                                    table[y][x] = 219;
                                    table[y][x - 1] = 219;
                                    table[y][x - 2] = 219;
                                    table[y][x - 3] = 219;

                                    break;
                                }
                            }
                        }
                        else
                        {
                            if (checking(table, x + 1, y))
                            {
                                if (checking(table, x + 2, y))
                                {
                                    table[y][x] = 219;
                                    table[y][x - 1] = 219;
                                    table[y][x + 1] = 219;
                                    table[y][x + 2] = 219;

                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        cout << "Direction is incorrect" << endl;
                        cin >> up_down_left_right;
                    }
                }
                else if (up_down_left_right == 3)
                {
                    if (x == 10)
                    {
                        continue;
                    }
                    if (checking(table, x + 1, y))
                    {
                        if (x != 9)
                        {
                            if (checking(table, x + 2, y))
                            {
                                if (x != 8)
                                {
                                    if (checking(table, x + 3, y))
                                    {
                                        table[y][x] = 219;
                                        table[y][x + 1] = 219;
                                        table[y][x + 2] = 219;
                                        table[y][x + 3] = 219;

                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (checking(table, x - 1, y))
                            {
                                if (checking(table, x - 2, y))
                                {
                                    table[y][x] = 219;
                                    table[y][x + 1] = 219;
                                    table[y][x - 1] = 219;
                                    table[y][x - 2] = 219;

                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        cout << "Direction is incorrect" << endl;
                        cin >> up_down_left_right;
                    }
                }
            }
        }
        else
        {
            cout << "Coords are incorrect" << endl;
            cout << "Enter the x coords" << endl;
            cin >> x;
            cout << "Enter the y coords" << endl;
            cin >> y;
        }
    }


}

void shootingPlayer(int**& table, int**& smarttable)
{
    int x{};
    int y{};
    int up_down_left_right{};

    cout << "Enter the x coords" << endl;

    cin >> x;

    cout << "Enter the y coords" << endl;

    cin >> y;

    if (table[y][x] == 42 || table[y][x] == 88)
    {
        cout << "Coords are not correct";
        cout << "Enter the x coords" << endl;

        cin >> x;

        cout << "Enter the y coords" << endl;

        cin >> y;
    }
    else
    {
        if (table[y][x] == 219)
        {
            if (sheep_checking(table, x, y))
            {
                cout << "Killed!" << endl;
                table[y][x] = 88;
                smarttable[y][x] = 88;
            }
            else
            {
                cout << "Wounded!" << endl;
                table[y][x] = 88;
                smarttable[y][x] = 88;
            }

        }
        else if (table[y][x] == 176)
        {
            cout << "Got past!" << endl;
            table[y][x] = 42;
            smarttable[y][x] = 42;
        }
    }
}


void smartshooting(int**& table, int* memory)
{
    int x{};
    int y{};
    int tmp[8]{};
    if (memory[0] != 0)
    {
        y = memory[0];
        x = memory[1];
        if (table[y][x] == 219)
        {
            if (sheep_checking(table, x, y))
            {
                memory[0] = y + 1;
                memory[1] = x;
                memory[2] = y - 1;
                memory[3] = x;
                memory[4] = y;
                memory[5] = x - 1;
                memory[6] = y;
                memory[7] = x + 1;
                table[y][x] = 88;
            }
            else
            {
                table[y][x] = 88;
                memory[0] = 0;
                memory[1] = 0;
                memory[2] = 0;
                memory[3] = 0;
                memory[4] = 0;
                memory[5] = 0;
                memory[6] = 0;
                memory[7] = 0;
            }
        }
        else if (table[y][x] == 176)
        {
            memory[0] = 0;
            memory[1] = 0;
            table[y][x] = 42;
            tmp[0] = memory[2];
            tmp[1] = memory[3];
            tmp[2] = memory[4];
            tmp[3] = memory[5];
            tmp[4] = memory[6];
            tmp[5] = memory[7];
            tmp[6] = memory[0];
            tmp[7] = memory[1];
            for (int i = 0; i < 9; ++i)
            {
                memory[i] = tmp[i];
            }
        }

    }
    else
    {
        int x{};
        int y{};

        x = 1 + rand() % 10;
        y = 1 + rand() % 10;
        if (table[y][x] == 42 || table[y][x] == 88)
        {
            x = 1 + rand() % 10;
            y = 1 + rand() % 10;
        }
        else
        {
            if (table[y][x] == 219)
            {
                if (sheep_checking(table, x, y))
                {
                    memory[0] = y + 1;
                    memory[1] = x;
                    memory[2] = y - 1;
                    memory[3] = x;
                    memory[4] = y;
                    memory[5] = x - 1;
                    memory[6] = y;
                    memory[7] = x + 1;
                    table[y][x] = 88;
                }
                else
                {
                    table[y][x] = 88;
                    table[y][x] = 42;
                    table[y][x + 1] = 42;
                    table[y][x - 1] = 42;
                    table[y + 1][x + 1] = 42;
                    table[y - 1][x - 1] = 42;
                    table[y + 1][x - 1] = 42;
                    table[y - 1][x + 1] = 42;
                    table[y + 1][x] = 42;
                    table[y - 1][x] = 42;
                }
            }
            else if (table[y][x] == 176)
            {
                table[y][x] = 42;
            }
        }
    }
}

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


int main() {

    srand(time(NULL));

    int** table1 = new int* [11] {};
    for (int i = 0; i < 12; ++i)
    {
        table1[i] = new int[12] {176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176};
    }

    int** table2 = new int* [11] {};
    for (int i = 0; i < 12; ++i)
    {
        table2[i] = new int[12] {176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176};
    }

    int** smarttable = new int* [11] {};
    for (int i = 0; i < 12; ++i)
    {
        smarttable[i] = new int[12] {176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176, 176};
    }

    int choice{};

    cout << "Enter the choice" << endl
        << "1.CPU vs CPU" << endl
        << "2.Player vs CPU" << endl;
    cin >> choice;
    if (choice == 1)
    {
        cpuVScpu(table1, table2);
    }
    if (choice == 2)
    {
        CPUvsPlayer(table1, table2, smarttable);
    }
}
