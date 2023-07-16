// windowsCodeAnalysis.cpp : Defines the entry point for the application.
//

#include "windowsCodeAnalysis.h"

using namespace std;

int foo(int a, int b)
{
	return 3;
}

struct S {
	int i ;
};
string* bad()   // really bad
{
    vector<string> v = { "This", "will", "cause", "trouble", "!" };
    // leaking a pointer into a destroyed member of a destroyed object (v)
    return &v[0];
}

void use()
{
    string* p = bad();
    vector<int> xx = {7, 8, 9};
    // undefined behavior: x might not be the string "This"
    string x = *p;
    // undefined behavior: we don't know what (if anything) is allocated a location p
    *p = "Evil!";
}

int main()
{
	use();
	cout << "Hello CMake." << endl;
  foo(2,3);
	S s;
	S *ps=new S;
	delete ps;
	cout<<ps->i<<endl;
	cout<< s.i << endl;
	return 0;
}
