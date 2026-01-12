#include<iostream>
#include<vector>
using namespace std;

int find(int key , vector<int>);

int main(){
    int n;
    cout<<"enter the number of elements in the array: ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the element in the array: ";
        cin>>temp;
        arr.push_back(temp);
    }
    int findint;
    cout<<"enter the element you want to find: ";
    cin>>findint;
    int index = find(findint,arr);
    if(index==-1){
        cout<<"element not found!!";
    }
    else{
        cout<<"element found on index: "<<index;
    }
    return 0;
}

int find(int key,vector<int>arr){
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}