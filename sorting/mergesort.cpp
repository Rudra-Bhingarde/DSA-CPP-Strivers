#include<iostream>
#include<vector>
using namespace std;

void mergesort(vector<int> &arr);
void merge(vector<int>&left,vector<int>&right,vector<int> &arr);

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
    mergesort(arr);
    for(int num:arr){
        cout<<num<<", ";
    }
    return 0;
}

void mergesort(vector<int> &arr){
    int n = arr.size();
    if(n<=1) return;
    int mid = n/2;
    vector<int> left(arr.begin(),arr.begin()+mid);
    vector<int>right(arr.begin()+mid,arr.end());
    mergesort(left);
    mergesort(right);
    merge(left,right,arr);
}

void merge(vector<int>&left,vector<int>&right,vector<int> &arr){
    int leftsize = arr.size()/2;
    int rightsize = arr.size()-leftsize;
    int i = 0, l = 0, r = 0;
    while(l<leftsize && r<rightsize){
        if(left[l]<right[r]){
            arr[i] = left[l];
            i++;
            l++;
        }
        else{
            arr[i] = right[r];
            i++;
            r++;
        }
    }
    while(l < leftsize){
        arr[i] = left[l];
        i++;
        l++;
    }
    while(r < rightsize){
        arr[i] = right[r];
        i++;
        r++;
    }
}