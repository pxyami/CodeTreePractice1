#include <iostream>

using namespace std;

int arrsize;
int arr[100];

int main() {
    cin >> arrsize;
    for (int i = 0; i < arrsize; i++) cin >> arr[i];

    for (int i = 0; i < arrsize; i++)
    {
        for (int ii = 0; ii < arrsize - 1-i; ii++)
        {
            if (arr[ii] > arr[ii + 1])
            {
                int temp = arr[ii];
                arr[ii] = arr[ii + 1];
                arr[ii + 1] = temp;
            }
        }
    }
    for (int i = 0; i < arrsize; i++) cout << arr[i] << " ";

    return 0;
}
