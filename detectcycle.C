#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"


using namespace std;

class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };
  bool detectAndRemoveCycle(Node* head)
{
Node *slow=head;
Node *fast=head;
int count=1;
slow=slow->next;
fast=fast->next;
fast=fast->next;
while(slow!=fast || slow!=NULL){
    if(slow==NULL){
        return false;
    }
    else{
        slow=slow->next;
        fast=fast->next;
        fast=fast->next;
    }
    count++;

}
int j=1;
Node *temp=head;
while(j!=count){
    temp=temp->next;

}
temp=temp->next;
return true;
    // Write your code here
}      

int main(){
 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int t;
cin>>t;
while(t--){

}
}