#include<iostream>
#include<vector>
using namespace std;

bool issorted(vector<int> arr);

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
    if(issorted(arr)){
        cout<<"the given array is sorted.";
    }
    else{
        cout<<"the given array is not sorted";
    }
    return 0;
}

bool issorted(vector<int>arr){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}