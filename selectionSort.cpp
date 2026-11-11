#include<iostream>
using namespace std;

    void selectionSort(int arr[],int n){
        for(int i=0;i<n-1;i++){
            int smallestIndex=i;
            for(int j=i+1;j<n;j++){
                if(arr[j]<arr[smallestIndex]){
                smallestIndex=j;
                }
            }
            swap(arr[i],arr[smallestIndex]);
        }
    }
int main(){
    int n=10;
    int arr[]={12,13,11,14,17,15,18,20,19,16};
    selectionSort(arr,n);
    cout<<"Sorted Array Is:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}