#include<bits/stdc++.h> 
using namespace std;
int duplicate(int * arr,int size){
    int ans= 0;
    for(int i = 0; i<size;i++){
        ans = ans^arr[i];
    }
    for(int i = 1;i<size;i++){
        ans=ans^i;
    }
    return ans;
}
int main(){
    int arry[]={1,2,3,3,4,5};
    cout<<duplicate(arry,6);

    return 0;
}