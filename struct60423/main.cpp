
#include<iostream>
using namespace std;
static int mystrcmp(const char* str1, const char* str2)
{
    int first{}, sec{};
    for (int i = 0;str1[i] != '\0';i++)
    {
        first *= 10;
        first += str1[i] - 48;
    }
    for (int i = 0;str2[i] != '\0';i++)
    {
        sec *= 10;
        sec += str2[i] - 48;
    }
    if (first > sec)return 1;
    else if (sec > first)return -1;
    else return 0;
}
static int ToInt(char* str)
{
    int num{};
    for (int i = 0;str[i] != '\0';i++)
    {
        num *= 10;
        num += str[i] - 48;
    }
    return num;
}
static char* Reverse(char* str, int size)
{
    int j = size - 1;
    for (int i = 0; i < j; i++, j--)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return str;
}
static char* ToChar(int num)
{
    int dig{}, init = num;

    for (;init > 0;init /= 10) dig++;
    char* ch = new char[dig];
    for (int i = 0; i < dig; i++)
    {
        ch[i] = num % 10 + 48;
        num /= 10;
    }
    return Reverse(ch, dig);
}
static char* Upper(const char* str, int size)
{
    char* UP = new char[size];
    for (int i = 0;i < size;i++)
    {
        if (!isupper(str[i]))
            UP[i] = str[i] - 32;
        else UP[i] = str[i];
    }
    return UP;
}
static char* Lower(const  char* str, int size)
{
    char* Low = new char[size];
    for (int i = 0;i < size;i++)
    {
        if (isupper(str[i]))
            Low[i] = str[i] + 32;
        else Low[i] = str[i];
    }
    return Low;
}

int main(){
    return 0;
}