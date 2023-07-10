// FINDING THE MAXIMUM NUMBER AMONG THREE NUMBERS

#include<iostream>
using namespace std;
int main(){
    int a, b , c;
     int max;
    cin>>a >>b >>c;
    if(a>b && a>c){
         max = a;
        cout<<max;
    }
    else if(b>a&&b>c){
         max=b;
        cout<<max;
    }
    else{
        max=c;
        cout<< max;
    }
    return 0;
}