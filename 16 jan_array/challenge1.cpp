#include<iostream>
using namespace std;
int linear_search(int arr[],int key, int size){
for(int i=0;i<size;i++){
    if(arr[i]==key){
        return i;
        break;
    }
}
return -1;
}

bool is_sorted(int arr[],int size){
   for (int i = 1; i < size; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}
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
{int arr[]={3,4,5,6,7};
int n = sizeof(arr) / sizeof(arr[0]);
cout<<"1.print all elements in array:"<<endl;
for(int i=0;i<n;i++){

    cout<<arr[i]<<"\t";
}

cout<<"\n\n2.print all even numbers in array:"<<endl;
for(int i=0;i<n;i=i+2){

cout<<arr[i]<<"\t";
}

cout<<"\n\n3.print all odd numbers in array:"<<endl;
for(int i=1;i<n;i=i+2){

cout<<arr[i]<<"\t";
}

cout<<"\n\n4.print the count of even numbers:"<<endl;
int even_counter=0;
for(int i=0;i<n;i=i+2){

even_counter++;
}
cout<<"The count of even numbers is:"<<even_counter;
cout<<"\n\n5.Search for a given element in array\n";
cout<<"Enter the element to search for:";
int ele_to_search;
cin>>ele_to_search;

int result=linear_search(arr,ele_to_search,n);
if(result==-1){
    cout<<"Element Not found";
}
else{
    cout<<"Element found at index:"<<result;
}

cout<<"\n\n6.Find if a array is sorted or not"<<endl;
int is_sorted_result=is_sorted(arr,n);
if(is_sorted_result){
    cout<<"the array is sorted";
}
else{
    cout<<"the array is not sorted";
}
cout<<"\n\n7.Find max in an array"<<endl;
 cout << "Largest in given array is: " << largest(arr, n);
    return 0;
}