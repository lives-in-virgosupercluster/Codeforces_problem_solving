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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string marked(n, '1');
        ll cost=0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                for (ll j = i + 1; j <= n; j += i + 1)
                {
                    if (s[j - 1] == '1')
                        break;
                    if(marked[j-1]=='0')
                    continue;
                    marked[j-1]='0';
                    cost+=i+1;
                }
            }
        }
        cout<<cost<<endl;
    }
    return 0;
}