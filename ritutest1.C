#include <bits/stdc++.h>
using namespace std;
class height{
    private:
    int feet;
    int inch;
    //string name;
    
    public:
    height(){}
    height(int f,int i){
        feet=f;
        inch=i;
        //name=a;
    }
    bool operator <=(height a){
        //cout<<feet<<endl;
        //cout<<a.feet<<endl;
        if(feet==a.feet){
            if(inch<=a.inch){
                //cout<<name<<" is equal to or shorter than"<<a.name<<endl;
                return true;
            }
            else{
                return false;
            }
        }
        else if(feet<a.feet){
            return true;
        }
        else{
            //cout<<name<<"is taller than "<<a.name<<endl;
            return false;
        }
    }
};


//using namespace std;

int main(){
int h1,i1;
//string name1;
cin>>h1>>i1;
int h2,i2;
//string name2;
cin>>h2>>i2;
height A= height(h1,i1);
height B=height(h2,i2);
if(A<=B){
cout<<"person A is shorter than or equal to person B"<<endl;
}
else{
    cout<<"Person A is taller than B";
}
 
return 0;
}