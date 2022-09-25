#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"

using namespace std;

int logb(ll m, ll n, ll k)
{
    ll count = 0;
    if (m == n)
        return k;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    k++;
    return logb(m, count, k);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        priority_queue<int> a;
        priority_queue<int> b;
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push(x);
        }
        for (ll i = 0; i < n; i++)
        {
            ll y;
            cin >> y;
            b.push(y);
        }
        ll ans = 0;
        while(!a.empty()){
            if (a.top() == b.top())
            {
                a.pop();
                b.pop();
                continue;
            }
            ans++;
             if (a.top() > b.top())
            {
               // ans += logb(b.top(), a.top(), 0);
                a.push(to_string(a.top()).size());
              //  a.top();
                a.pop();
               // b.top();
            }
            else
            {
               b.push(to_string(b.top()).size());
                //a.top();
                b.pop(); 
            }
        }
        cout << ans << endl;
    }

    return 0;
}