#include <iostream>
using namespace std;

int LIS(int arr[], int n)
{
	int dp[1000];
	for (int i = 0; i < n; i++)
	{
		dp[i] = 1; //Base Case:  when the LIS is only 1 element long
	}

	for (int i = 1; i < n; i++)
	{
		//Recursive case: L(i) is 1 plus the length of the LIS which ends at j'th index before i, where arr[j] is less than arr[i].
		for (int j = 0; j < i; j++)
		{
			if (arr[j] < arr[i] && dp[j] + 1 > dp[i])
			{
				dp[i] = dp[j] + 1;
			}
		}
	}
	int maxLIS = dp[0];
	for (int i = 1; i < n; i++)
	{
		if (dp[i] > maxLIS)
		{
			maxLIS = dp[i];
		}
	}
	return maxLIS;
}
int main()
{
	const int size = 9;
	int arr[size] = { 10,22,9,33,21,50,41,60,80 };

	cout << "The length of the LIS is: " << LIS(arr, size) << endl;
}