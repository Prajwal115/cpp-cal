#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
cout << "Calculator with Two numbers" << endl;
double a;
double b;


char operate;

cout << "Choose the operator you want to use, + - * /" << endl;
cin >> operate;
double output;
if(operate == '+'){
    cout << "Enter the first number" << endl;
    cin >>a;
    cout << "Enter the second number" << endl;
    cin >>b;
output = a+b;
    cout << "The sum of " << a << " and " << b << " is: " << output << endl;
}


if(operate == '-'){
    cout << "Enter the first number" << endl;
    cin >>a;
    cout << "Enter the second number" << endl;
    cin >>b;
output = a-b;
    cout << "The difference of " << a << " and " << b << " is: " << output << endl;
}

if(operate == '*'){
    cout << "Enter the first number" << endl;
    cin >>a;
    cout << "Enter the second number" << endl;
    cin >>b;
output = a*b;
    cout << "The product of " << a << " and " << b << " is: " << output << endl;
}

if(operate == '/'){
    cout << "Enter the first number" << endl;
    cin >>a;
    cout << "Enter the second number" << endl;
    cin >>b;
    double output1 = a/b;
    cout << "The division of " << a << " and " << b << " is: " << output1 << endl;
}


}
