
//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//using namespace std;
//
//int RandomNumber(int min, int max)
//{
//    srand(time(NULL));
//
//    int num = min + rand() % (max - min + 1);
//
//    return num;
//}
//
//int main()
//{
//    time_t zeroTime = time(0);
//    int number{};
//    number = RandomNumber(0, 500);
//    int counter{};
//    int guess{};
//    while (guess != number)
//    {
//        cout << "Take a guess , 0 is stop " << endl;
//        cin >> guess;
//        if (guess == 0)
//        {
//            cout << "Lose";
//            break;
//        }
//        else if (guess == number)
//        {
//            counter += 1;
//            cout << "u r win" << " it has took u " << counter << " tries and " << time(0) - zeroTime << " seconds" << endl;
//        }
//        else if (guess > number)
//        {
//            counter += 1;
//            cout << "your number is bigger" << endl;
//        }
//        else if (guess < number)
//        {
//            counter += 1;
//            cout << "your number is lower" << endl;
//        }
//
//    }
//    return 0;
//}
//



//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//    float cash{};
//    cout << "ENter the cash";
//    cin >> cash;
//    int choice;
//    cout << "1. AZN -> USD  2.USD -> AZN";
//    cin >> choice;
//
//    switch (choice)
//    {
//
//
//        case 1:
//            cout << cash / 1.7;
//
//
//        case 2:
//            cout << cash * 1.7;
//
//    }
//    return 0;
//}