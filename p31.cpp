// prime numbers btw 2 given numbers
//using function
#include<iostream>
#include<cmath>
using namespace std;
bool isPrime(int n){
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int a, b;
    
    cout<<" a and b : ";
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        if( isPrime(i)){
            cout<<i<<endl;
        }
    }
}