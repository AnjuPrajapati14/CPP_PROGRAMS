// num pattern
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" n: ";
    cin>>n;
       for(int i=1; i<=n; i++){
        int s;
        for(int s=1; s<=n-i; s++){
            cout<<" ";
        }
        for(int j=i; j>=1; j--){
            cout<<j;
        }
      //  for(int j=2; j<=n; j++){
       //     cout<<j;
      //  }
        cout<<endl;
    }
}