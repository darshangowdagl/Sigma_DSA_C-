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

void selectionSort(vector<int>& arr, int n)
{
    for(int i = 0; i<n-1; i++)
    {
        int minIdx = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j] < arr[minIdx])
            {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
    return;
    
}



int main()
{
    vector<int> arr = {5, 4, 1, 3, 2};
    int n = arr.size();
    selectionSort(arr, n);
    print(arr, n);

    return 0;
}