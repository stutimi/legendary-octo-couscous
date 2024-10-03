#include <iostream>

using namespace std;

int insert(int arr[], int n, int item, int pos)
{
    // Shift elements to the right to make space for the new element
    for(int i = n; i >= pos; i--)
        arr[i] = arr[i - 1];

    // Insert the new item at the given position
    arr[pos - 1] = item;

    // Return the new size
    return n + 1;
}

int main()
{
    int n, i, pos, item;

    // Input size of the array
    cout << "Enter Size of Array: ";
    cin >> n;

    // Dynamically allocate memory for array
    int* arr = new int[n + 1]; // allocate for n + 1 for future insertion

    // Input array elements
    cout << "Enter Elements: ";
    for(i = 0; i < n; i++)
        cin >> arr[i];

    // Input the new element and its position
    cout << "Enter the new element: ";
    cin >> item;
    cout << "Enter Position: ";
    cin >> pos;

    // Ensure the position is valid
    if(pos < 1 || pos > n + 1) {
        cout << "Invalid position!" << endl;
        delete[] arr; // free memory
        return -1;
    }

    // Display the original array
    cout << "Original Array: ";
    for(i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Insert the element and get the new size
    n = insert(arr, n, item, pos);

    // Display the updated array
    cout << "Updated Array: ";
    for(i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Free dynamically allocated memory
    delete[] arr;
    
    return 0;
}
