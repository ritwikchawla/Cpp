#include <iostream>
#include <string>
using namespace std;

class Binary{
    public:
    string s;

    void read(){
        cin >> s;
    }
    void check(){
        for (int i = 0; i < s.length(); i++)
        {
            if(s.at(i) != '0' || s.at(i) != '1'){
                cout << "Incorrect binary format" << endl;
                exit(0);
            }
        }
    }
    void display(){
        cout << s << endl ;
    }
    void ones_compliment(){
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i) == '0'){
                s.at(i) == '1';
            }
            else{
                s.a
            }
        }
        
    }


};

int main()
{
    
    return 0;
}
