#pragma once
#include <iostream>
using namespace std;

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