#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout << "Enter the size of Array :" << endl;
	cin >> n;
	
	int arr[n];
	cout << "Enter elements of array : " << endl;
	for (int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	// printing the array in reverse order
	cout << "printing the array in reverse order :" << endl;
	
	for(int i = n-1 ; i>=0 ;i--)		// n - 1 was !POI
	{
		cout << arr[i] << " " ;
	}
	
	cout << endl;
	
	
	// actually reversing the array
	int rev_arr[n];
	cout << "Creating the actual reverse array :" << endl;
	for (int i = 0; i < n ; i++)
	{
		rev_arr[i] = arr[ n - i - 1];	//arr[ n - i - 1] !POI
	}
	
	for(int i=0;i<n;i++)
	{
		cout << rev_arr[i] << " " ;
	}
	cout << endl;
	
	//reversing the array in itself
	cout << "Reversing the array in itself :" << endl;
	for( int high = n - 1 , low = 0 ; low < high ; low++,high--)
	{
		swap(arr[low],arr[high]);
	}
	
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << " " ;
	}
	cout << endl;
	
	return 0;
}
