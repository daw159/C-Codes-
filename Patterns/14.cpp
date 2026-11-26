#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n=5;
    for(int i=0;i<n;i++){
        for(int s=0;s<(n-1)-i;s++){
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
    n=n-1;
    for(int i=0;i<n;i++){
        for(int s=0;s<i+1;s++){
            cout<<" ";
        }
        for(int j=0;j<(2*n-1)-2*i;j++){
            cout<<j+1;
        }
        cout<<endl;
    }
}