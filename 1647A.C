#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    if(n<=2){
        cout<<n<<endl;
    }
    else{
        int type=2;
        int sum=0;
        if(n%3==0 || n%3==2){
        while(sum!=n){
        
            cout<<type;
            sum+=type;
            type=3-type;
            


        
        }
        }
        else{
            type=1;
            while(sum!=n){
                cout<<type;
                sum+=type;
                type=3-type;

            }

        }
        cout<<endl;
    }
}
return 0;
}