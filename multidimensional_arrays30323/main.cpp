#include <iostream>
using namespace std;

//int Sum(int** arr, int size)
//{
//    int sum{};
//    for (int i = 0;i < 4;i++)
//    {
//        for (int j = 0;j < 4;j++)
//        {
//            sum += arr[i][j];
//        }
//    }
//    return sum;
//}
//float Ave(int** arr, int size)
//{
//    return Sum(arr, size) / static_cast<float>(size);
//}
//int Min(int** arr, int size)
//{
//    int min = arr[0][0];
//    for (int i = 0;i < size;i++)
//    {
//        for (int j = 0;j < size;j++)
//        {
//            if (min > arr[i][j])min = arr[i][j];
//        }
//    }
//}
//int Max(int** arr, int size)
//{
//    int Max = arr[0][0];
//    for (int i = 0;i < size;i++)
//    {
//        for (int j = 0;j < size;j++)
//        {
//            if (Max < arr[i][j])Max = arr[i][j];
//        }
//    }
//    return Max;
//}



//int Sum(int** arr, int size)
//{
//    int sum{};
//    for (int i = 0;i < 4;i++)
//    {
//        for (int j = 0;j < 4;j++)
//        {
//            sum += arr[i][j];
//        }
//    }
//    return sum;
//}
//int Sum(int* arr, int size)
//{
//    int sum{};
//    for (int i = 0;i < 4;i++)
//    {
//        sum += arr[i];
//    }
//    return sum;
//}
//int Sum_C(int col_no, int** arr, int size)
//{
//    int sum{};
//    for (int i = 0;i < size;i++)
//    {
//        sum += arr[i][col_no];
//    }
//    return sum;
//}
//void Sum_Info(int** arr, int size)
//{
//    for (int i = 0;i < size;i++)
//    {
//        for (int j = 0;j < size;j++)
//        {
//            cout.width(3);
//            cout << arr[i][j] << " ";
//        }
//        cout << "|" << Sum(arr[i], size)<<endl;
//    }
//    cout << "___________________"<<endl;
//    for (int i = 0;i < size;i++)
//    {
//        cout.width(3);
//        cout << Sum_C(i, arr, size)<<" ";
//    }
//    cout << "|" << Sum(arr, size);
//}
//int main()
//{
//    int** arr = new int*[4];
//    srand(time(NULL));
//    for (int i = 0;i < 4;i++)
//    {
//        arr[i] = new int[4];
//        for (int j = 0;j < 4;j++)
//        {
//            arr[i][j] = rand() % 20;
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//    Sum_Info(arr, 4);
//    /*for (int i = 0;i < 4;i++)
//    {
//        for (int j = 0;j < 4;j++)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout<<endl;
//    }
//}


//int** Arr(int** arr)
//{
//    int** m_arr = new int* [5];
//
//    for (int i = 0;i < 5;i++)
//    {
//        m_arr[i] = new int[5];
//        for (int j = 0;j < 5;j++)
//        {
//            m_arr[i][j] = 0;
//            for (int k = j*2;k < j*2 + 2;k++)
//            {
//                m_arr[i][j] += arr[i][k];
//            }
//        }
//    }
//    return m_arr;
//}
//int main()
//{
//    int** arr = new int*[5];
//    srand(time(NULL));
//    for (int i = 0;i < 5;i++)
//    {
//        arr[i] = new int[10];
//        for (int j = 0;j < 10;j++)
//        {
//            arr[i][j] = rand() % 20;
//            cout << arr[i][j] << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//    int** arri = Arr(arr);
//    for (int i = 0;i < 5;i++)
//    {
//        for (int j = 0;j < 5;j++)
//        {
//            cout << arri[i][j] << " ";
//        }
//        cout<<endl;
//    }
//}