#include<iostream>
#include<vector>
using namespace std;
int main(){
int t ; cin>> t;
while(t--){
    int n ; cin>> n;
    vector<int>arr(n);
    for (int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int operations = 0;
    int count_minus_1 = 0 ;
    for (int i = 0 ; i < n ; i++){
        if (arr[i] == -1){
            count_minus_1++;
        }
    }
    if ( count_minus_1 > n/2){
        operations = count_minus_1 -n/2;
        count_minus_1 -= operations;
    }
    if (count_minus_1%2==1){
        operations++;
        count_minus_1 -= 1;
    }
    cout<<operations<<endl;

}



return 0;    
}