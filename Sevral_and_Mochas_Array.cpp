#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;


int main (){
int t ; cin>> t;
while(t--){

    int n ; cin>> n;
    vector<int>arr(n);
    for (int i  = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int mini = INT_MAX;
    
    for (int i = 0 ; i < n-1; i++){

        // everyone's gcd wrt to arr[0] 
    for(int j = i+1 ;  j < n ; j++){
        int hcf = gcd (arr[i] ,arr[j]);
         mini = min(hcf , mini);
        }

    }
    
    if (mini <= 2 ){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

}


return 0;    
}
