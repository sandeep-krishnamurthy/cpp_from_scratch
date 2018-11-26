#include <iostream>
#include <vector>
#include <string>

using namespace std;

short read_short()
{
    short input;
    while (true)
    {
        cin >> input;
        if (cin.fail()) 
        {
            cout << "ERROR: Invalid input!\n";
            cin.clear();
            cin.ignore(32767, '\n'); 
        } else {
            cin.ignore(32767, '\n');
            break;
        }
    }
    return input;
}

short read_float()
{
    float input;
    
    while (true)
    {
        cin >> input;
        if (cin.fail()) 
        {
            cout << "ERROR: Invalid input!\n";
            cin.clear();
            cin.ignore(32767, '\n'); 
        } else {
            cin.ignore(32767, '\n');
            break;
        }
    }
    return input;
}

string read_string()
{
    string input;

    while (true)
    {
        getline(cin, input);
        if (cin.fail())
        {
            cout << "ERROR: Invalid input!\n";
            cin.clear();
        } else if (input.length() <= 0) {
            cout << "ERROR: Invalid input!\n";
        } else {
            break;
        }
    }
    return input;
}

struct student {
    string name;
    float grade;
};

void print_student_record(const vector<student> &student_list)
{
    for(const student &stu : student_list) {
        cout << "\n Name - " << stu.name;
        cout << "\n Grade - " << stu.grade;
        cout << "\n-------------------------";
    }
}

int main()
{
    cout << "******** STUDENT RECORD MANAGEMENT **********\n";
    
    // 1. Get number of students
    cout << "Enter number of students in the class - ";
    short student_count = read_short();

    // 2. Create students record
    vector<student> student_record;

    for (auto i=0; i<student_count; i++)
    {
        cout << "\nEnter student - " << i+1 << " name - ";
        student cur_student;
        cur_student.name = read_string();

        cout << "\nEnter student - " << i+1 << " grade - ";
        cur_student.grade = read_float();

        student_record.push_back(cur_student);
    }

    // 3. Print student record
    cout << "\nSTUDENT RECORD";
    print_student_record(student_record);
}