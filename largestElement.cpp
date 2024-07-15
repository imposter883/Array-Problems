/*Find the largest three distinct elements in an array*/
#include<iostream>
using namespace std;
void findMaximumElements(int arr[], int size, int &max1, int &max2, int &max3){
    max1 = max2 = max3 = 0;

    for(int i=0; i<size; i++){
        if(arr[i]>max1){
            max3  = max2;
            max2 = max1;
            max1 = arr[i];
        }else if(arr[i]>max2 && arr[i]!=max1){
            max3 = max2;
            max2 = arr[i];
        }else if(arr[i]>max3 && arr[i]!=max2 && arr[i]!=max1){
            max3 = arr[i];
        }
    }
}
int main(){

    int size;
    cin>>size;

    int max1,max2,max3;

    int arr[size];

    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    findMaximumElements(arr,size,max1,max2,max3);

    cout<<"max 1:"<<max1<<endl;
    cout<<"max 2:"<<max2<<endl;
    cout<<"max 3:"<<max3<<endl;

    return 0;
}