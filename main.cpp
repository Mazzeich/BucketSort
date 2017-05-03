#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#define size 10
using namespace std;


using namespace std;

void bucketSort(int Arr[], int n)
{
    int  k, buckets[size];

    for(int i = 0; i < size; ++i)
        buckets[i] = 0;

    for(int i = 0; i < n; ++i)
        ++buckets[Arr[i]];

    for(int i = 0, j = 0; j < size; ++j)
        for(k = buckets[j]; k > 0; --k)
            Arr[i++] = j;
}



int main()
{
    int n;
    int Arr[100];
    cout << "Enter the size of array." << endl;
    cin >> n;
    cout << "Enter the elements of Array(int)" << endl;
    for(int i = 0; i < n; i++) cin >> Arr[i];

    bucketSort(Arr, n);

    cout << "Sorted array is " << endl;;
    for (int i = 0; i < n; i++)
        cout << Arr[i] << " ";
    return 0;
}
