#include <cmath>
#include <iostream>
using namespace std;
string name;
int age;

void Ninja()
{
string thug;
thug = name.substr(2,4);
int thugage = pow(age,2);
cout << "Your thug name is " << thug << thugage << endl; 
}

int main()
{
    cout << "Welcome to " << "What's your Thug name ?" << endl;
    cout << "Enter your full name and age !" << endl;

    getline(cin,name);
    cin >> age;

    Ninja();

    return 0;


}
