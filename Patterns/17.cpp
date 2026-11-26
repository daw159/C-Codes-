#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string>
using namespace std;
int main(){
system("cls");
    int a,i,r,n,count=1,term,sum=0;
    cout<<"R:";
    cin>>r;
    cout<<"N:";
    cin>>n;
    cout<<"A:"<<endl;
    cin>>a;
    i=0;
    while(count<=n){
        term=a*(pow(r,i));
        cout<<term<<endl;
        sum=sum+term;
        i++;
        count++;
    }
    cout<<"sum is "<<sum;
  return 0;
}