#include <iostream>
using namespace std;
int main()
{
    int arr[7] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(int);
    cout << "Array before sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = 0; j <= n - 2; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    cout << "Array after sorting:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}