#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//this is a single line comment
/*this is a mutli line comment 
  .
  .
  .
  */
int add(int num1, int num2);

typedef struct employee
{
  string name;
  int epId;
  float salary;
} em;

union customer
{
  string name;
  int cus_num;
  float balance;
};

int main()
{

  cout << "Hello World!" << endl; //-------------------------Variables and comments-------------------------------------------
  const int a = 2147483647;       // constant variable
  char b = 'b';
  float c = 234.1345;
  bool d = true;
  long long e = 12345678910;
  double f = 123456789.123456789000000000000;
  string g = "\t C++ Master \t";
  wchar_t h = L'a';

  cout << a << "\n"
       << h << "\n"
       << d << endl;

  int x = 453; //---------------------------------Refrence Variables and Typecasting------------------------------------------
  int &y = x;  // y is a refrence variable
  cout << y << " " << x << endl;
  cout << int(c) << endl;

  // if (true)
  // {
  //   for (int i = 0;i>-1; i++){
  //     cout << a << endl;
  //   }
  // }
  // else
  // {
  //   cout << b << endl;
  // }
  cout << add(2, 3) << endl;

  em e1; //------------------------------------Structures Unions and Enums----------------------------------------
  struct employee e2;
  e1.name = "Jim";
  e1.epId = 001;
  e1.salary = 250000000000;
  cout << e1.name << endl
       << e1.epId << endl
       << e1.salary << endl;

  //union customer cos;
  //cos.name = "Frank";
  // c1.cus_num = 786;
  // c1.balance = 20.007;

  //cout << cos.name << endl;

  int var = 10;        //---------------------------------Pointers---------------------------------------------
  int *var_add = &var; // &   --- > ( Address of ) Ampercent operator
  cout << var_add << endl
       << &var << endl
       << *var_add << endl; // *   --- > (Value at ) Derefrence operator

  
  //------------------ switch case ---------------------------------
  char op;
  float num1, num2;

  cout << "Enter operator: +, -, *, /: ";
  cin >> op;

  cout << "Enter two operands: ";
  cin >> num1 >> num2;

  switch (op)
  {
  case '+':
    cout << num1 << " + " << num2 << " = " << num1 + num2;
    break;

  case '-':
    cout << num1 << " - " << num2 << " = " << num1 - num2;
    break;

  case '*':
    cout << num1 << " * " << num2 << " = " << num1 * num2;
    break;

  case '/':
    cout << num1 << " / " << num2 << " = " << num1 / num2;
    break;

  default:
    // If the operator is other than +, -, * or /, error message is shown
    cout << "Error! operator is not correct";
    break;
  }
  return 0;
}

int add(int num1, int num2)
{
  int sum = num1 + num2;
  return sum;
}
