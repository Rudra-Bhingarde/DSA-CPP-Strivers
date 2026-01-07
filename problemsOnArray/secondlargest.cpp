#include<iostream>
#include<vector>
using namespace std;

int secondmax(const vector<int> &arr);

int main(){
    int n;
    cout<<"enter the number of elements you want to enter into the array: ";
    cin>>n;
    while(n<2){
        cout<<"enter value greater than 1: ";
        cin>>n;
    }
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the element into the array: ";
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"the maximum value in the given array is: "<<secondmax(arr);
    return 0;
}

int secondmax(const vector<int>&arr){
    int ans=arr[0];
    int max=arr[0];
    for(int num:arr){
        if(max<num){
            ans = max;
            max = num;
        }
        else if(num>ans && num<max){
            ans=num;
        }
    }
    return ans;
}