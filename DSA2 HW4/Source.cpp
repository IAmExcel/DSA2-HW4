#include <iostream>
#include <cstdlib>

using namespace std;

void insertionSort(int arr[], int n)
{
	for (int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
int main()
{
	const int size = 100;
	const int range = 100;
	int numbers[size];
	srand(1);

	for (int i = 0; i < size; i++)
	{
		numbers[i] = rand() % range;
	}
	cout << "Before sorting takes place: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;
	int buckets[range][size];
	int count[range] = { 0 };

	for (int i = 0; i < size; i++)
	{
		int bucketIndex = numbers[i];
		buckets[bucketIndex][count[bucketIndex]] = numbers[i];
		count[bucketIndex]++;
	}
	int index = 0;
	for (int i = 0; i < range; i++)
	{
		insertionSort(buckets[i], count[i]);
		for (int j = 0; j < count[i]; j++)
		{
			numbers[index++] = buckets[i][j];
		}
	}
	cout << "After sorting: " << endl;
	for (int i = 0; i < size; i++)
	{
		cout << numbers[i] << " ";
	}
	cout << endl;

	return 0;
}