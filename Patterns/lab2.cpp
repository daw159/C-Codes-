#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n=4;
    int a=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<a<<"\t";
            a=a+2;
        }
        cout<<endl;
    }
  return 0;
}