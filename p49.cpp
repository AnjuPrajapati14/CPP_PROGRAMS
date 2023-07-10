//selection sort in array  
#include <iostream>
using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
         min_idx = i;
        for (j = i+1; j < n; j++)
        {
          if (arr[j] < arr[min_idx])
              min_idx = j;
        } 
        if (min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
}
}
int main()
{
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int arr[n];
    cout << "enter the elements in array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    cout << "Sorted  array:"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}
