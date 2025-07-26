#include <iostream>
using namespace std;

void printArray(int arr[], int n){
    cout<< "The reversed array is: ";
    for(int i = 1; i < n; i++){
        cout << arr[i] << " ";  
}}

void ReverseArray (int arr[], int i, int n){
    if (i >= n / 2) return; // Base case: if i reaches the middle, stop recursion
    swap(arr[i], arr[n - i - 1]); // Swap the elements at positions i and n-i-1
    ReverseArray(arr, i + 1, n); // Recursive call with i incremented by 1
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n; // Input the size of the array
    int arr[n]; // Declare an array of size n

    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i]; // Input elements into the array
    }
    
    ReverseArray(arr, 0, n); // Call the function to reverse the array
    printArray(arr, n); // Print the reversed array

    return 0;
}