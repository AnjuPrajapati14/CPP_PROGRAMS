
// num pattern

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" n: ";
    cin>>n;
       for(int i=1; i<=n; i++){
       // int j;
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
       }
       return 0;
}