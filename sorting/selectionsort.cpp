#include<iostream>
#include<vector>
using namespace std;

void selectionsort(vector<int> &arr);

int main(){
    int n;
    cout<<"enter the number of elements you want to enter in to the array: ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the array element: ";
        cin>>temp;
        arr.push_back(temp);
    }
    selectionsort(arr);
    for(int num:arr){
        cout<<num<<",";
    }
    return 0;
}

void selectionsort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}