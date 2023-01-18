#include<bits/stdc++.h> 
using namespace std;
int uniqueValue(int *arr,int size){
    int ans = 0;
    for (int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int arry[]= {1,2,2,1,3};
    cout<<uniqueValue(arry,5);
    return 0;
}