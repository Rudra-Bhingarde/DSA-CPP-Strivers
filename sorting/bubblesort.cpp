#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int> &arr);

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
    bubblesort(arr);
    for(int num:arr){
        cout<<num<<",";
    }
    return 0;
}

void bubblesort(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j+1]<arr[j]){
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}