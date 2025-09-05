#include <iostream>
using namespace std;

int sumOfdigits(int num)
{
    int digsum = 0;
    while (num > 0)
    {
        int lastdig = num % 10;
        num = num / 10;
        digsum += lastdig;
    }
    return digsum;
}

int main()
{
    int num ;
    cout<<"Enter the number : "<<endl;
    cin>>num;
    cout << "The Sum of Digits is = " << sumOfdigits(num) << endl;
    return 0;
}