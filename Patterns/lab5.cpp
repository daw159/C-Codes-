#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n=5,a=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<"\t";
        }
        for(int k=0;k<n-i;k++){
            cout<<a<<"\t";
            a=a+2;
        }
        cout<<endl;
    }
  return 0;
}