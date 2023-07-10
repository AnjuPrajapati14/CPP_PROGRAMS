// prime number

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool flag=0;
    cout<<" n: ";
    cin>>n;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"non-prime"<<endl;
           flag =1;
            break;
        }
          else if(flag==0)
     {
        cout<<"prime"<<endl;
    }
    
    }
  
    return 0;
}