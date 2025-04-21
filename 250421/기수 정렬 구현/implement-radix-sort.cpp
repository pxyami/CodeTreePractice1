#include <iostream>
#include <vector>
#define MAX_N 100000
#define MAX_K 6
using namespace std;

int n;
int arr[MAX_N];

void RadixSort() {
    int p = 1;
    for (int pos = 0; pos < MAX_K; pos++)
    {
        vector<vector<int>> arr_new(10);
        for (int i = 0; i < n; i++)
        {
            int digit = (arr[i] / p) % 10;
            arr_new[digit].push_back(arr[i]);
        }
        {
            int orgArrIndex = 0;
            for (int i = 0; i < 10; i++)                                             
                for (int ii = 0; ii < arr_new[i].size(); ii++)
                    arr[orgArrIndex++] = arr_new[i][ii];
        }
        p *= 10;
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    RadixSort();
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    return 0;
}
