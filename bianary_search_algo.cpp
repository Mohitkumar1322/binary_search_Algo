// C++ program to implement iterative Binary Search
#include <bits/stdc++.h>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int left, int right, int key)
//iniatialising key left most element and rightmost element as left right and key
{
	while (left <= right) {
    //untill and unless left is less than and equal to right loop will iteratate
		int mid = left + (right - left) / 2;

		// Check if x is present at mid and returning mid 
		if (arr[mid] == key)
			return mid;

		// If x greater, ignore left half 
		if (arr[mid] < key)
			left = mid + 1;

		// If x is smaller, ignore right half
		else
			right = mid - 1;
	}

	// If we reach here, then element was not present
	return -1;
}

// Driver code
/*int main(void)
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;*/
}
