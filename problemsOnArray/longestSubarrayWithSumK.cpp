#include<iostream>
#include<vector>
using namespace std;

int findmaxsubarray(vector<int> arr, int target);
void printarray(vector<int> arr);

int main(){
    int n;
    cout<<"enter number of elements you want to enter in the array: ";
    cin>>n;
    vector<int>arr;
    int ans=0;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the number in the array: ";
        cin>>temp;
        arr.push_back(temp);
    }
    int target;
    cout<<"enter the value of the target: ";
    cin>>target;
    printarray(arr);
    ans = findmaxsubarray(arr,target);
    cout<<"the length of the longestsubarray with target sum is: "<<ans;
    return 0;
}
int findmaxsubarray(vector<int> arr,int target){
    int ans =0;
    int sum=0;
    int start=0;
    int current=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        current++;
        if(sum==target && ans<current){
            ans = current;
        }
        else if(sum>target){
            while(sum>target){
                sum-=arr[start];
                start++;
                current--;
                if(sum==target && ans<current){
                    ans = current;
                }
            }
        }
    }
    return ans;
}
void printarray(vector<int> arr){
    cout<<"[";
    for(int num:arr){
        cout<<num<<", ";
    }
    cout<<"]"<<endl;
}