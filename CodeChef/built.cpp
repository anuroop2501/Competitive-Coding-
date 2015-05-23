#include <iostream>

#include <algorithm>



using namespace std;



int main(int argc, char *argv[])

{



  	int a[] = { 5, 6, 7, 3, 1, 7 };



  	cout << * max_element( a, a + 6 ) << endl;

	cout << * min_element( a, a + 6 ) << endl;



	return 0;

}
