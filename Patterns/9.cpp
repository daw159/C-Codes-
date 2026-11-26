#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-1)-i;j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
        for(int k=0;k<(2*i)-1;k++){
            cout<<" ";
        }
        
            cout<<"*";        
    }
        cout<<endl;
    }

    int i=0;
    for(i=0;i<n-1;i++){
        for(int m=0;m<i+1;m++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=n-2){
        for(int o=0;o<(-2*i)+3;o++){
            cout<<" ";
        }
        
            cout<<"*";
    }
        cout<<endl;
    }
  return 0;
}