#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int currSum=0; 
    for(int i=0; i<n;i++){
       
       cin>>a[i];
    }

     for(int i=0; i<n;i++){
     cout<<a[i]<<endl;
      currSum +=a[i];
     }
    cout<<currSum;
    return 0;
}