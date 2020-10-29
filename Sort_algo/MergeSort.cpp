// #include <bits/stdc++.h>
// using namespace std;
// void printArray(int arr[],int n)
// {
//     for(int i=0;i<n;i++)
//     {
//         cout << arr[i] << " " ;
//     }
//     cout << "\n";
// }



// void merge(int arr[],int l,int m,int r)
// {
//     int n1 = m-l+1;
//     int n2 = r-m;
//     int L[n1] ,R[n2];

//     for(int i=0;i<n1;i++)
//         L[i] = arr[l+i];
//     for(int j=0;j<n2;j++)
//         R[j] = arr[m+l+j];
    
//     int i=0,j=0,k=1;

//     while(i<n1 && j<n2)
//     {
//         if(L[i] < R[j])
//         {
//             arr[k]  = L[i];
//             i++;
//         }
//         else
//         {
//             arr[k] = R[j];
//             j++;
//         }
//         k++;
//     }
//     while(i<n1)
//     {
//         arr[k] = L[i];
//         i++;k++;
//     }
//     while(j<n2)
//     {
//         arr[k] = R[j];
//         j++;k++;
//     }
// }
// void merge_sort(int arr[],int l,int r)
// {
//     if (l < r)
//     {
//         int m = l + (r - l)/2;
//         merge_sort(arr,l,m);
//         merge_sort(arr,m+1,r);
//         merge(arr ,l ,m ,r );
//     }

// }
// int main()
// {
//     int n;
//     cout << "Enter the size of array: \n";
//     cin >> n;
//     int arr[n];
//     cout << "Enter the Elements of array: \n";
//     for(int i=0;i<n;i++)
//     {
//         cin >> arr[i];
//     }
    
//     cout << "Array before getting sorted : \n";
//     printArray(arr,n);
//     merge_sort(arr,0,n-1);
//     cout << "Array after getting sorted : \n";
//     printArray(arr,n);
// }

#include<iostream>
using namespace std;
void merge(int arr[], int l, int m, int r)
{
	int n1 = m - l + 1;
	int n2 = r - m;

	int L[n1], R[n2];
	for(int i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for(int j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	int i = 0; 
	int j = 0; 
	int k = l;
	
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j]) 
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1) 
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
}

void mergeSort(int arr[], int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);
		merge(arr, l, m, r);
	}
}

void printArray(int A[], int size)
{
	for(int i = 0; i < size; i++)
		cout << A[i] << " ";
}

int main()
{
	int arr[] = { 12, 11, 13, 5, 6, 7 };
	int arr_size = sizeof(arr) / sizeof(arr[0]);
	cout << "Given array is \n";
	printArray(arr, arr_size);
	mergeSort(arr, 0, arr_size - 1);
	cout << "\nSorted array is \n";
	printArray(arr, arr_size);
	return 0;
}

