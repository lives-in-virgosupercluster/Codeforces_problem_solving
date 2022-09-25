#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        ll a, b, c;
        cin >> a >> b >> c;
        ll x = ceil((double)a / 2);
        ll g=x/b;
        
        ll need=g*(b+c);
        //cout<<need<<endl;
        if(x%b==0){
            need-=c;
        }
        else{
            need+=x%b;
        }
        cout<<max(a,need)<<endl;
        //cout<<x<<endl;
    }
        
    return 0;
}