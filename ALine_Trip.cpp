#include<iostream>
#include<vector>
using namespace std;
int main (){
int T; cin>>T;
while(T--){
int n ; int x;
cin>>n>>x;
vector<int>gas_stations(n);
for (int i = 0 ; i < n ; i++){
    cin>>gas_stations[i];
}
//now i am at zero
int max_fuel = gas_stations[0];

if (n==1){
    max_fuel= max(gas_stations[0] , (x-gas_stations[0])*2);
}
else{
for(int i = 1; i < n ; i++){
    int fuel = gas_stations[i] - gas_stations[i-1];
    max_fuel = max(fuel , max_fuel);

    if (i == n-1 ){
        max_fuel = max((x-gas_stations[i])*2,max_fuel);
    }
}
}
cout<<max_fuel<<endl;
}
return 0;
}