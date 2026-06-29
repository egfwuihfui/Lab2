#include <iostream>
using namespace std;

int main()
{
    int age;
    double height;

    cout << "Please enter your age: " << endl;
    cin >> age;
    cout << "Please enter your height in m: " << endl;
    cin >> height;
    cout << "Your age: " << age << endl;
    cout << "Your height: " << height << endl;

    if (age < 10) {
        cout << "You are too young to participate!" << endl;
    }
    else if (age > 65){
        cout << "You've exceed the age limit." << endl;
    }
    else if (height < 1.00){
        cout << "You are not tall enough to participate!" << endl;
    }
    else if (height > 2.10){
        cout << "You are too tall to participate!" << endl;
    }
    else {
        cout << "You are eligible to participate!" << endl;
    }

    return 0;
}
