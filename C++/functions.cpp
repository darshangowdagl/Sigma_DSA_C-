// Function is a piece of code that performs a specific task:
#include <iostream>
using namespace std;

void print(int num)
{
    cout << num << endl;
    return;
}
int add(int numl, int num2)
{
    print(numl);
    print(num2);
    int sum = numl + num2;
    return sum;
}

int main()
{
    int a = 2;
    int b = 3;  
    cout << add(a, b) << endl;
}