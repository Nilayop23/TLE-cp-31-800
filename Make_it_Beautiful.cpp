#include<iostream>
#include<set>
using namespace std;

int  check_problem( int *& arr , int n ,int index ){
    if (index == 0 ){
    return -1;}
    else{
        int sum = 0;
        for (int i = 1 ; i <=  index ; i++){
        sum += arr[i-1];
        if(arr[i] == sum){
            
            return i ;
        }
        }
        return -1;
    }    
}

int main (){
int t ; cin>> t;
while(t--){
 int n ; cin>> n;
 int *arr = new int [n];
 for (int i  = 0 ; i < n ; i++){
    cin>>arr[i];
}


 
int index = -1;
int temp = check_problem(arr, n, n - 1); // Check full array
if (temp != -1){
    if (temp < n - 1) {
        swap(arr[temp], arr[temp + 1]);
        if (check_problem(arr, n, n - 1) != -1) {
            swap(arr[temp], arr[temp + 1]); // revert
            if (temp > 0) swap(arr[temp], arr[temp - 1]);
        }
    }
    else if (temp > 0) {
        swap(arr[temp], arr[temp - 1]);
    }
}

int sum2 = 0 ;
bool b = 1;
 for (int i = 1 ; i < n ; i++){
    sum2  += arr[i-1];
    if(arr[i] == sum2){
       b =0 ;
       break;
    }
 }
    set<int> s;
    for (int i = 0; i < n; i++) {
        s.insert(arr[i]);
    } 
if(s.size()==1){
    cout<<"No";
}
else if (b == 1){
 cout<<"Yes"<<endl;
 for (int i  = 0 ; i < n ; i++){
    cout<<arr[i]<<" ";
    }
}
else{
    cout<<"No";
}
cout<<endl;
}

return 0;    
}