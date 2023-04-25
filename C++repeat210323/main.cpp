#include <cstddef>
#include <iostream>
#include <time.h>
using namespace std;

string Random(int size)
{
    string alph = "qwertyuiopasdfghjklzxcvbnm";
    string n;
    for (int i = 0;i < size;i++)
    {
        n += alph[rand() % 26];
    }
    return n;
}
void Sort(string* Names, int* prices,int size)
{
    for (int i = 0;i < size;i++)
    {
        for (int j = 0;j < size;j++)
        {
            for (int k = 0;k < Names[i].length();k++)
            {
                if (Names[i][k] <  Names[j][k])
                {
                    string temp = Names[i];
                    Names[i] = Names[j];
                    Names[j] = temp;
                    int tempp = prices[i];
                    prices[i] = prices[j];
                    prices[j] = tempp;
                    break;
                }
                else if (Names[i][k] > Names[j][k])break;
            }
        }
    }
}
void Cheapest(string* Names, int* prices, int size)
{
    int min = prices[0];
    int ind{};
    for (int i = 1;i < size;i++)
    {
        if (min > prices[i])
        {
            min = prices[i];
            ind = i;
        }
    }
    cout <<endl<< Names[ind] << prices[ind];
}
void Expensive(string* Names, int* prices, int size)
{
    int max = prices[0];
    int ind{};
    for (int i = 1;i < size;i++)
    {
        if (max < prices[i])
        {
            max = prices[i];
            ind = i;
        }
    }
    cout << endl << Names[ind] << prices[ind];
}
int main()
{
    int prices[10];
    string Names[10];
    srand(time(NULL));
    for (int i = 0;i < 10;i++)
    {
        prices[i] = rand() % 100 + 20;
        Names[i] = Random(5);
        cout << Names[i] << " " << prices[i] << " ";
    }
    cout << endl;
    Sort(Names, prices,10);
    for (int i = 0;i < 10;i++)
        cout << Names[i] << " " << prices[i] << " ";
    Expensive(Names, prices, 10);
    Cheapest(Names,prices,10);
}