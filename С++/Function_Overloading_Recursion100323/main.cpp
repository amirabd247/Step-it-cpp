#include <cstddef>
#include <iostream>
#include <time.h>
using namespace std;
float task_1(float num, float power)
{
    if (power > 0) return num * task_1(num, power-1);
    else return 1;
}
void task_2(int num)
{
    if (num > 0)
    {
        cout << "*";
        task_2(num-1);
    }
}
// 1 2 3 4 5 6 7 8 9 10 11
int task_3(int start, int end)
{
    if (start < end) return start + task_3(start+1, end);
    else return 0;
}

int Sumoften(int nums[100], int index)
{
    int sumoften{};
    for (int i = index;i < 10 + index;i++)
        sumoften += nums[i];
    return sumoften;
}
int task_4(int nums[100], int MinID = 0, int sum = 0, int thisID = 0)
{
    int t_sum = Sumoften(nums, thisID);
    if (thisID < 90)
    {
        if (MinID == 0 || t_sum < sum)
        {
            return task_4(nums, thisID, t_sum, thisID + 1);
        }
        else return task_4(nums, MinID, sum, thisID + 1);
    }
    else return MinID;
}
int Max(int* arr,int size)
{
    int max = arr[0];
    for (int i = 0;i < size;i++)
    {
        if (arr[i] > max)max = arr[i];
    }
    return max;
}
int Max(int** arr, int size_X,int size_Y)
{
    int max = arr[0][0];
    for (int i = 0;i < size_X;i++)
    {
        for (int j = 0;j < size_Y;j++)
        {
            if (max < arr[i][j])max = arr[i][j];
        }
    }
    return max;
}
int Max(int*** arr, int size_X,int size_Y,int size_Z)
{
    int max = arr[0][0][0];
    for (int i = 0;i < size_X;i++)
    {
        for (int j = 0;j < size_Y;j++)
        {
            for (int k = 0;k < size_Z;k++)
            {
                if (max < arr[i][j][k])max = arr[i][j][k];
            }
        }
    }
    return max;
}
int Max(int a, int b)
{
    return (a < b ? b : a);
}
int main()
{
    cout << task_1(2, 3) << endl;
    task_2(3);
    cout << endl;
    cout << task_3(1, 10)<<endl;
    srand(time(NULL));
    int arr[100];
    for (int i = 0;i < 100;i++) arr[i] = rand() % 100;
    cout<<task_4(arr)<<endl;
    cout <<Max(23,3);
}