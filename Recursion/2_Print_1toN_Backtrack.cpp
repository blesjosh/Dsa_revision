#include <iostream>
using namespace std;

void printN(int i, int n){
    if (i<1) return;
 
    printN(i-1,n);
    cout<<i<<endl;
    
}

int main(){
    int n; cin>>n;
    printN(n,n);
    
}