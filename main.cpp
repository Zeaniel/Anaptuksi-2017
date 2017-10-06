#include <iostream>
#include <string>
#include "Functions.hpp"

using namespace std;


int main(int argc, const char *argv[]) {
	int k = 4, L = 5, index;
	string d, q, o;
    
	for (index = 1; index < argc; index++) {

		if (strcmp(argv[index], "-d") == 0) {
			d = string(argv[index+1]);
        	}
        	else if (strcmp(argv[index], "-q") == 0) {
            		q = string(argv[index+1]);
        	}
        	else if (strcmp(argv[index], "-k") == 0) {
            		k = atoi(argv[index+1]);
        	}
        	else if (strcmp(argv[index], "-L") == 0) {
            		L = atoi(argv[index+1]);
        	}
        	else if (strcmp(argv[index], "-o") == 0) {
            		o = string(argv[index+1]);
        	}
    	}

	if (d.empty()){

		cout << "give the path for your dataset file" << endl;
		d = ReadLine();
	}

	if (q.empty()){

		cout << "give the path for your queries file" << endl;
		q = ReadLine();
	}

	if (o.empty()){

		cout << "give the path for your output 2 file" << endl;
		o = ReadLine();
	}



