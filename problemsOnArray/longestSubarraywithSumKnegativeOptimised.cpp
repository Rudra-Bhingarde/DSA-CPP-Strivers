#include<bits/stdc++.h>
using namespace std;

int longestsubarraywithsumzerowithnegatives(vector<int> arr){
    unordered_map <int,int> mp;
    int sum = 0;
    int maxlen = 0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==0){
            maxlen = i+1;
        }
        if(mp.find(sum)!=mp.end()){
            maxlen = max(maxlen,i-mp[sum]);
        }
        else{
            mp[sum]=i;
        }
    }
    return maxlen;
}

int main(){
    int n=0;
    cout<<"enter the number of elements you want in your array: ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter element in array: ";
        cin>>temp;
        arr.push_back(temp);
    }
    int ans=longestsubarraywithsumzerowithnegatives(arr);
    cout<<"the ans is: "<<ans;
}