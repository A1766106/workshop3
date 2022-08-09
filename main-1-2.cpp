#include <iostream>
#include <string>

using namespace std;


extern void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents);

string courses[4] = {"Maths", "Science", "English", "Geology"};
int nstudents;
string students;


int main()
{
    cout << "How many students do you wish to enter? ";
    cin >> nstudents;
    string students[nstudents];
    for(int i=0; i<nstudents; i++)
    {
        cout << "Please enter the name of one of the students: ";
        // cin.ignore(1,'\n');
        // getline(cin,students[i]);
        cin >> students[i];
        cout << endl;
    }

    int report_card[nstudents][4];
    for(int j=0; j<nstudents; j++)
    {
        for(int p=0; p<4; p++)
        {
            cout << "Please enter the grade of " << students[j] << " for " << courses[p] << endl;
            cin >> report_card[j][p];
        }
    }
    print_class(courses, students, report_card, nstudents);

    return 0;

}