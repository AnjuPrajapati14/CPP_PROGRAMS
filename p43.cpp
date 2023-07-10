// decimal to octal number conversion 
#include<iostream>
using namespace std;

   int decToOctal(int n){
    int oct[32];
    int i=0;
    while(n>0){
        oct[i]=n%8;
        n=n/8;
        i++;

    } 
for(int j=i-1; j>=0; j--){
    cout<<oct[j]<<endl;
}
return 0;
    }
int main(){
    int n;
    cin>>n;
    cout<<decToOctal(n)<<endl;
    return 0;
}