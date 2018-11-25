#include <iostream>
#include <string>

using namespace std;

/*
Take user full name and age.
Print for each letter of the age, how many years have been spent.
*/
int main()
{
    string full_name;
    int age;

    cout << "Enter your Age - ";
    cin >> age;

    // You need to ignore '\n' in the input stream before reading
    // next input
    cin.ignore(32767, '\n');

    cout << "\nEnter your full name - ";
    getline(cin, full_name);

    int length = full_name.length();

    float age_per_letter = static_cast<float>(age) / length;

    cout << "\nYour average age per letter of your name - " << age_per_letter << "\n";
}