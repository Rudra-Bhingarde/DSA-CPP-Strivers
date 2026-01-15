#include<iostream>
#include<vector>
using namespace std;

void quicksort(vector<int>&arr,int start,int end);
void printarray(vector<int> arr);

int main(){
    int n;
    cout<<"enter the number of elements to be enter in the array: ";
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cout<<"enter the elements in the array: ";
        cin>>temp;
        arr.push_back(temp);
    }
    printarray(arr);
    quicksort(arr,0,n-1);
    printarray(arr);
    return 0;
}

void quicksort(vector<int>&arr, int start,int end){
    if(start>=end){
        return;
    }
    int pivot = end;
    int temp;
    int j=start;
    int i=start-1;
    while(j!=end){
        if(arr[j]<arr[pivot]){
            i++;
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        j++;
    }
    i++;
    temp = arr[i];
    arr[i]=arr[pivot];
    arr[pivot]=temp;
    if(i!=start){
        quicksort(arr,start,i-1);
    }
    if(i!=end){
        quicksort(arr,i+1,end);
    }
}
void printarray(vector<int> arr){
    cout<<"[";
    for(int num:arr){
        cout<<num<<",";
    }
    cout<<"]"<<endl;
}