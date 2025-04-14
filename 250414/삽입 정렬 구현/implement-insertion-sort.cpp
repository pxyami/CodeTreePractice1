#include <iostream>
using namespace std;

int main()
{
	int arrsize = 0;
	int arr[100];

	cin >> arrsize;
	for (int i = 0; i < arrsize; i++) cin >> arr[i];

	for (int i = 0; i < arrsize - 1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			int ii = i+1;
			while (ii - 1 >= 0 && arr[ii - 1] > arr[ii])
			{
				int temp = arr[ii - 1];
				arr[ii - 1] = arr[ii];
				arr[ii] = temp;
				ii--;
			}
		}
	}

	for (int i = 0; i < arrsize; i++) cout << arr[i] << " ";

	return 0;
}