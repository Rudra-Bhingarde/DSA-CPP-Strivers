#include<iostream>
#include<vector>
using namespace std;

void printarray(vector<int> arr);
void recursiveinsertionsort(vector<int> &arr,int n);
void swap(int &a,int &b);

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
    printarray(arr);
    recursiveinsertionsort(arr,0);
    printarray(arr);
    return 0;
}
void printarray(vector<int> arr){
    cout<<'[';
    for(int num:arr){
        cout<<num<<",";
    }
    cout<<']'<<endl;
}

void recursiveinsertionsort(vector<int> &arr,int n){
    if(n==arr.size()){
        return;
    }
    int temp = n;
    while(temp!=0 && arr[temp]<arr[temp-1]){
        swap(arr[temp],arr[temp-1]);
        temp--;
    }
    recursiveinsertionsort(arr,n+1);
}

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}