#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n=4;
    for(int i=0;i<n;i++){
        for(int k=0;k<i;k++){
            cout<<" ";
        }
        for(int j=0;j<(-2*i)+(2*n -1);j++){
            cout<<"*";
        }
        cout<<endl;
    }
  return 0;
}