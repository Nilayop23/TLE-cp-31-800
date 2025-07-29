
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

int main (){
     int t ; cin>> t;
     while (t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for (int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        int mini = pow(10,9);
        for (int i = 1 ; i < n ; i++){
            int local_min = ( arr[i] - arr[i-1]);

            mini = min(mini, local_min);
        }
        if(mini < 0){
            cout<<"0"<<endl;
        }
        else{
            cout<<(mini/2 + 1)<<endl;
        }

     }
return 0;
}
