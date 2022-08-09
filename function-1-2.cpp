#include <iostream>
#include <string>

using namespace std;

void print_class(std::string courses[4], std::string students[], int report_card[][4], int nstudents)
{
    cout << "Report Card ";
    for(int i=0; i<4; i++)
    {
        if(i!=3)
        {
            cout << courses[i] << " "; 
        }
        else
        {
            cout << courses[i] << endl;
        }
        
    }

    for(int j=0; j<nstudents; j++)
    {
        cout << students[j] << " ";
        for(int p=0; p<4; p++)
        {
            if(p != 3) 
            {
                cout << report_card[j][p] << " ";

            }
            else
            {
                cout << report_card[j][p] << endl;
            }
        }
        // cout << report_card[j][3];
        // cout << endl;
        
    }
}
