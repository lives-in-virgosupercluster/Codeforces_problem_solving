#include <bits/stdc++.h>
#define ll long long int
const long long mod=1e9+7;
//#define max 10e8+7


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
//int pow=1;
ll sum=6;
ll pow=16;
while(--t){
    sum=(sum*pow)%mod;
    pow=(pow*pow)%mod;

}
//num*=(ll)(pow(4,totalnodes)+0.5);
//num=num%mod;
cout<<sum<<endl;
return 0;
}