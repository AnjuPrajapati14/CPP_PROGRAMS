// calculate nCr


#include<iostream>
#include<cmath>
using namespace std;
 
int fact(int a){
    int f=1;
    for(int i=2; i<=a; i++ ){   
        f*=i;
        
    }
    return f;
}
int main(){
    int n,r;
    
    cout<<" n and r :  ";
    cin>>n>>r;
    int ans= fact(n)/(fact(r)*fact(n-r)); 
    cout<<ans<<endl;
    return 0;
}