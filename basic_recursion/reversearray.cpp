#include<iostream>
#include<vector>
using namespace std;



int main(){
    int n;
    cout<<"enter the number of elements you want to enter in the array: ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the element: ";
        cin>>temp;
        arr.push_back(temp);
    }
    for(int i=0;i<n/2;i++){
        int temp=arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i]=temp;
    }
    for(int num:arr){
        cout<<num<<", ";
    }

    return 0;
}