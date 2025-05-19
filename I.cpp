// #include<stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"printing the matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"he";
    
    
    
}