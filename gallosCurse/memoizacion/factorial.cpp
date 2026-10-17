#include <bits/stdc++.h>
using namespace std;

long long factorial(int n);
long long memo[25];

int main() {
    int n;
    cin>>n;
    cout<<factorial(n); 
}

long long factorial(int n){
    if (n > 20 || n < 0) return 0;
    if(!n) return 1;
    if (!memo[n]) memo[n] = n * factorial(n);
    return memo[n];
}
