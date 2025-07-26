#include <iostream>
using namespace std;

void printN(int n, int i = 1) {
    if(i > n) return; // Base case: if i is greater than n, stop recursion
    cout << "Joshwa"; // Print the current value of i
    printN(n, i + 1); // Recursive call with i incremented by 1
}

int main(){
    int n;
    cin >> n;
    printN(n);
    return 0;
}