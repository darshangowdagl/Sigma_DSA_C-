#include <iostream>
using namespace std;

int rectangle(int, int);
int hollowRectangle(int, int);
int invertedHalfPyramid(int);
int halfPyramidAfterRotation(int);
void halfPyramidUsingNumbers(int);
void floydsTriangle(int);
int butterFlyPattern(int);
int invertedPattern(int);
void patternOf0_1(int);
int rhombus(int);
int numberPattern(int);
int palindromicPattern(int);
int diamond(int);
int zigZag(int);
int charpattern(int n);

int main()
{
    cout << "From here onwards patterns starts\n";
    int row, col;

    cout << "Enter the number rows and columns\n";
    cin >> row >> col;

    cout << "Below is the rectangle\n";
    rectangle(row, col);

    cout << "Below is the hollowrectangle\n";
    hollowRectangle(row, col);

    int n;

    cout << "Enter the Height of the Pyramid\n";
    cin >> n;

    cout << "Below is the invertedhalfpyramid\n";
    invertedHalfPyramid(n);

    cout << "Below is the halfPyramidAfterRotation\n";
    halfPyramidAfterRotation(n);

    cout << "Below is the halfPyramidUsingNumbers\n";
    halfPyramidUsingNumbers(n);

    cout << "Below is the Floyds Triangle\n";
    floydsTriangle(n);

    cout << "Below is the butterFlyPattern\n";
    butterFlyPattern(n);

    cout << "Below is the invertedPattern\n";
    invertedPattern(n);

    cout << "Below is the patternOf0_1\n";
    patternOf0_1(n);

    cout << "Below is the rhombusPattern\n";
    rhombus(n);

    cout << "Below is the numberPattern\n";
    numberPattern(n);

    cout << "Below is the palindromicPattern\n";
    palindromicPattern(n);

    cout << "Below is the diamondPattern\n";
    diamond(n);

    cout << "Below is the zigZag pattern\n";
    zigZag(n);

    cout << " Below is the charpattern\n";
    charpattern(n);

    return 0;
}

int rectangle(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

int hollowRectangle(int r, int c)
{
    for (int i = 1; i <= r; i++)
    {
        for (int j = 1; j <= c; j++)
        {
            if (i == 1 || i == r || j == 1 || j == c)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

int invertedHalfPyramid(int n)
{
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

int halfPyramidAfterRotation(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
    return 0;
}

void halfPyramidUsingNumbers(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void floydsTriangle(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

int butterFlyPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        int space = 2 * n - 2 * i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

int invertedPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1 - i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

void patternOf0_1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
int rhombus(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

int numberPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

int palindromicPattern(int n)
{
    for (int i = 1; i <= n; i++)
    {
        int j;
        for (j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        int k = i;
        for (; j <= n; j++)
        {
            cout << k << " ";
            k--;
        }
        k = 2;
        for (; j <= n + i - 1; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}
int diamond(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}

int zigZag(int n)
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (((i + j) % 4 == 0) || (i == 2 && j % 4 == 0))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    return 0;
}

int charpattern(int n)
{
    char c = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << c;
            c += 1;
        }
        cout << endl;
    }
    return 0;
}