#include<iostream>
using namespace std;
int main(){
int t; cin>>t;
    while(t--){

        int val = 0;
        int n ; cin>>n;
        int arr[n];
        for (int i = 0 ;  i<n ; i++){
            cin>>arr[i];
        }
        for(int i = 0 ; i < n ; i++){
            val = arr[i] ^ val;
        }
        cout<<val<<endl;
    }

return 0;    
}