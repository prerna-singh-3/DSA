/*
A school has following rules for grading system:
a. Below 25 - F
b. 25 to 44 - E
c. 45 to 49 - D
d. 50 to 59 - C
e. 60 to 79 - B
f. 80 to 100 - A

Ask user to enter marks and print the corresponding grade.
*/

// Using if takes a lot of space and time as it executes every command even though the first command itself is applicable.

/*#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int marks;
    cin >> marks;
    if (marks < 25)
    {
        cout << "F";
    }
    if (marks >= 25 && marks <= 44)
    {
        cout << "E";
    }
    if (marks >= 45 && marks <= 49)
    {
        cout << "D";
    }
    if (marks >= 50 && marks <= 59)
    {
        cout << "C";
    }
    if (marks >= 60 && marks <= 79)
    {
        cout << "B";
    }
    if (marks >= 80 && marks <= 100)
    {
        cout << "A";
    }
    return 0;
}*/

// We use else-if which saves time and is a more effective approach to solve the problem

#include <iostream>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int marks;
    cin >> marks;
    if (marks < 25)
    {
        cout << "F";
    }
    else if (marks <= 44)   // we don't write the initial operation because in the first statement itself it has been mentioned which means that if the first statement is false it will automatically include that and move to the next operation and hence we don't have to re-write it!
    {
        cout << "E";
    }
    else if (marks <= 49)
    {
        cout << "D";
    }
    else if (marks <= 59)
    {
        cout << "C";
    }
    else if (marks <= 79)
    {
        cout << "B";
    }
    else if (marks <= 100)
    {
        cout << "A";
    }
    return 0;
}