#include<iostream>

using namespace std;

int main()
{
double a[][5] = { {11, 12, 13, 14, 15},
{21, 22, 23, 24, 25},
{31, 32, 33, 34, 35}};
double *p = &a[0][0];

/* display array */
cout<<"Array elements are: "<<endl;
for(int i=0; i<3; i++)
{
for(int j=0; j<5; j++)
{
cout<<" "<<*p++;
}
cout<<endl;
}

return 0;
}