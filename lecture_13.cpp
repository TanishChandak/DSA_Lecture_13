#include<iostream>
using namespace std;

// Creating firstOcc function:
int firstOcc(int arr1[], int size1, int key)
{
    int start = 0;
    int end = size1 - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr1[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr1[mid ] < key)
        {
            start = start + 1;
        }
        else if (arr1[mid] > key)
        {
            end = end - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
// Creating lastOcc function:
int lastOcc(int arr1[], int size1, int key)
{
    int start = 0;
    int end = size1 - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr1[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (arr1[mid ] < key)
        {
            start = start + 1;
        }
        else if (arr1[mid] > key)
        {
            end = end - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    // find the first & last occ using the Binary Search:
    int size1;
    cout<<"Enter the size of an array: ";
    cin>>size1;
    // Creating key value:
    int key;
    cout<<"Enter the key value: ";
    cin>>key;
    // Creating an array:
    int arr1[100];
    for (int i = 0; i < size1; i++)
    {
        cout<<"Value of index "<< i << " is: ";
        cin>>arr1[i];
    }
    // Calling firstOcc function:
    int first = firstOcc(arr1, size1, key);
    cout<<"The firstOcc is: "<<first<<endl;
    // Calling lastOcc function:
    int last = lastOcc(arr1, size1, key);
    cout<<"The lastOcc is: "<<last<<endl;
}

