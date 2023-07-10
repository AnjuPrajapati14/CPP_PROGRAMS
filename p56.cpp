// print all subrray 
#include"bits/stdc++.h"
using namespace std;
int main()
{
     int n; 
     cin>>n;
    int a[n];
    for(int i=0; i<n;i++){
        cin>>a[i];
    }
    
    for(int i=0; i<n;i++){     
    for(int j=i; j<n;j++){
        
    for(int m=i; m<=j;m++){
     
         
        cout<<a[m];
    }
    cout<<endl;
    }
    }
    
    return 0;
}