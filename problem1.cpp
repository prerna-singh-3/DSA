// WRITE A PROGRAM TAHT TAKES AN INPUT OF AGE AND PRINTS IF YOU ARE ADULT OR NOT

#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are an adult!";
    }
    else
    {
        cout << "You are not an adult.";
    }
    return 0;
}