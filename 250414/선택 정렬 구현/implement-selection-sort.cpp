#include <iostream>
using namespace std;

int arrsize;
int arr[100];

int main() {
    cin >> arrsize;
    for (int i = 0; i < arrsize; i++) cin >> arr[i];

    for (int i = 0; i < arrsize-1; i++)
    {
        int minindex = 0;
        int min = 100;
        for (int ii = i; ii < arrsize; ii++)
        {
            if (min >= arr[ii])
            {
                min = arr[ii];
                minindex = ii;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minindex];
        arr[minindex] = temp;
    }

    for (int i = 0; i < arrsize; i++) cout << arr[i] << " ";

    return 0;
}