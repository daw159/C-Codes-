#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
for(int i=1;i<=5;i++){
    for(int j=1;j<=5-i;j++){
        cout<<" ";
    }
    int n=i;
    for(int k=1;k<=(2*i)-1;k++){
        cout<<n;
        n++;
    }
        for(int l=1;l<=5-i;l++){
            cout<<" ";
        }
        cout<<endl;
    }
  return 0;
}