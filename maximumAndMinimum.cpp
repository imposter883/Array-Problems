/*Maximum and minimum of an array using minimum number of comparisons*/
#include<iostream>
using namespace std;

void Maximum(int arr[], int size, int &max){
    max = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
}

void Minimum(int arr[], int size, int &min){
    min = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
}

int main(){
    int size;
    cin>>size;

    int max,min;

    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    Maximum(arr,size,max);
    Minimum(arr,size,min);

    cout<<"Maximum Number is"<<":"<<" "<<max<<endl;
    cout<<"Minimum Number is"<<":"<<" "<<min<<endl;
    

    return 0;
}