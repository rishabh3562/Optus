#include<iostream>
using namespace std;

int largest(int arr[], int n)
{
    int i;
 
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements
    // from second and compare
    // every element with current max
    for (i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}

int main()
{
    int arr[]={3,4,5,6,7};
int n = sizeof(arr) / sizeof(arr[0]);

cout<<"\n\n7.Find max in an array"<<endl;
 cout << "Largest in given array is: " << largest(arr, n);

    return 0;
}