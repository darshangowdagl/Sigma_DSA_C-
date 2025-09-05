#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Input a character:";
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"Namaste";
        break;

    case 'b':
        cout<<"Namaste";
        break;

    case 'c':
        cout<<"Solute";
        break;

    case 'd':
        cout<<"cio";
        break;

    default:
        cout<<"i'm still learning more!";
        break;
    }

}