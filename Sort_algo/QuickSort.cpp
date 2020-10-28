#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " ;
    }
    cout << "\n";
}
void swapping(int *xp,int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int partition(int arr[],int low , int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swapping(&arr[i],&arr[j]);
        }
    }
    swapping(&arr[i+1],&arr[high]);
    return (i+1);
}

void quickSort(int arr[],int low,int high)
{
    if(low < high)
    {
        int pi = partition(arr,low,high);

        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    printArray(arr,n);
    quickSort(arr,0,n-1);
    printArray(arr,n);
    return 0;
}