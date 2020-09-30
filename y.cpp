#include <iostream>

using namespace std;

int insert(int arr[], int n, int item, int pos)
{
    int i;
    //increase size of Array
    n++; 
    //shift elements
    for(i=n; i>=pos;i--)
        arr[i] = arr[i-1];
    //inserting item
    arr[pos-1] = item;
    cout<<"Updated Array::";
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
    
}

int main()
{
    int n,i;
    int pos, item;
    cout<<"Enter Size of Array:";
    cin>>n;
    int * arr = new int;
    cout<<"Enter Elements";
    for(i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the new element";
    cin>>item;
    cout<<"Enter Position";
    cin>>pos;
    cout<<"Original Array:";
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    insert(arr, n, item, pos);
    return 0;
}
