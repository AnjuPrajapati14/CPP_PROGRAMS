// binary to decimal conversion

#include<iostream>
using namespace std;
 int binaryToDecimal(int n){
 int decimal=0;
 int weight=1;
 while(n>0){
    int rem=n%10;
    decimal+= weight*rem;
    weight*=2;
    n/=10;
 }
 return decimal;
 }

int main(){
    int n;
    cin>>n;
    cout<<binaryToDecimal(n)<<endl;
    return 0;
} 