#include <iostream> 
using namespace std; 

enum week { Mon, 
			Tue, 
			Wed, 
			Thur, 
			Fri, 
			Sat, 
			Sun }; 

int main() 
{ 
	enum week day; 

	day = Wed; 

	cout << day; 

	return 0; 
} 
