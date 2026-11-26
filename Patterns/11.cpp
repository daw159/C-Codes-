#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n=5;
    for(int i=0;i<n;i++){
        char  ch='A';
        for(int j=0;j<n-i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
  return 0;
}