#include<bits/stdc++.h>
using namespace std;
#define ll long long int 


int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> l(n,0);
        vector<ll> r(n,0);
        vector<ll>c(n,0);
        vector<ll>dpcost(n,0);
        for(int i=0;i<n;i++){
            cin>>l[i]>>r[i]>>c[i];
        }
        ll mini=0,maxr=0;
        ll minl=l[0];
        ll maxrig=r[0];
        ll tempmax=0;
        ll tempmin=0;
        dpcost[0]=c[0];
        for(int i=1;i<n;i++){
            if(minl>l[i] && maxrig<r[i]){
                dpcost[i]=c[i];
                mini=i;
                maxr=i;
                maxrig=r[i];
                minl=l[i];
            }
            else if(minl<l[i] && maxrig<r[i]){
                if(mini!=maxr){
                dpcost[i]=dpcost[i-1]+c[i]-c[maxr];
                maxrig=r[i];
                maxr=i;
                }
                else{
                    dpcost[i]=dpcost[i-1]+c[i];
                     maxrig=r[i];
                maxr=i;
                    
                }

            }
            else if(minl==l[i] && maxrig==r[i]){
                if(mini==maxr){
                    if(c[i]<c[maxr]){
                        dpcost[i]=c[i];
                        maxr=i;
                        maxrig=r[i];
                        mini=i;
                        minl=l[i];
                    }
                    else{
                        dpcost[i]=dpcost[i-1];
                    }
                }
                else{
                    if(c[maxr]+c[mini]>c[i]){
                        dpcost[i]=c[i];
                        mini=i;
                        maxr=i;
                        maxrig=r[i];
                        minl=l[i];
                    }
                    else{
                        dpcost[i]=dpcost[i-1];
                    }
                }
            }
            else if(minl>l[i] && maxrig<r[i]){
                if(mini==maxr){
                dpcost[i]=dpcost[i-1]+c[i];
                minl=l[i];
                mini=i;
                }
                else{
                    dpcost[i]=dpcost[i-1]+c[i]-c[mini];
                    minl=l[i];
                    mini=i;
                }

            }
            else if(minl>l[i] && maxrig==r[i]){
                dpcost[i]=c[i];
                mini=i;
                minl=l[i];
                maxrig=r[i];
                maxr=i;
            }
            else if(minl==l[i] && maxrig<r[i]){
                dpcost[i]=c[i];
                mini=i;
                minl=l[i];
                maxrig=r[i];
                maxr=i;


            }
            else if(minl<l[i] && maxrig==r[i]){
                if(mini!=maxr){
                    if(c[maxr]>c[i]){
                        dpcost[i]=dpcost[i-1]-c[maxr]+c[i];
                        maxr=i;
                        maxrig=r[i];
                    }
                    else{
                        dpcost[i]=dpcost[i-1];
                    }
                }
                else{
                    dpcost[i]=dpcost[i-1];
                }
            }
            else if(minl==l[i] && maxrig>r[i]){
                if(mini!=maxr){
                    if(c[mini]>c[i]){
                        dpcost[i]=dpcost[i-1]-c[mini]+c[i];
                        minl=l[i];
                        mini=i;
                    }
                    else{
                        dpcost[i]=dpcost[i-1];
                    }
                }
                else{
                    dpcost[i]=dpcost[i-1];
                }
            }
            else{
                dpcost[i]=dpcost[i-1];
            }

        }
        for(int i=0;i<n;i++){
            cout<<dpcost[i]<<"\n";
        }
        
    }
    return 0;
}