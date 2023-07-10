// fibonacci sequence

#include<iostream>
#include<cmath>
using namespace std;
void fib(int a){
    int t1=0, t2=1;
    int nextTerm;
    for(int i=1; i<=a; i++ ){   
        cout<<t1<<endl;    
        nextTerm= t1+t2;
        t1=t2;
        t2=nextTerm;

    }
    return;
}
int main(){
    int n;
    
    cout<<" n: ";
    cin>>n;
    fib(n);
    return 0;
}