#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int> &arr,int n);

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
    bubblesort(arr,n);
    for(int num:arr){
        cout<<num<<", ";
    }
    return 0;
}

void bubblesort(vector<int> &arr,int n){
    if(n<=1) return;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] =temp;
        }
    }
    bubblesort(arr,n-1);
}