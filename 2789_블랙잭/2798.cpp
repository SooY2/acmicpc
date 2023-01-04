#include <iostream>
#include<vector>
using namespace std;

int main(){
    int N,M,num,hap;
    int temp=0;

    cin>>N>>M;
    vector<int> card;

    for(int i=0;i<N;i++){//숫자 N개만큼 넣기
        cin>>num;
        card.push_back(num);
    }

    for(int i=0;i<N-2;i++){
        for(int j=i+1;j<N-1;j++){
            for(int k=j+1;k<N;k++){
                hap=card[i]+card[j]+card[k];
                if(hap<=M){
                    if(hap>temp){
                        temp=hap;
                    }
                }
            }
        }
    }

    cout<<temp;

    return 0;
}