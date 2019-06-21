// arne-mertz.de/2017/03/constexpr-additions-c17/ 
#include <iostream>

using namespace std;

int baz() { return 4; };

template< class T >
void fcn( T&& foo )
{
	cout << foo << endl;
}

int main() 
{
	fcn( baz() );
}

