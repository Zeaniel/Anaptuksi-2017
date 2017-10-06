#include <iostream>
#include <string>
#include "Functions.hpp"

using namespace std;

string ReadLine(){

	string line, a;

	do {

		getline(cin,line);
    		a += line + '\n';

  	} while (!line.empty());
		
	line.clear();

	return 	a;

}
