#include <iostream>

using namespace std;

//int pow(int num,int degree)
//{
//    int numhelp{};
//    numhelp = num;
//    for (int i = 1; i < degree; ++i)
//    {
//        num *= numhelp;
//    }
//    return num;
//}
//
//int main()
//{
//
//    int num,degree{};
//    cout << "enter the number" << endl;
//    cin >> num;
//    cout << "enter the degree" << endl;
//    cin >> degree;
//
//    cout << pow(num,degree);
//    return 0;
//}



//int diap(int num1,int num2)
//{
//    int summ{};
//    for (int i = num1; i <= num2; ++i)
//    {
//        summ += i;
//    }
//    return summ;
//}
//
//int main()
//{
//
//    int num1,num2{};
//    cout << "enter the number" << endl;
//    cin >> num1;
//    cout << "enter the degree" << endl;
//    cin >> num2;
//
//    cout << diap(num1,num2);
//    return 0;
//}


//int diap(int num1,int num2)
//{
//    int summ{};
//    int counter{};
//    for (int i = num1; i <= num2; ++i)
//    {
//        summ = 0;
//        for (int j = 1; j < i; j++)
//        {
//            if (i % j == 0)
//            {
//                summ += j;
//            }
//        }
//        if(summ == i)
//        {
//            counter += 1;
//        }
//    }
//    return counter;
//}
//
//int main()
//{
//
//    int num1,num2{};
//    cout << "enter the number" << endl;
//    cin >> num1;
//    cout << "enter the degree" << endl;
//    cin >> num2;
//
//    cout << diap(num1,num2);
//    return 0;
//}


//zadaniye 4 skazali propustit


//int luckynum(int num)
//{
//
//    int helpnum{};
//    int totalnum{num};
//    int j{100000};
//    for (int i = 1; i <= 6; ++i)
//    {
//        helpnum += j * (num % 10);
//        num /= 10;
//        j /= 10;
//    }
//    if(helpnum == totalnum)
//    {
//        cout << "number is lucky";
//    }
//    else{
//        cout << "number is not lucky";
//    }
//}
//
//
//int main()
//{
//    int number{};
//    cin >> number;
//    luckynum(number);
//
//
//}
