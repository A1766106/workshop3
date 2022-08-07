#include <iostream>

using namespace std;

int main(){

int *ptr;
int a;
a = 8;
ptr = &a;

cout << "Pointer address is " << ptr << endl;
cout << "Pointer value is " << *ptr << endl;

(*ptr)++; // incrementing up by one

cout << "Increasing the pointer value by one results in the address being " << ptr << endl;
cout << "And the value being " << *ptr << endl;
cout << "And the address of the pointer pointing at a is " << &ptr << endl;
cout<<"The address of x is in decimal "<<reinterpret_cast<uintptr_t>(ptr)<<endl;
////////////////////////////////// SUS THE LINE ABOVE //////////////////////////////////
}

