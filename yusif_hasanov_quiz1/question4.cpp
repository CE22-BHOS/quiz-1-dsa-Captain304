#include <iostream>

using namespace std;

void bubble(int arr[],int n){
    int temp;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>i;j--){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(){
    int arr[]={1,3,2,4,1};
    int n=5;
    bubble(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}