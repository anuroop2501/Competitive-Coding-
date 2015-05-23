#include <algorithm>
#include <iostream>
#include <list>
#include <string>
//#include <utility>

using namespace std;

void print_message( const pair<int,string>& message );

int main( )
{
   list< pair< int, string > > message;
   message.push_back( make_pair( 1, "A" ) );
   message.push_back( make_pair( 2, "B" ) );
   message.push_back( make_pair( 3, "C" ) );

   for_each( message.begin(), message.end(), print_message );
   message.sort();
   for_each( message.begin(), message.end(), print_message );
}
void print_message( const pair<int,string>& message ){
   cout << message.first << " - " << message.second << endl;
}
