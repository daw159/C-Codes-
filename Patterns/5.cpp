#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int n1,n2,gcd,n=1,lcm;
    cout<<"First number :";
    cin>>n1;
    cout<<"Second Number:";
    cin>>n2;
    int d=(n1<n2)?n1:n2;// n1<n2 for gccd
    while(d>0 ){ //d>0
        if((n1%d==0)&&(n2%d==0)){ // n1%d && n2% d
            gcd=d;
            break;
        }
       d--; //d--
    }

    cout<<"GCD  is "<<gcd<<endl;
    cout<<"lcm is "<<(n1/gcd)*n2<<endl;
  return 0;
}