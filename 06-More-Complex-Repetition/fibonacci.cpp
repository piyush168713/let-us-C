#include<bits/stdc++.h>
using namespace std;

// T.C - O(n) - tabulation
// S.C - O(1)
// fibonacci number till nth term
void fib1(int n){
    int n1 = 0, n2 = 1, n3;
    cout<<n1<<" "<<n2<< " ";

    for(int i = 2; i < n; i++){
        n3 = n1 + n2;
        cout<<n3<<" ";
        n1 = n2;
        n2 = n3;
    }
}


// fibonacci number of nth term
void fib2(int n){
    int n1 = 0, n2 = 1, n3;

    for(int i = 2; i < n; i++){
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
    }
    cout<<n3<<endl;
}

int main(){
    
    int n;

    fib1(9);
    cout<<endl;
    fib2(7);
    cout<<endl;
    
    return 0;
}