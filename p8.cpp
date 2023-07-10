// increment decrement operator
#include<iostream>
using namespace std;
int main(){
    int i=10, j=20, k;
    k= i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
      //10 - 9  +  19 - 20   +  9  - 20 + 10 -  19 
    cout<<i<<endl;  //9 10 9 10
    cout<<j<<endl;  //19  20 19 20
    cout<<k<<endl;



    return 0;
}