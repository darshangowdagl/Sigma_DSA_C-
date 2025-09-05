#include <iostream>
#include <vector>
#include<climits>

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

void countingSort(vector<int> &arr, int n)
{
    vector<int> freq(1000, 0);
    int minVal = INT_MAX, maxVal = INT_MIN ;
        // 1st step
        for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
        minVal = min(minVal, arr[i]);
        maxVal = max(maxVal, arr[i]);
    }

    // 2nd step
    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while(freq[i] > 0)
        {
            arr[j++] = i ;
            freq[i]--;
        }
    }
}

int main()
{
    vector<int> arr = {5, 4, 1, 3, 2};
    int n = arr.size();
    countingSort(arr, n);
    print(arr, n);

    return 0;
}
