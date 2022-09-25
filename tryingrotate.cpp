#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
vector<int>v(n,0);
for (int i = 0; i < n; i++)
{
    v[i]=i+1;
}
rotate(v.begin(),v.begin()+1,v.begin()+2);
for (int  i = 0; i < n; i++)
{
    cout<<v[i]<<" ";
}


return 0;
}