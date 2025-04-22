#include <iostream>
#include <algorithm>

using namespace std;

int arrsize;
int arr[100];

void BubbleSort();


int main()
{
    cin >> arrsize;
    for (int i = 0; i < arrsize; i++) cin >> arr[i];

    BubbleSort();

    for (int i = 0; i < arrsize; i++) cout << arr[i] << " ";

    return 0;
}

void BubbleSort()
{
    bool sorted = true;

    do
    {
        sorted = true;
        for(int i = 0; i < arrsize-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                swap(arr[i], arr[i+1]); 
                sorted = false;
            }
        }
    } while(sorted == false);
}
