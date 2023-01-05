//
#include<iostream>
using namespace std;

int main(){

    int N,v;
    cin>>N;

    int n[N];

    for (int i=0;i<N;i++){
        cin>>n[i];
    }

    cin>>v;
    int count;
    for (int i=0;i<N;i++){
        if(n[i]==v) count++;
    }
    cout<<count;
    return 0;
}
