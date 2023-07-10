
// quick questions on function
// sum if first n natural numbers
 
#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
 
int sum(int a){
    int ans=0;
    for(int i=1; i<=a; i++ ){   
        ans+=i;
        
    }
    return ans;
}
int32_t main(){
    int   n;
    cin>>n;
    cout<<sum(n)<<endl;
    
}