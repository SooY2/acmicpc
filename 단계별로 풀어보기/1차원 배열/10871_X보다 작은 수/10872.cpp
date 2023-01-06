//
#include<iostream>
using namespace std;
#include<vector>

int main(){

    int n,x;
    cin>>n>>x;

    vector<int> arr;
    int num;
    for (int i=0;i<n;i++){
        cin>>num;
        if(num<x){
            arr.push_back(num);
        }
    }

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}
