#include<iostream>
#include<vector>
using namespace std;

int findmissingvalue(vector<int> arr);

int main(){
    int n;
    cout<<"enter the number or element in the array: ";
    cin>>n;
    vector<int> arr;
    for(int i=1;i<n;i++){
        int temp;
        cout<<"enter a element in the array: ";
        cin>>temp;
        arr.push_back(temp);
    }
    int ans = findmissingvalue(arr);
    cout<<"the missing value is: "<<ans;
    return 0;
}

int findmissingvalue(vector<int> arr){
    int n=arr.size()+1;
    int sum = ((n) * (n+1)) / 2;
    int total=0;
    for(int num:arr){
        total+=num;
    } 
    return sum - total;
}
