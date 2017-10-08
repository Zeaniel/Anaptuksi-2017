#include "Functions.h"


string ReadLine(){

	string line, a;

	do {

		getline(cin,line);	
    		a += line + '\n';	//apothikeush string apo ton xrhsth se mia metavlhth

  	} while (!line.empty());
		
	//line.clear();

	return 	a;			//epistrofh metavlhths

}
