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

int main()
{
	cout << "Hello CMake." << endl;
  foo(2,3);
	S s;
	S *ps=new S;
	delete ps;
	cout<<ps->i<<endl;
	cout<< s.i << endl;
	return 0;
}
