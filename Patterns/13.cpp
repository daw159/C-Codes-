#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n=5;
    for(int i=0;i<n;i++){
        char ch='A';
        for(int s=0;s<(n-1)-i;s++){
            cout<<" ";
        }
        for(int j=0;j<n;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
  return 0;
}