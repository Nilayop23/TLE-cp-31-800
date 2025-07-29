
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int T ; cin>>T; 
    while(T--){
        int n ;
        cin>>n;
        vector<int>arr(n);
        for (int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        vector<int>copy(n);
        for(int i = 0 ; i < n ; i++){
            copy[i]=arr[i];
        }
        sort(copy.begin() , copy.end());
        int k =n;
        while (k>=0){
            for(int i = 1 ; i < n-1 ; i++ ){
                if (arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                    swap(arr[i],arr[i+1]);
                }
            } 
        k--;    
        }   
        //Do comparision
        bool b =1 ;
        for(int i = 0 ; i < n ; i++){
            if(arr[i] != copy[i]){
                b = 0;
                break;
            }
        }
        if (b == 1){cout<<"YES"<<endl;}
        else{ cout<<"NO"<<endl;}
        
        
        }
return 0;    
}