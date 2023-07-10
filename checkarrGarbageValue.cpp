#include<iostream>

using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
    cin>>arr[i];
}

printf("%d", n);
cout<<n;
cout<<endl;

//reverse array

//when we use i=n , we get one garbage value
for(int  i=n; i>=0; i--){
    printf ("%d  ", arr[i]); 
}
cout<<endl;

// when we use i=n-1 we get the correct values without any garbage value
for(int  i=n-1; i>=0; i--){   
    printf ("%d  ", arr[i]);   
}

return 0;
}
 
