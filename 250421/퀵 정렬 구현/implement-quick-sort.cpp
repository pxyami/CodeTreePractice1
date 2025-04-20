#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100000];

int partition(int low, int high)
{
	int pivot = arr[high];
	int i = low - 1;

	for (int j = low; j < high; j++) if (arr[j] < pivot) swap(arr[++i], arr[j]);

	swap(arr[i + 1], arr[high]);
	return i + 1;
}

void quicksort(int low, int high)
{
	if (low < high)
	{
		int mid = partition(low, high);
		quicksort(low, mid - 1);
		quicksort(mid + 1, high);
	}
}

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++) cin >> arr[i];

	quicksort(0, n - 1);

	for (int i = 0; i < n; i++) cout << arr[i] << " ";

	return 0;
}