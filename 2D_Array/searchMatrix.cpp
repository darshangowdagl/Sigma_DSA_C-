#include <iostream>
using namespace std;

bool searchMatrix(int matrix[][100], int r, int c, int target)
{
    // Brute Force: O(r*c)
    // RowWise Binary Search: O(r*log(c))

    // Optimal Approach: Staircase Based O(r+c)
    int i = 0, j = c - 1; // Start from top-right corner

    while (i < r && j >= 0)
    {
        if (matrix[i][j] == target)
        {
            cout << "Element found at position (" << i << ", " << j << ")\n";
            return true; // Target found
        }
        else if (matrix[i][j] > target)
            j--; // Move left
        else
            i++; // Move down
    }
    cout << "Element not found in the matrix\n";
    return false; // Target not found
}

int main()
{
    int matrix[100][100] = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    int r = 3, c = 4;
    int target = 3;

    searchMatrix(matrix, r, c, target);
    return 0;
}