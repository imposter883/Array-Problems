/*Reverse An Array*/
#include<iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int reverseArr[size];
    for(int i=0; i<size; i++){
        reverseArr[i] = arr[size-i-1];
    }

    for(int i=0; i<size; i++){
        cout<<reverseArr[i]<<" ";
    }
}

int main(){
    int size;
    cin>>size;
    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"The reverse Array is:";
    reverseArray(arr,size);

    return 0;
}