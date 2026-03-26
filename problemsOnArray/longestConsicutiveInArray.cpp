#include<bits/stdc++.h>
using namespace std;

int longestConsicutiveSequence(vector<int>arr){
    if(arr.size()==0) return 0;
    int ans = 1;
    int count=1;
    int n = arr.size();
    sort(arr.begin(),arr.end());
    int current = arr[0];
    for(int i=1;i<n;i++){
        if(current==arr[i]-1){
            current = arr[i];
            count++;
        }
        else if(current!= arr[i]){
            current = arr[i];
            count = 1;
        }
        if(ans<count){
            ans = count;
        }
    }
    return ans;
}

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
    int ans = longestConsicutiveSequence(arr);
    cout<<"the length of the longest consiqutive sequence in the array has the length: "<<ans;
}