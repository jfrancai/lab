#include <iostream>
using namespace std;

class Dummy {
	public:
		static int n;
		Dummy () { n++; }; // This is a default constructor
};

int	Dummy::n=0;

int	main () {
	Dummy a;

	cout << a.n << '\n'; // We can access static members from an instance of a class

	Dummy b[4]; // 4 Dummy in a tab
	cout << Dummy::n << '\n'; // ...or via the class itself
	return 0;
}
