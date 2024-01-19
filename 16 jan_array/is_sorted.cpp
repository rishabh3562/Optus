#include<iostream>
using namespace std;


bool is_sorted(int arr[],int size){
   for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[]={3,4,5,6,7};
int n = sizeof(arr) / sizeof(arr[0]);

int is_sorted_result=is_sorted(arr,n);
if(is_sorted_result){
    cout<<"the array is sorted";
}
else{
    cout<<"the array is not sorted";
}

    return 0;
}