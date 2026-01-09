#include<iostream>
#include<vector>
using namespace std;

void leftrotateby1(vector<int>&arr);

int main(){
    int n;
    cout<<"enter the number of elements you want to enter in the array: ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the element in the array: ";
        cin>>temp;
        arr.push_back(temp);
    }
    for(int num:arr){
        cout<<num<<", ";
    }
    leftrotateby1(arr);
    cout<<endl;
    for(int num:arr){
        cout<<num<<", ";
    }
    return 0;
}

void leftrotateby1(vector<int> &arr){
    int temp = arr[0];
    arr.erase(arr.begin());
    arr.push_back(temp);
}