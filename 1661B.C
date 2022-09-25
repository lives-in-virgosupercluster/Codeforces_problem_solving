#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int n;
cin>>n;
vector<int>v;
int x;
for(int i=0;i<n;i++){
    cin>>x;
    v.push_back(x);
}
int min=19;
for(int i=0;i<n;i++){
for(int countadd=0;countadd<=15;countadd++){
    for(int countmul=0;countmul<=15;countmul++){
        if(((v[i]+countadd)*(int)(pow(2,countmul)+0.5))%32768==0){
            if(min>countadd+countmul){
                min=countadd+countmul;
            }

        }

    }
}
cout<<min<<endl;
min=19;
}



return 0;
}