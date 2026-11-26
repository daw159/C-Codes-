#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n=6;
    for( int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int s=0;s<(2*n -1)-2*i;s++){
            if(i==0 || i==n-1 || s==0 || s==(2*n -2)-2*i){
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
  return 0;
}