#include<iostream>
#include<vector>
using namespace std;

void leftrotatebyD(vector<int>&arr,int d);

int main(){
    int n,d;
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
    cout<<"enter the number of times you want to left rotate the given array: ";
    cin>>d;
    leftrotatebyD(arr,d);
    cout<<endl;
    for(int num:arr){
        cout<<num<<", ";
    }
    return 0;
}

void leftrotatebyD(vector<int> &arr,int d){
    d%=arr.size();
    vector<int> temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[0]);
        arr.erase(arr.begin());
    }
    for(int num:temp){
        arr.push_back(num);
    }
}