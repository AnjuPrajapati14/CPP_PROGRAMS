//armstrong number

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    
    cout<<" n: ";
    cin>>n;
    int sum=0;
    int originaln=n;
    while(n>0){
        int lastdigit= n%10;
        sum += round(pow(lastdigit, 3));
       // sum+= pow(lastdigit,3);
        n=n/10;
    }
    if(sum==originaln){
        cout<<" Armstrong"<<endl;

    }
    else{
        cout<<"not";
    }
}
