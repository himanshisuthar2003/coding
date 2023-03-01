#include<bits/stdc++.h> 
using namespace std;

int main(){
    for(int row=0;row<4;row++){
        if(row==1||row==2){
            for(int colm=0;colm<5;colm++){
                if(colm==0||colm==4){
                    cout<<"*";
                }
                else
                {cout<<" ";}
            }
        }
        else{
            for(int colm=0;colm<5;colm++){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    return 0;
}