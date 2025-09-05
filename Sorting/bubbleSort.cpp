#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>& arr, int n){
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

void bubbleSort(vector<int>& arr, int n)
{
    for(int i = 0; i<n-1; i++)
    {
        int isSwap = false;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(arr[j], arr[j+1]);
                isSwap = true;
            }
        }
        if(!isSwap)
        {
            return;
        }
    }
    return;
}

int main()
{
    vector<int> arr = {5, 4, 1, 3, 2};
    int n = arr.size();
    bubbleSort(arr, n);
    print(arr, n);

    return 0;
}