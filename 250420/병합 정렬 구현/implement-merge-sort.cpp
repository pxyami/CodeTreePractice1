#include <iostream>
using namespace std;

int n;
int arr[100000];

void merge(int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int k = low;
    int arrTemp[100000];

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j]) arrTemp[k++] = arr[i++];
        else arrTemp[k++] = arr[j++];
    }
    while (i <= mid) arrTemp[k++] = arr[i++];
    while (j <= high) arrTemp[k++] = arr[j++];

    for (int k = low; k <= high; k++) arr[k] = arrTemp[k];
}

void mergesort(int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergesort(low, mid);
        mergesort(mid + 1, high);
        merge(low, mid, high);
    }
}

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    mergesort(0, n - 1);

    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
