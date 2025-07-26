#include <iostream>
using namespace std;

void printN(int i, int n) {
    if (i < 1) return; // Base case: if i is less than 1, stop recursion
    cout << i << " ";   // Print the current value of i
    printN(i - 1, n);   // Recursive call with i decremented by 1
}

int main() {
    int n;
    cin >> n;           // Input the value of n
    printN(n, n);         // Call the function to print numbers from n to 1
    return 0;
}