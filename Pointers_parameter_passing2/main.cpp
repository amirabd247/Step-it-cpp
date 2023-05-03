#include <iostream>
using namespace std;

//int* heapfunction(int length)
//{
//    int* array = new int[length];
//    return array;
//}
//
//int* initializerfunc(int* arr,int length)
//{
//
//    for (int i = 0; i < length; ++i)
//    {
//        arr[i] = i;
//    }
//    return arr;
//}
//
//int printfunc(int* arr,int length)
//{
//
//    for (int i = 0; i < length; ++i)
//    {
//        cout << arr[i] << endl;
//    }
//    cout << "-------------------" << endl;
//    return 0;
//}
//
//void deletearr(int* arr)
//{
//
//    delete[] arr;
//
//}
//
//int* deleteindex(int* arr,int index,int length) {
//
//    int *newarr = new int[length - 1]{};
//
//    for (int i = 0; i < index; ++i)
//    {
//        newarr[i] = arr[i];
//    }
//    for (int i = index; i < length - 1; ++i)
//    {
//        newarr[i] = arr[i + 1];
//    }
//    for (int i = 0; i < length - 1; ++i) {
//        cout << newarr[i] << endl;
//    }
//}
//int* addindex(int* arr,int index,int num,int length)
//{
//
//    int *newarr = new int[length + 1]{};
//
//    for (int i = 0; i < index; ++i)
//    {
//        newarr[i] = arr[i];
//    }
//    newarr[index] = num;
//    for (int i = index + 1; i < length + 1; ++i)
//    {
//        newarr[i] = arr[i - 1];
//    }
//    for (int i = 0; i < length + 1; ++i)
//    {
//        cout << newarr[i] << endl;
//    }
//    cout << "-------------------" << endl;
//}
//int main()
//{
//    int length{},numf{},indexf{};
//    cout << "enter the length";
//    cin >> length;
//    cin >> numf;
//    cin >> indexf;
//    printfunc(initializerfunc(heapfunction(length),length),length);
//    addindex(initializerfunc(heapfunction(length),length),indexf,numf,length);
//    deleteindex(initializerfunc(heapfunction(length),length),indexf,length);
//    deletearr(initializerfunc(heapfunction(length),length));
//    return 0;
//}


//__________________________________________________________________________________________________



//int* deleteindex(int*& arr,int index,int length) {
//
//    int *newarr = new int[length - 1]{};
//
//    for (int i = 0; i < index; ++i)
//    {
//        newarr[i] = arr[i];
//    }
//    for (int i = index; i < length - 1; ++i)
//    {
//        newarr[i] = arr[i + 1];
//    }
//    delete[] arr;
//    arr = new int[length - 1]{};
//    for (int i = 0; i < length - 1; ++i)
//    {
//        arr[i] = newarr[i];
//    }
//    for (int i = 0; i < length - 1; ++i) {
//        cout << arr[i] << endl;
//    }
//
//    cout << "_____________________________" << endl;
//    return arr;
//}
//
//int simplenum(int*& arr,int length)
//{
//    int counter{};
//    for (int i = 0; i < length; ++i)
//    {
//        counter = 0;
//        for (int j = 1; j <= arr[i]; ++j)
//        {
//            if (arr[i] != 1) {
//                if (arr[i] % j == 0) {
//                    counter += 1;
//                }
//
//            }
//        }
//        if (arr[i] != 1)
//        {
//            if (counter <= 2)
//            {
//                deleteindex(arr, i, length);
//                length -= 1;
//                i = 0;
//            }
//        }
//
//
//    }
//
//}
//
//int main()
//{
//    int* array = new int[5]{1,3,4,7,9};
//
//    simplenum(array,5);
//
//    delete[] array;
//}


//int counterfunc(int* array,int length)
//{
//    int nullcounter{};
//    int negcounter{};
//    int poscounter{};
//
//    for (int i = 0; i < length; ++i)
//    {
//        if(array[i] == 0)
//        {
//            nullcounter += 1;
//        }
//        else if(array[i] < 0){
//            negcounter += 1;
//        }
//        else if(array[i] > 0)
//        {
//            poscounter += 1;
//        }
//    }
//
//    cout << "Amount of positive number" << poscounter << endl;
//    cout << "Amount of negative number" << negcounter << endl;
//    cout << "Amount of null number" << nullcounter << endl;
//
//
//}
//
//
//int main()
//{
//
//
//    int arr[5]{1,2,-1,-2,0};
//
//    counterfunc(arr,5);
//
//    return 0;
//}