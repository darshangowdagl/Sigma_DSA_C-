#include <iostream>
using namespace std;

// Function to calculate sum of digits
int sumDigits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// Function to get nth number in the sequence
int getNthNumber(int n) {
    if (n == 1) return 0;
    if (n == 2) return 1;

    int a = 0, b = 1, next;

    for (int i = 3; i <= n; i++) {
        next = sumDigits(a) + sumDigits(b);
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "The " << n << "th number is: " << getNthNumber(n) << endl;
    return 0;
}
