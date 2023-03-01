#include<bits/stdc++.h> 
using namespace std;

int main(){
    int n ;
    cin>>n;
    for(int row = 0 ; row<n ; row++){
        for(int colm=0;colm<n-row;colm++){
            cout<<" ";
        }
        for(int colm =0; colm<row+1;colm++){
            cout<<"* ";//space after star
        }
            cout<<endl;
                
    }           
    return 0;
}