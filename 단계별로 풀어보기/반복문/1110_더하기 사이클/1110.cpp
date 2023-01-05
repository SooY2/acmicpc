//
#include<iostream>
using namespace std;

int main(){

    int n,hap;
    cin>>n;
    int temp=0;
    int count=1;

    if(n<10) hap=n;
    else hap=n/10+n%10;
    temp=n%10*10+hap%10;
    while(n!=temp){
        hap=temp/10+temp%10;
        temp=temp%10*10+hap%10;
        count++;
    }

    cout<<count;
    return 0;
}
