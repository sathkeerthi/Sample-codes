#include <iostream>
using namespace std;

int main()
{
    int testcases;
    cin >> testcases;

    while(testcases--){
        // input
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int j = 0; j < n; j++)
            cin >> arr[j];
        k %= n; // since even if k is greater than n, the rotation is limited to n + (k-n)
        for (int i = 0; i<n ; i++){
            int p = arr[(i+(n-k))%n];
			cout << p << " ";
		}
        cout << endl;
    }
    
    return 0;
}
