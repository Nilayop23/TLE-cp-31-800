#include<iostream>
using namespace std;
int main (){
    int t ; cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin>>arr[i];
        }
        if (arr[0]==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

//question seemed very difficult but had a very simple solution
//liked th approach very much 
//it had nothing to do with permutation only simpple logic
//arr contains 1 to n numbers and 1 being the smallest
//because swapping will happen only from 1 to n 
//the position of 1 is fixed , so therefore