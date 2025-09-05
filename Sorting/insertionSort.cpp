#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}

void insertionSort(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev], arr[prev+1]);
            prev--;
        }

        arr[prev+1] = curr;
    }
}

int main()
{
    vector<int> arr = {5, 4, 1, 3, 2};
    int n = arr.size();
    insertionSort(arr, n);
    print(arr, n);

    return 0;
}