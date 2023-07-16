// windowsCodeAnalysis.cpp : Defines the entry point for the application.
//

#include "windowsCodeAnalysis.h"

using namespace std;

int foo(int a, int b)
{
	return 3;
}

int main()
{
	cout << "Hello CMake." << endl;
  foo(2,3);
	return 0;
}
