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
    string s;
    cin>>s;
    string abc="abcdefghijklmnopqrstuvwxyz";
    vector<int>v(126,1e9);
    int i=0;
    int j=n-1;
    for(int k=0;k<abc.length();k++){
        int count=0;
        int flag=0;
        while(i<j){
            if(s[i]!=s[j]){
                if(s[i]!=abc[k]&& s[j]!=abc[k]){
                    flag=1;
                    break;
                }
                else{
                    if(s[i]==abc[k]){
                        while(s[i]==abc[k]){
                        i++;
                        count++;
                        }
                        if(s[i]==s[j]){
                            i++;
                            j--;
                        }
                        else{
                            flag=1;
                            break;
                        }
                    }
                    else if(s[j]=abc[k]){
                        while(s[j]==abc[k]){
                            count++;
                            j--;
                        }
                        if(s[j]==s[i]){
                            i++;
                            j--;
                        }
                        else{
                            flag=1;
                            break;
                        }
                    }
                }
            }
            else{
                i++;
                j--;
            }
        }
        if(!flag){
            v[abc[k]]=count;
            //cout<<abc[k]<<endl;
            //cout<<count<<endl;

        }
        i=0;
        j=n-1;
        
    }
    int min=1e9;
    for(int i=0;i<v.size();i++){
        if(min>v[i]){
            min=v[i];
        }

    }
    if(min==1e9){
        cout<<-1<<endl;
    }
    else{
    cout<<min<<endl;
    }
}
return 0;
}