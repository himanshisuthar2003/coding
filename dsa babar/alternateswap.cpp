#include<bits/stdc++.h> 
using namespace std;
void swapAlternate(int arr[], int size){
    for(int i = 0;i<size; i=i+2){
        if (i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

}
void printArray(int arr[],int size){
    for(int j = 0;j<size;j++){
        cout<<arr[j];
    }
}
int main(){
    int a[]={1,2,3,4,5,6};
    swapAlternate(a,6);
    printArray(a,6);
    return 0;
}