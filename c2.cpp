 // fixed large / vector
 #include<iostream>
 #include<vector>
 #define MAX 100
 using namespace std;
 int main(){
    vector<int> arr(MAX); //DEFINE-TIME SIZE 
    cout<<"enter the no. of elements ";

    int count,  b sum=0;
    cin>>count;
    for(int i=0; i<count; i++){
        arr[i]=i;
        sum+=arr[i];
    }
    cout<<"array sum: " <<sum<<endl;
    return 0;
 }


 //MAX is declared size of vector
 // header vector included 
 // arr declared as vector<int>