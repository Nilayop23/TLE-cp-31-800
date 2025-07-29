#include<iostream>
#include<vector>
using namespace std;
int main (){
int t ; cin>> t;
while(t--){
int n ; cin>> n;
vector<int>arr(n);;
int count_2 =0;
for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
    
    if(arr[i]==2){
        count_2++;
    }
}
if(count_2==0){
    cout<<1<<endl;
}
else{
    int count_left = 0;
    int count_right = count_2;
    int ans = -1;
    for (int i = 0 ; i< n ; i++)
    {
        if (arr[i]==2){
            count_left++;
            count_right = count_2 - count_left;
        }
        if (count_left == count_right){
            ans = i+1;
            break;
        }
    }

    cout << ans << endl;
} 
}
return 0;
}