//2480_주사위 세개
#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    int reward=0;
    cin>>a>>b>>c;

    if(a==b&&b==c) reward=10000+a*1000; //a==b==b로 하면 안돼
    else if(a==b) reward=1000+a*100;
    else if(c==b) reward=1000+c*100;
    else if(a==c) reward=1000+a*100;   
    else if(a!=b){
        if(a>b&&a>c) reward=a*100;
        else if(b>a&&b>c) reward=b*100;
        else if(c>b&&c>a) reward=c*100;
    }

    cout<<reward;

    return 0;
}
