// Binary to Decimal

#include <iostream>
// #include<bits/stdc++.h>

using namespace std;

int binaryToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10; 
        ans += x * y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octalToDecimal(int n)
{
    int ans = 0;
    int x = 1;
    while (n > 0)
    {
        int y = n % 10;
        ans += x * y;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexaDecimalToDecimal(string m)
{
    int ans = 0;
    int x = 1;

    int s = m.size();

    for (int i = s - 1; i > 0; i--)
    {
        if (m[i] >= '0' && m[i] <= '9')
        {
            ans += x * (m[i] - '0');
        }
        else if (m[i] >= 'A' && m[i] <= 'F')
        {
            ans += x * (m[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}

int decimalToBinary(int n)
{
    int x = 1;
    int ans = 0;

    while (x <= n)
    {
        x *= 2;
    }
    x /= 2;

    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 2;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}

int decimalToOctal(int n)
{
    int x = 1;
    int ans = 0;

    while (x <= n)
    {
        x *= 8;
    }
    x /= 8;

    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 8;
        ans = ans * 10 + lastdigit;
    }
    return ans;
}

string decimalToHexadecimal(int n)
{
    int x = 1;
    string ans = "";

    while (x <= n)
    {
        x *= 16;
    }
    x /= 16;

    while (x > 0)
    {
        int lastdigit = n / x;
        n -= lastdigit * x;
        x /= 16;

        if (lastdigit <= 9)
        {
            ans += to_string(lastdigit);
        }
        else
        {
            char c = 'A' + lastdigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int reverse(int n)
{
    int ans = 0;
    while (n > 0)
    {
        int lastDigit = n % 10;
        ans = ans * 10 + lastDigit;
        n /= 10;
    }
    return ans;
}

int addTwoBinary(int a, int b)
{
    int ans = 0;
    int prevCarry = 0;

    while (a > 0 && b > 0)
    {
        if (a % 2 == 0 && b % 2 == 0)
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 0;
        }

        else if (a % 2 == 0 && b % 2 == 1 || a % 2 == 1 && b % 2 == 0)
        {
            if (prevCarry == 1)
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                prevCarry = 1;
            }
        }

        else
        {
            ans = ans * 10 + prevCarry;
            prevCarry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while (a > 0)
    {
        if (prevCarry == 1)
        {
            if (a % 2 == 1)
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
            else
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
        }
        else
        {
            ans = ans * 10 + (a % 2);
        }
        a /= 2;
    }
    while (b > 0)
    {
        if (prevCarry == 1)
        {
            if (b % 2 == 1)
            {
                ans = ans * 10 + 1;
                prevCarry = 0;
            }
            else
            {
                ans = ans * 10 + 0;
                prevCarry = 1;
            }
        }
        else
        {
            ans = ans * 10 + (b % 2);
        }
        b /= 2;
    }
    if (prevCarry == 1)
    {
        ans = ans * 10 + 1;
    }
    ans = reverse(ans);
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << binaryToDecimal(n) << endl;

    cout << octalToDecimal(n) << endl;

    string m;
    cin >> m;
    cout << hexaDecimalToDecimal(m) << endl;

    cout << decimalToBinary(n) << endl;
    cout << decimalToOctal(n) << endl;
    cout << decimalToHexadecimal(n) << endl;

    int a, b;
    cin >> a >> b;
    cout << addTwoBinary(a, b) << endl;
}