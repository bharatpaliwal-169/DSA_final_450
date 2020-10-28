#include<bits/stdc++.h>
using namespace std;
void swapping(int *xp,int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void bubbleSort(int arr[],int n)
{
    bool swapper;
    for(int i=0;i<n-1;i++)
    {
        swapper = false;
        for(int j=0;j<n-(i+1);j++)
        {
            if(arr[j] > arr[j+1])
            {
                swapping(&arr[j],&arr[j+1]);
                // swap( arr[j],arr[j+1] );
                swapper = true;
            }
        }
        if(swapper == false)
            break;
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " " ;
    }
    cout << "\n";
}
int main()
{
    int n;
    cout << "Enter the size of array: \n";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of array: \n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "Array before getting sorted : \n";
    printArray(arr,n);
    bubbleSort(arr,n);
    cout << "Array after getting sorted : \n";
    printArray(arr,n);
}