#include <cstddef>
#include <iostream>
#include <time.h>
using namespace std;
void Info(int* arr, int size, int& sum, int& product)
{
    int s{}, p{ 1 };
    for (int i = 0;i < size;i++)
    {
        s += arr[i];
        p *= arr[i];
    }
    sum = s;product = p;
}
void Info(int* arr, int size, int& below,int&above,int&equal)
{
    int b{}, a{}, e{};
    for (int i = 0;i < size;i++)
    {
        if (arr[i] < 0)b++;
        else if (arr[i] > 0)a++;
        else e++;
    }
    below = b;
    above = a;
    equal = e;
}
int Check(int* arr, int a_s, int* brr, int b_s)
{
    int ind{};
    for (int i = 0;i < a_s;i++)
    {
        for (int j = i;j < b_s + i;j++)
        {
            if (arr[j] != brr[j - i]) break;
            else if (j - i == b_s - 1)
            {
                ind = i;
            }
        }
    }
    if (ind >= 0) return arr[ind];
    else return 0;
}
int* Arr(int* arr,int size)
{
    int* Arr = new int[size];
    int pos{};
    for (int i = 0;i < size;i++)
    {
        if (arr[i] > 0)
        {
            Arr[pos] = arr[i];
            pos++;
        }
    }
    return Arr;
}
int* Sum(int* arr, int a_s, int* brr, int b_s)
{
    int* sum = new int[a_s + b_s];
    for (int i = 0;i < a_s + b_s;i++)
    {
        if (i < a_s)sum[i] = arr[i];
        else sum[i] = brr[i - a_s];
    }
    return sum;
}
int* Sum(int* arr, int a_s, int* brr, int b_s, int Ind)
{
    int* sum = new int[a_s + b_s];
    for (int i = 0;i < a_s + b_s;i++)
    {
        if (i < Ind)
        {
            sum[i] = arr[i];
        }
        else if (i >= Ind + b_s)
        {
            sum[i] = arr[i - b_s];
        }
        else
        {
            sum[i] = brr[i - Ind];
        }
    }
    return sum;
}
int* Del(int* arr, int a_s, int ind_to_del)
{
    int* del = new int[ind_to_del];
    for (int i = 0;i < ind_to_del;i++)
    {
        del[i] = arr[i];
    }
    return del;
}
int main()
{
    int arr[] = { 1,2,3,4,5,6 };
    int brr[] = { 3,4,5 };
    int* ssd = Sum(arr, 6, brr, 3,1);
    for (int i = 0;i < 9;i++)cout << ssd[i]<<"";
}