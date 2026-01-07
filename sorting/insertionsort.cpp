#include<iostream>
#include<vector>
using namespace std;

void insertionsort(vector<int> &arr);

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
    insertionsort(arr);
    for(int num:arr){
        cout<<num<<",";
    }
    return 0;
}

void insertionsort(vector<int> &arr){
    int n = arr.size();
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j=i-1;
        while((j>=0 && arr[j]>temp)){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}