// dynamically managed array size
#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter no. of elements : ";
    int count , sum=0;
    cin>>count;
    vector<int> arr;
    arr.resize(count);  // resize fixes vecotr size at run time
    for(int i=0; i<arr.size(); i++){
        arr[i]= i;
        sum+=arr[i];
    }
    
    out<<"array sum:"<<sum<<endl;
}
 