#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int l,int r,int x)
{
    if(r >= l)
    {
        int mid = l + (r-1)/2;
        if (arr[mid] == x)
            return mid;
        if(arr[mid] > x)
            return binarySearch(arr,l,mid-1,x);    //left
        return binarySearch(arr,mid+1,r,x); //right
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of array: \n";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of array:\n";
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the element you are searching for :\n";
    cin >> x;
    int result = binarySearch(arr,0,n-1,x);
    (result == -1) ? cout << "Element is not present in array"
                    :cout << "Element is present at index " << result;
}