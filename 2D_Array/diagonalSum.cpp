#include <iostream>
using namespace std;

int diagonalSum(int matrix[][100], int n)
{
    int sum = 0;

    // O(n^2) time complexity
    /*
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j) sum += matrix[i][j];               // Primary diagonal
            else if(j == n-i-1) sum += matrix[i][j]      // Secondary diagonal
        }
    }
    */

    // O(n) time complexity
    for (int i = 0; i < n; i++)
    {
        sum += matrix[i][i]; // Primary diagonal
        if (i != n - i - 1)
        { // To avoid double counting the center element in odd dimension matrix
            sum += matrix[i][n - i - 1];
        } // Secondary diagonal
        return sum;
    }

    return sum;
}

int main()
{
    int matrix[100][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int n = 3;

    cout << "Sum of diagonals: " << diagonalSum(matrix, n) << endl;

    return 0;
}