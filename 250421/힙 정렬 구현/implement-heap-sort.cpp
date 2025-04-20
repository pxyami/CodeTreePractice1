#include <iostream>
#include <algorithm>
using namespace std;

int n;
int arr[100001];

void heapify(int n, int i)
{
	int largest = i;
	int left = i * 2;
	int right = (i * 2) + 1;

	if (left <= n && (arr[largest] < arr[left]) ) largest = left;
	if (right <= n && (arr[largest] < arr[right]) ) largest = right;

	if (i != largest)
	{
		swap(arr[i], arr[largest]);
		heapify(n, largest);
	}
}

void heapsort()
{
	for (int i = n / 2; i >= 1; i--) heapify(n,i);

	for (int i = n; i > 1; i--)
	{
		swap(arr[1], arr[i]);
		heapify(i - 1, 1);
	}
}

int main()
{
	cin >> n;
	for (int i = 1; i < n+1; i++) cin >> arr[i];

	heapsort();

	for (int i = 1; i < n+1; i++) cout << arr[i] << " ";

	return 0;
}