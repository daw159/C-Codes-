#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n=4;
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1)-i;j++){
            cout<<" ";
        }
        for(int k=0;k<i+1;k++){
            cout<<k+1;
        }
        int n=i;
        for(int l=i;l>0;l--){
            cout<<n--;
        }
        cout<<endl;
    }
  return 0;
}