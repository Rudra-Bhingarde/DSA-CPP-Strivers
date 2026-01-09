#include<iostream>
#include<vector>
using namespace std;

void movezerostoend(vector<int>&arr);

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
    for(int num:arr){
        cout<<num<<", ";
    }
    movezerostoend(arr);
    cout<<endl;
    for(int num:arr){
        cout<<num<<", ";
    }
    return 0;
}

void movezerostoend(vector<int> &arr){
    int i=0,n=arr.size();
    while(i<n){
        if(arr[i]==0){
            arr.erase(arr.begin()+i);
            arr.push_back(0);
            n--;
        }
        else{
            i++;
        }
    }
}