#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n ; i++)
			cin >> arr[i];
		sort (arr, arr+n); /* 
		numbers that are closer to each 
		other have best possibility to yield min xor value.
		hence we sort the array 
		*/
		int mini = INT_MAX;
		for (int i = 0 ; i < n-1 ; i++){
				mini = min(mini, arr[i] ^ arr[i+1]);
			// after evaluating and xor or, you get xor as final result
			// hence arr[i] ^ arr[i+1]
		}
		cout << mini << endl;
	}
	return 0;
}
