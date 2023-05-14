#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Kids
{
public:
    string name;
    int age;
    bool gender;
    Kids(string s,int a, bool g){
        name = s;
        age = a ;
        gender =  g ;
    }
    ~Kids(){
        cout << "Inside destructor"<<endl;
    }
    void printing(){
        cout << "I am a base class function." << endl;
    }
    Kids()
    {
        cout << "Default base class constructor" << endl;
    }  
    void set(string name,int age,bool gender);
};


class Boys : public Kids{
    public:
    Boys(){
        cout << "Boys default constructor." << endl;
    }
    Boys(string x,int y,bool z){
        name = x;
        age = y;
        gender = z;
    }
    ~Boys(){
        cout << "Inside inhereted class destructor"<<endl;
    }
};

int main()
{
    Kids a("Jimmy",10,0);
    Boys b("Tim",11,0);
    cout << a.name << endl << b.name << endl;
    a.printing();
    b.printing();
    return 0;
}