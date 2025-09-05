#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number:\n";
    cin >> n;

    int sum = 0;
    int originalNumber = n;
    while (n > 0)
    {
        int lastDigit = n % 10;
        sum += pow(lastDigit, 3);
        n = n / 10;
    } 

    if (sum == originalNumber)
    {
        cout << "Given number is an armstrong number\n";
    }
    else{
        cout << "Given number is not an armstrong number\n";
    }
    return 0;
}