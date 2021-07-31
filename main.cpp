#include <iostream>
#include "hello.h"

using namespace std;

void test1(void);
void test2(void);
void test3(void);

int x = 1;

int main()
{
    int x = 5;
    hello
    cout<<"The x in main block is "<<x<<'\n';
    cout<<"The x in global scope is "<<::x;
    cout<<'\n';
    cout<<"The 1st run begins.\n";
    // name conflict occurs
    // Whenever there is a local variable defined with same name as that of a global variable then the compiler will give precedence to the local variable.
    test1();
    test2();
    test3();
    x = x + 20;
    cout<<"The 1st run closed.\n";
    cout<<"The x in main block is "<<x<<'\n';
    cout<<"The x in global scope is "<<::x;
    cout<<'\n';
    cout<<"The 2nd run begins.\n";
    cout<<"The x in main block is "<<x<<'\n';
    cout<<"The x in global scope is "<<::x;
    cout<<'\n';
    test1();
    test2();
    test3();
    x = x + 20;
    cout<<"The 2nd run closed.\n";
    cout<<"The x in main block is "<<x<<'\n';
    cout<<"The x in global scope is "<<::x;
    cout<<'\n';
    cout<<"The 3rd run begins.\n";
    cout<<"The x in main block is "<<x<<'\n';
    cout<<"The x in global scope is "<<::x;
    cout<<'\n';
    test1();
    test2();
    test3();
    x = x + 20;
    cout<<"\nThe 3rd run closed.\n";
    cout<<"The x in main block is "<<x<<'\n';
    cout<<"The x in global scope is "<<::x;
    cout<<'\n';

    cout<<"The 4th run begins.\n";
    cout<<"The x in main block is "<<x<<'\n';
    cout<<"The x in global scope is "<<::x;
    cout<<'\n';
    test1();
    test2();
    test3();
    x = x + 20;
    // Whenever there is a local variable defined with same name as that of a global variable then the compiler will give precedence to the local variable.
    cout<<"The 4th run closed.\n";
    cout<<"The x in main block is "<<x<<'\n';
    cout<<"The x in global scope is "<<::x;
    return 0;
}


void test1(void)
    {
        static int x = 50;
        cout<<"The x in test1 is  "<<x<<" (on entering test1 block)\n";
        x = x+20;
        cout<<"The x in test1 is "<<x<<" (on exiting test1 block)\n";
    }

void test2(void)
    {
        int x = 50;
        cout<<"The x in test2 is "<<x<<" (on entering test2 block)\n";
        x = x+20;
        cout<<"The x in test2 is "<<x<<" (on exiting test2 block)\n";
    }

void test3(void)
{
    cout<<"The x in test3 is "<<x<<" (on entering test3 block)\n";
    x = x + 20;
    // no name conflict occurs
    // global variables can be accessed from any portion of the program.
    cout<<"The x in test3 is "<<x<<" (on exiting test3 block)\n";
}


// Conclusions:
// When no name conflict occurs, global variables can be accessed from any portion of the program.
// When name conflict occurs, the compiler will give precedence to the local variable.

