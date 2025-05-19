#include<iostream>
#include<vector>
using namespace std;

void DisplayM(const vector<vector<int>>& arr, int n){
    cout << "printing the matrix" << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
vector<vector<int>> RowTransfer(const vector<vector<int>>& arr, int n , int x, int y){
    cout<<"Row transforming "<<endl;
    vector<vector<int>> arr1(n, vector<int>(n));
    arr1=arr;
    for(int j=0;j<n;j++){
            arr1[x-1][j]=arr[y-1][j];
        }
    for(int j=0;j<n;j++){
            arr1[y-1][j]=arr[x-1][j];
        }
    return arr1;

}
vector<vector<int>> ColumnTransfer(const vector<vector<int>>& arr, int n , int x, int y){
    cout<<"column transforming "<<endl;
    vector<vector<int>> arr1(n, vector<int>(n));
    arr1=arr;
    for(int j=0;j<n;j++){
            arr1[j][x-1]=arr[j][y-1];
        }
    for(int j=0;j<n;j++){
            arr1[j][y-1]=arr[j][x-1];
        }
    return arr1;

}

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    vector<vector<int>> arr(n, vector<int>(n));
    vector<vector<int>> arr1(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    DisplayM(arr, n);
    arr1=RowTransfer(arr,n,x,y);
   
    DisplayM(arr1,n);
    arr1=ColumnTransfer(arr1,n,x,y);
    DisplayM(arr1,n);
}