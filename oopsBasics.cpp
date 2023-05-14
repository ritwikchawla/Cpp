#include <iostream>
using namespace std;

class HumanBeing{
    public:
    int age,standard;
    string firstname,lastname;

    void setDetails();
    void getDetails();
};

void HumanBeing :: setDetails(){
    cin >> age;
    cin >> firstname;
    cin >> lastname;
    cin >> standard;
}

void HumanBeing :: getDetails(){
    cout << age  << endl;
    cout << lastname<<", " << firstname<< endl;
    cout << standard << endl;
    cout << endl;
    cout << age<<","<<firstname<<","<<lastname<<","<<standard<<","<<endl;
}

int main()
{
    /* code */
    HumanBeing b1;
    b1.setDetails();
    b1.getDetails();
    return 0;
}
                 