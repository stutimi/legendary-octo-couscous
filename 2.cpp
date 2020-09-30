#include <iostream>

using namespace std;

int search(int arr[], int n, int item)
{
    int i;
    for (i = 0; i < n; i++) 
        if (arr[i] == item) 
            return i; 
    return -1; 
    
}

int main()
{
    int n,i;
    int item;
    cout<<"Enter Size of Array:";
    cin>>n;
    int * arr = new int;
    cout<<"Enter Elements";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the element to be searched";
    cin>>item;
    int result = search(arr, n, item);
    if(result == -1)
        cout<<"Element is not present in array";
    else
        cout<<"Element is present at index: " <<result;
    return 0;
}

