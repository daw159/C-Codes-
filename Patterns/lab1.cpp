#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int k=0;k<n;k++){
        for(int l=0;l<=k;l++){
            cout<<"*";

        }
        cout<<endl;
    }
  return 0;
}