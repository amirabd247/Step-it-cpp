#include <iostream>
using namespace std;


int length(string text)
{
    int len = 0;
    while(text[len] != '\0')
    {
        len += 1;
    }
    return len;
}

string change(string& text, char symbol1,char symbol2)
{
    for (int i = 0; i < length(text); ++i)
    {
        if (text[i] == symbol1)
        {
            text[i] = symbol2;
        }
    }
    cout << text;
}

string sort(string& text)
{
    char temp{};
    for (int i = 0; i < length(text); ++i)
    {
        if (char(text[i])< char(text[i + 1]))
        {
            temp = text[i];
            text[i] = text[i+1];
            text[i+1] = text[i];
        }
    }
    cout << text;
}

int choice(string& text)
{

    cout << "choose the action" << endl <<"1.Length 2.Change the symbol 3.ASCII sort" << endl;

    int choice{};
    cin >> choice;

    switch (choice)
    {
        case 1:
        {
            cout << length(text) << endl;
            break;
        }
        case 2:
        {
            cout << "Enter the symbol 1";
            char symbol1{};
            cin >> symbol1;
            cout << "Enter the symbol 2";
            char symbol2{};
            cin >> symbol2;
            change(text,symbol1,symbol2);
            break;
        }
        case 3:
        {

            sort(text);
            break;

        }
    }

}

int main()
{

    string textF{};
    cout << "enter the text" << endl;
    cin >> textF;
    int lengthF = length(textF);
    for (int i = 0; i < 5; )
    {
        if(lengthF > 300)
        {
            cout << "enter the text one more time , its more than 300 symbols" << endl;
            cin >> textF;
        }
        else
        {
            break;
        }
    }
    choice(textF);
}
