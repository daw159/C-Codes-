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
            if(i==0 || j==0  || j==2*i){
                cout<<"*";
            }
            else
                cout<<" ";
        }
        cout<<endl;
    }
   
    for(int i=0;i<n-1;i++){
        for(int s=0;s<i+1;s++){
            cout<<" ";
        } 
        cout<<"*";
        if(i!=n-2){
            for(int j=0;j<2*(n-i)-5;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        
    cout<<endl;
  
        }
}
