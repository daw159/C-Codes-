#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
 char ch='A';
 int n=4;
    for(int i=0;i<n;i++){
        for( int j=0;j<i+1;j++){
            cout<<ch;

          }
          ch++;
        cout<<endl;
    }
  return 0;
}