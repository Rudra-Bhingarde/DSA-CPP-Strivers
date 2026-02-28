#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

vector<int> leadersinarray(vector<int> arr){
    vector<int> ans;
    int max = INT_MIN;
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]>max){
            ans.push_back(arr[i]);
        }
        if(arr[i]>max){
            max = arr[i];
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main(){
    int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the element in array: ";
        cin>>temp;
        arr.push_back(temp);
    }
    vector<int> ans = leadersinarray(arr);
    for(int num:ans){
        cout<<num<<" ";
    }
}