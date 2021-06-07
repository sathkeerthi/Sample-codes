#include <iostream>
using namespace std;

int main()
{
	int testcases;
	cin >> testcases;
	while (testcases--)
	{
		int n;
		cin >> n;
		int arr[n][n];
		// input array
		for (int i = 0 ; i < n ; i++)
			for (int j = 0 ; j < n ; j++) 
				cin >> arr[i][j];
		int count = 0;
		for (int i = 0 ; i < n ; i++){
            for (int j = 0 ; j < n; j++){
                for (int x = i ; x < n ; x++){
                    for (int y = j ; y < n ; y++){
                        if (arr[i][j] > arr[x][y])
                            count++;
                    }
                }
            }
        }
		cout << count << endl;
	}
	return 0;
}
