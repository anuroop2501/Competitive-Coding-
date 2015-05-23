#include <iostream>
using namespace std;
void writeBackward(string s, int size) // function definition
{ //opening brace
if ( size > 0)
{ // opening brace for the condi
cout<<s.substr((size-1), 1); //display the last chracter
writeBackward(s, (size-1)); //display remaining characters
} //end if
}
int main()
{
writeBackward("Hello", 5);
return 0;
}
