//2439_별찍기-2
#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;

    for(int i=0;i<N;i++){
        for(int j=N-1;j>i;j--){
            cout<<' ';
        }
        for(int k=0;k<i+1;k++){
            cout<<'*';
        }
        
        cout<<endl;
    }
    return 0;
}
