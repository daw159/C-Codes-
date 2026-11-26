#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n=5;
    for( int i=0;i<n;i++){
        int s=0;
        for(s=0;s<(n-1)-i;s++){
            cout<<" ";
        }
        for( int j=0;j<2*i+1;j++){
            if(i==0 || i==n-1 || j==0 ||j==2*i){
                cout<<j+1;
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
  return 0;
}