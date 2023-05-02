#include <iostream>

using namespace std;

//int main()
//{
//
//
//	int num1{};
//	int num2{};
//	int num3{};
//
//	int counter{};
//
//	for (size_t i = 100; i < 1000; i++)
//	{
//		num1 = i % 10;
//		num2 = (i / 10) - (i / 100) * 10;
//		num3 = i / 100;
//
//		if (num1 == num2 && num1 != num3)
//		{
//			counter += 1;
//		}
//		else if (num1 == num3 && num1 != num2)
//		{
//			counter += 1;
//		}
//		else if (num2 == num3 && num1 != num2)
//		{
//			counter += 1;
//		}
//	}
//
//	cout << counter;
//	return 0;
//}



//int main()
//{
//
//
//	int num1{};
//	int num2{};
//	int num3{};
//
//	int counter{};
//
//	for (size_t i = 100; i < 1000; i++)
//	{
//		num1 = i % 10;
//		num2 = (i / 10) - (i / 100) * 10;
//		num3 = i / 100;
//
//		if (num1 != num2 && num1 != num3 && num2 != num3)
//		{
//			counter += 1;
//		}
//	}
//
//	cout << counter;
//	return 0;
//}



int main()
{

	int num{};
	int curnum{};
	int times = 1;
	int num2{};
	cin >> num;
	while (num >= 0)
	{
		curnum = num % 10;
		if ((curnum != 3) || (curnum != 6)) // он ругается на знак или я не знаю почему
		{
			num2 += curnum * times;
			times += 1;
		}
		num /= 10;
	}
	cout << num2;
	return 0;
}