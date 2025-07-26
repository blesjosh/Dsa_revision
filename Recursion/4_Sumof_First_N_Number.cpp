#include <iostream>
using namespace std;

void func(int i, int sum){
    if (i<1){
        cout<<sum;
        return;
    }
    func(i-1, sum+i);
}
int main(){
    
    func(5,0);
    return 0;

}

// Functional way 
// void func(int n){
// if (n==0){
// return 0};
// return n+func(n+i); 