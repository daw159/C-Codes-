#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        for(int k=0;k<(2*(-i))+(n+2);k++){
            cout<<" ";
        }
        for(int l=0;l<i+1;l++){
            cout<<"*";
        }
        cout<<endl;
    }
    int i=n;
    for(i=n;i>0;i--){
        for(int m=0;m<i;m++){
            cout<<"*";
        }
        for(int p=0;p<(2*(-i)+(n+4));p++){
            cout<<" ";
        }
        for(int q=0;q<i;q++){
            cout<<"*";
        }

        cout<<endl;
    }
  return 0;
}