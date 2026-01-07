#include<iostream>
#include<vector>
using namespace std;

int max(vector<int> arr);

int main(){
    int n;
    cout<<"enter the number of elements you want to enter into the array: ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the element into the array: ";
        cin>>temp;
        arr.push_back(temp);
    }
    cout<<"the maximum value in the given array is: "<<max(arr);
    return 0;
}

int max(vector<int>arr){
    int ans=INT_MIN;
    for(int num:arr){
        if(num>ans){
            ans=num;
        }
    }
    return ans;
}