#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
//  frequency

    int i,n,r,f=0,dig;
    cout<<"Enter the n:"<<endl;
    cin>>n;
    cout<<"Enter the digit to check: "<<endl;
    cin>>dig;
    while(n>0){
        r=n%10;
        if(r==dig){
            f++;
        }
        n=n/10;
    }

    cout<<f<<endl;
  return 0;
}