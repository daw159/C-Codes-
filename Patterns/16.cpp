#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||i==n-1 ||j==0|| j==n-1)
                cout<<j+1;
            else    
                cout<<" ";
            
        }
        cout<<endl;
    }
  return 0;
}