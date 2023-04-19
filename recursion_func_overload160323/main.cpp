#include <iostream>
using namespace std;




//void Sort(int* arr, int size)
//{
//    for (int i = 0;i < size;i++)
//    {
//        for (int j = 0;j < size;j++)
//        {
//            if (arr[i] < arr[j])
//            {
//                int temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    for (int i = 0;i < size;i++)
//    {
//        cout << arr[i] << " ";
//    }
//}
//int Find(int num,int*arr,int size)
//{
//    if (num < arr[size / 2])
//    {
//        return Find(num, arr, size / 2);
//    }
//    else if (num > arr[size / 2])
//    {
//        return Find(num, arr, size * 1.5f);
//    }
//    else return size / 2;
//}
//int main()
//{
//    int* arr = new int[20];
//    srand(time(NULL));
//    for (int i = 0;i < 20;i++)
//    {
//        arr[i] = rand() % 20;
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//    Sort(arr, 20);
//    int num{};
//    cin >> num;
//    cout << Find(num,arr,20);
//}



//void Shift(int count, int** arr, int size)
//{
//    if (count > 0)
//    {
//        for (int a = 0;a < size;a++)
//        {
//            for (int k = size - 1;k > 0;k--)
//            {
//                int temp = arr[a][0];
//                arr[a][0] = arr[a][k];
//                arr[a][k] = temp;
//            }
//        }
//    }
//    else
//        Shift(count - 1, arr, size);
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
//    Shift(3, arr, 4);
//
//    for (int i = 0;i < 4;i++)
//    {
//        for (int j = 0;j < 4;j++)
//        {
//            cout << arr[i][j] << " ";
//        }
//        cout<<endl;
//    }
//}


//void Shift_To_Left(int count, int** arr, int size)
//{
//    if (count > 0)
//    {
//        for (int a = 0;a < size;a++)
//        {
//            for (int k = 1;k < size;k++)
//            {
//                int temp = arr[a][0];
//                arr[a][0] = arr[a][k];
//                arr[a][k] = temp;
//            }
//        }
//    }
//    else
//        Shift_To_Left(count - 1,arr,size);
//}



//void Shift_Down(int count, int** arr, int size)
//{
//    if (count > 0)
//    {
//        for (int a = 0;a < size;a++)
//        {
//            for (int k = 1;k < size;k++)
//            {
//                int temp = arr[0][a];
//                arr[0][a] = arr[k][a];
//                arr[k][a] = temp;
//            }
//        }
//    }
//    else
//        Shift_Down(count - 1,arr,size);
//}