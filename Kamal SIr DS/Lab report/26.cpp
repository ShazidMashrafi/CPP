// Implement quicksort algorithm
#include <iostream>
using namespace std;

void DISPLAY(int array[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << array[i] << " ";
    cout << endl;
}

int partition(int array[], int low, int high)
{
    int pivot = array[high];
    int pos = low;
    for (int i = low; i <= high; i++)
    {
        if (array[i] <= pivot)
        {
            swap(array[i], array[pos]);
            pos++;
        }
    }
    return pos - 1;
}

void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int p = partition(array, low, high);
        quickSort(array, low, p - 1);
        quickSort(array, p + 1, high);
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    cout << "\nBefore sorting: ";
    DISPLAY(arr, n);
    quickSort(arr, 0, n - 1);
    cout << "\nAfter sorting: ";
    DISPLAY(arr, n);
}