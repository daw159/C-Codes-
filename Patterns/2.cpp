#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int i,j,n,k;
    cout<<"Enter the n: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(k=0;k<(n-i);k++){
            cout<<" ";
        }
        
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

  return 0;
}