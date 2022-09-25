#include <bits/stdc++.h>
#define ll unsigned long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    ll j=n;
    ll pow=1;
    ll sum=0;
    ll flag=1;
    while(n){
        if(flag){
        sum+=pow*1;
       
        pow=pow*10;
        
        flag=0;
        n=n-1;
        }
        
        else{
            sum+=pow*2;
            pow=pow*10;
            flag=1;
            
            n=n-2;
            if(n<0){
                //break;
                sum=0;
                break;
            }
            
        }
           
        }
       // pow=pow*10;

        


    
    ll sum1=0;
    flag=1;
    pow=1;
    
    while(j){
        if(flag){
        sum1+=pow*2;
        
        pow=pow*10;
        
        flag=0;
        j=j-2;
        if(j<0){
            sum1=0;
            break;
            

        }
        }
        
        else{
            sum1+=pow*1;
            if(j<0){
            sum1=0;
            break;
        }
           pow=pow*10;
            flag=1;
            j=j-1;
        }

    }
    if(sum1>sum)
    cout<<sum1<<endl;
    else
    cout<<sum<<endl;
}



return 0;
}