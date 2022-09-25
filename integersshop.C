#include<bits/stdc++.h>
#define ll long long int 

using namespace std;
ll min(ll a,ll b){
    if(a<b)
    return a;
    return b;
}
ll max(ll a,ll b){
    if(a>b)
    return a;
    return b;
}
int main(){
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        vector<ll>l,r,c;
        ll x,y,z;
        vector<ll>dpcost(n,0);
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x>>y>>z;
            l.push_back(x);
            r.push_back(y);
            c.push_back(z);
            
        }
       
        dpcost[0]=c[0];
       
       ll  minleft=10e9;
       ll maxright=-1;
       maxright=r[0];
       minleft=l[0];
       ll range=r[0]-l[0]+1;
       ll mini=0;
       ll maxr=0;

        for(int i=1;i<n;i++){
           ll tempmax=maxright;
           ll templeft=minleft;
            maxright=max(maxright,r[i]);
            minleft=min(minleft,l[i]);
            if(maxright==tempmax && minleft==templeft){
                if(l[mini]==l[i]){
                    if(c[i]<=c[mini]){
                         if(maxr==mini){
                            
                            dpcost[i]=dpcost[i-1];
                        }
                        else{
                        dpcost[i]=dpcost[i-1]-c[mini]+c[i];
                       
                        mini=i;
                        }
                       
                    }
                }
                else if(r[maxr]==r[i]){
                    if(c[i]<=c[maxr]){
                        if(mini==maxr){
                           
                            dpcost[i]=dpcost[i-1];
                        }
                        else{
                        dpcost[i]=dpcost[i-1]+c[i]-c[maxr];
                        maxr=i;
                        }
                        
                    }
                }
            }
            else if(maxright>tempmax || minleft<templeft){
                dpcost[i]=dpcost[i-1]+c[i];
                if(maxright>tempmax && minleft<templeft ){
                    maxr=i;
                    mini=i;
                    dpcost[i]=c[i];
                }
                else if(minleft<templeft){
                    if(r[i]>=r[maxr]){
                        dpcost[i]=c[i];
                        maxr=i;
                        mini=i;
                    }
                    else{
                    if(maxr==mini){
                        mini=i;
                    }
                    else{
                        dpcost[i]=dpcost[i-1]+c[i]-c[mini];
                        mini=i;
                    }
                    }
                
                }
                else if(maxright>tempmax){
                    if(l[i]<=l[mini]){
                        dpcost[i]=c[i];
                        mini=i;
                        maxr=i;
                    }
                    else{
                    if(maxr==mini){

                    maxr=i;
                    }
                    else{
                        dpcost[i]=dpcost[i-1]+c[i]-c[maxr];
                        maxr=i;
                    }
                    }
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