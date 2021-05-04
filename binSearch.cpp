#include <iostream>
using namespace std;

int binSearch(int low, int high, int key, int *arr)
{
    int mid;

    while (low <= high)
    {
        mid = low + (high - low) / 2;
        
        if (arr[mid] == key)
            return mid;
        else if (key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int key;
    cin >> key;

    cout << binSearch(0, n - 1, key, arr);

    return 0;
}
