#include <iostream>

using namespace std;

int sum_recursive(int arr[],int i,int n){
    if(i!=n-1) return sum_recursive(arr,i+1,n)+arr[i];
    return arr[i];
}

int main(){
    int array[]={1,2,3,4,5};
    cout<<sum_recursive(array,0,5);
    return 0;
}