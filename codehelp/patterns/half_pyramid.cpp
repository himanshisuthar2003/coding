#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n ;
    cin>>n;
    for(int row = 0 ; row<n ; row++){
        for(int colm =0; colm<row+1;colm++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}