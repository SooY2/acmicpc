//25304_영수증
#include<iostream>
using namespace std;

int main(){

    int X;//영수증에 적힌 총 금액
    int N;//영수증에 적힌 물건의 종류의 수
    int a,b;//가격, 개수
    int total=0; //cout해줘야하니 초기화 해주기(?)

    cin>>X;
    cin>>N;
    for (int i=0;i<N;i++){
        cin>>a>>b;
        total+=a*b;
    }
    if(total==X) cout<<"Yes";
    else cout<<"No";

    return 0;
}
