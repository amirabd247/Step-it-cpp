#include <iostream>
using namespace std;


//int main()
//{
//    int length1,length2{};
//
//    cout << "Enter the lengths of two arrays";
//    cin >> length1;
//    cin >> length2;
//
//    int* arr1 = new int[length1]{};
//    int* arr2 = new int[length2]{};
//
//    for (int i = 0; i < length1; ++i)
//    {
//        cout << "Enter the numbers for array" << endl;
//        cin >> arr1[i];
//    }
//    cout << "______________________" << endl;
//    for (int i = 0; i < length2; ++i)
//    {
//        cout << "Enter the numbers for array" << endl;
//        cin >> arr2[i];
//    }
//
//    int counter{};
//
//    for (int i = 0; i < length1; ++i)
//    {
//        for (int j = 0; j < length2; ++j)
//        {
//            if(arr1[i] != arr2[j])
//            {
//                counter += 1;
//                  break;
//            }
//        }
//    }
//
//    int* arr3 = new int[counter]{};
//
//    for (int i = 0; i < length1; ++i)
//    {
//        for (int j = 0; j < length2; ++j)
//        {
//            if(arr1[i] != arr2[j])
//            {
//                arr3[i] = arr1[i];
//                break;
//            }
//        }
//    }
//
//    for (int i = 0; i < counter; ++i)
//    {
//        cout << arr3[i] << endl;
//    }
//
//}



//int main()
//{
//    int length1,length2{};
//
//    cout << "Enter the lengths of two arrays";
//    cin >> length1;
//    cin >> length2;
//
//    int* arr1 = new int[length1]{};
//    int* arr2 = new int[length2]{};
//
//    for (int i = 0; i < length1; ++i)
//    {
//        cout << "Enter the numbers for array" << endl;
//        cin >> arr1[i];
//    }
//    cout << "______________________" << endl;
//    for (int i = 0; i < length2; ++i)
//    {
//        cout << "Enter the numbers for array" << endl;
//        cin >> arr2[i];
//    }
//
//    int counter{};
//    int countersize1{};
//    int countersize2{};
//    for (int i = 0; i < length1; ++i)
//    {
//        for (int j = 0; j < length2; ++j)
//        {
//            if(arr1[i] == arr2[j])
//            {
//                counter += 1;
//            }
//        }
//        if(counter < 1)
//        {
//            countersize1 += 1;
//        }
//        counter = 0;
//    }
//
//    for (int i = 0; i < length2; ++i)
//    {
//        for (int j = 0; j < length1; ++j)
//        {
//            if(arr2[i] == arr1[j])
//            {
//                counter += 1;
//            }
//        }
//        if(counter < 1)
//        {
//            countersize2 += 1;
//        }
//        counter = 0;
//    }
//
//    int* arr3 = new int[countersize1 + countersize2]{};
//
//    for (int i = 0; i < length1; ++i)
//    {
//        for (int j = 0; j < length2; ++j)
//        {
//            if(arr1[i] == arr2[j])
//            {
//                counter += 1;
//            }
//        }
//        if(counter < 1)
//        {
//            arr3[i] = arr1[i];
//        }
//        counter = 0;
//    }
//
//    for (int i = 0; i < length2; ++i)
//    {
//        for (int j = 0; j < length1; ++j)
//        {
//            if(arr2[i] == arr1[j])
//            {
//                counter += 1;
//            }
//        }
//        if(counter < 1)
//        {
//            arr3[countersize1 - 1 + i] = arr2[i];
//        }
//        counter = 0;
//    }
//
//    for (int i = 0; i < countersize1 + countersize2; ++i)
//    {
//        cout << arr3[i] << endl;
//    }
//}
