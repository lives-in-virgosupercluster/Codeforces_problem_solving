#include <bits/stdc++.h>
using namespace std;
class Person
{
    private:
    int age;
    string name;
    public:
    void getInput()
    {
        cin >> age;
        cin >> name;
    }
    void display()
    {
        cout << age << endl;
        cout << name;
    }
};
class Faculty : public virtual Person
{
    
};
class Student : public virtual Person
{
    
};
class TA : public Faculty , public Student{
    
};
int main()
{
    TA t;
    t.getInput();
    t.display();
    return 0;
}