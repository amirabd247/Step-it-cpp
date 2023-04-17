//#include <cstddef>
//#include <iostream>
//#include <time.h>
//#include <math.h>
//using namespace std;
//int** Initialize(int size)
//{
//    int** arr = new int* [4];
//    for (int i = 0; i < 4; i++)
//        arr[i] = new int[4];
//    for (int i = 0;i < 4;i++)
//        for (int j = 0;j < 4;j++)
//            arr[i][j] = rand() % 100;
//    return arr;
//}
//double** Initialize(double size)
//{
//    double** arr = new double* [4];
//    for (int i = 0; i < 4; i++)
//        arr[i] = new double[4];
//    for (int i = 0;i < 4;i++)
//        for (int j = 0;j < 4;j++)
//            arr[i][j] = rand() % 100;
//    return arr;
//}
//char** Initialize(char size)
//{
//    char** arr = new char* [4];
//    for (int i = 0; i < 4; i++)
//        arr[i] = new char[4];
//    for (int i = 0;i < 4;i++)
//        for (int j = 0;j < 4;j++)
//            arr[i][j] = char('a'+rand() % 100);
//    return arr;
//}
//void Show(int** arr, int size)
//{
//    for (int i = 0;i < size;i++)
//    {
//        for (int j = 0;j < size;j++)
//            cout << arr[i][j] << " ";
//        cout << endl;
//    }
//}
//void Show(double** arr, int size)
//{
//    for (int i = 0;i < size;i++)
//    {
//        for (int j = 0;j < size;j++)
//            cout << arr[i][j] << " ";
//        cout << endl;
//    }
//}
//void Show(char** arr, int size)
//{
//    for (int i = 0;i < size;i++)
//    {
//        for (int j = 0;j < size;j++)
//            cout << arr[i][j] << " ";
//        cout << endl;
//    }
//}
//int Max_Diag(int** arr, int size)
//{
//    int max = arr[0][0];
//    for (int i = 0;i < size;i++) if (max < arr[i][i])max = arr[i][i];
//    return max;
//}
//double Max_Diag(double** arr, int size)
//{
//    double max = arr[0][0];
//    for (int i = 0;i < size;i++) if (max < arr[i][i])max = arr[i][i];
//    return max;
//}
//char Max_Diag(char** arr, int size)
//{
//    char max = arr[0][0];
//    for (int i = 0;i < size;i++) if (max < arr[i][i])max = arr[i][i];
//    return max;
//}
//void Sort(int** arr, int size)
//{
//    for (int i = 0;i < size;i++)
//    {
//        for (int j = 0;j < size;j++)
//        {
//            for (int k = 0;k < size;k++)
//            {
//                if (arr[i][j] < arr[i][k])
//                {
//                    int temp = arr[i][j]; arr[i][j] = arr[i][k];arr[i][k] = temp;
//                }
//            }
//        }
//    }
//}
//void Sort(double** arr, int size)
//{
//    for (int i = 0;i < size;i++)
//    {
//        for (int j = 0;j < size;j++)
//        {
//            for (int k = 0;k < size;k++)
//            {
//                if (arr[i][j] < arr[i][k])
//                {
//                    double temp = arr[i][j]; arr[i][j] = arr[i][k];arr[i][k] = temp;
//                }
//            }
//        }
//    }
//}void Sort(char** arr, int size)
//{
//    for (int i = 0;i < size;i++)
//    {
//        for (int j = 0;j < size;j++)
//        {
//            for (int k = 0;k < size;k++)
//            {
//                if (arr[i][j] < arr[i][k])
//                {
//                    char temp = arr[i][j]; arr[i][j] = arr[i][k];arr[i][k] = temp;
//                }
//            }
//        }
//    }
//}
//
//
//int Nod(int a, int b) {
//    if (a != 0 && b != 0)
//    {
//        if (a > b)a %= b;
//        else b %= a;
//        return Nod(a, b);
//    }
//    else return a + b;
//}
//int* Digits(int num,int size)
//{
//    int* array = new int[size];
//    for (int i = 0;i < size;i++)
//    {
//        array[i] = num / (pow(10, size - 1 - i));
//        num -= array[i] * pow(10, size - 1 - i);
//    }
//    return array;
//}
//void Bools_and_Cows(int comp = 0)
//{
//    if (comp == 0)
//        comp = rand() % 9000 + 1000;
//    cout << "Enter num: ";
//    int user;
//    cin >> user;
//    int* user_D = Digits(user, 4);
//    int* comp_D = Digits(comp, 4);
//    int cows{}, bools{};
//    for (int i = 0;i < 4;i++)
//    {
//        for (int j = 0;j < 4;j++)
//        {
//            if (comp_D[i] == user_D[j])
//            {
//                if (i == j)bools++;
//                else cows++;
//                break;
//            }
//        }
//    }
//    cout << "Bools = " << bools << endl;
//    cout << "Cows = " << cows << endl;
//    if (user != comp)
//        Bools_and_Cows(comp);
//    else cout<<"You win";
//}
//
//int main()
//{
//    Bools_and_Cows(0);
//}