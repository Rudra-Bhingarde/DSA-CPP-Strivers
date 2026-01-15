#include<iostream>
#include<vector>
using namespace std;

vector<int> findunion(vector<int> arr1,vector<int> arr2);
void printarray(vector<int> arr);
int main(){
    int n;
    int m;
    cout<<"enter the first array's size: ";
    cin>>n;
    vector<int> arr1;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the element in the array: ";
        cin>>temp;
        arr1.push_back(temp);
    }
    cout<<"enter the second array's size: ";
    cin>>m;
    vector<int> arr2;
    for(int i=0;i<m;i++){
        int temp;
        cout<<"enter the element in the array: ";
        cin>>temp;
        arr2.push_back(temp);
    }
    vector<int> ans = findunion(arr1,arr2);
    cout<<"arr1: ";
    printarray(arr1);
    cout<<"arr2: ";
    printarray(arr2);
    cout<<"ans: ";
    printarray(ans);
    return 0;
}

void printarray(vector<int> arr){
    cout<<'[';
    for(int num:arr){
        cout<<num<<",";
    }
    cout<<']'<<endl;
}

vector<int> findunion(vector<int> arr1,vector<int> arr2){
    vector<int> ans;
    int i=0;
    int j=0;
    while(i!=arr1.size() && j!=arr2.size()){
        if(arr1[i]<arr2[j]){
            ans.push_back(arr1[i++]);
        }
        else if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i++]);
            j++;
        }
        else{
            ans.push_back(arr2[j++]);
        }
    }
    while(i<arr1.size()){
        ans.push_back(arr1[i++]);
    }
    while(j<arr2.size()){
        ans.push_back(arr2[j++]);
    }
    return ans;
}
