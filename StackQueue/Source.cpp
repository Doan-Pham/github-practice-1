#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
   
    for (i = 0; i < n - 1; i++)
    {
        cout << "\nday la lan chay thu " << i <<": ";
        printArray(arr, n);
        bool haveSwap = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            { 
                swap(&arr[j], &arr[j + 1]);
            haveSwap = true;
            }
        }
        if (haveSwap == false) {
            break;
        }
    }
}

int main()
{
    int arr[] = { 5,1,4,2,8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    cout << "\nMang sau khi sap xep: \n";
    printArray(arr, n);
    return 0;
}
