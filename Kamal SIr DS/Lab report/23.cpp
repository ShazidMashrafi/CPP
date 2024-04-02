// Implement merge sort algorithm
#include <iostream>
using namespace std;

void MERGE(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int left[n1], right[n2];
    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[m + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
        }
        else
        {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void MERGE_SORT(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        MERGE_SORT(arr, l, m);
        MERGE_SORT(arr, m + 1, r);
        MERGE(arr, l, m, r);
    }
}

void DISPLAY(int arr[], int n)
{
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "\nEnter the elements: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    cout << "\nBefore sorting: ";
    DISPLAY(arr, n);
    MERGE_SORT(arr, 0, n - 1);
    cout << "\nAfter sorting: ";
    DISPLAY(arr, n);
}