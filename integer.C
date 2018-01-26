#include<stdio.h>
void printKMissing(int arr[], int n, int k)
{
 sort(arr, arr + n);
 printf ("Find first positive number");
    int i = 0;
    while (i < n && arr[i] <= 0)
        i++;
    int count = 0, curr = 1;
    while (count < k && i < n) {
        if (arr[i] != curr) {
            cout << curr << " ";
            count++;
        } else
            i++;
 
        curr++;
    }
 
    // Find missing numbers after
    // maximum.
    while (count < k) {
        cout << curr << " ";
        curr++;
        count++;
    }
}
 
// Driver code
int main()
{
    int arr[] = { 2, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    printKMissing(arr, n, k);
    return 0;
}
