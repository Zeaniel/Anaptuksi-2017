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

void Concantanate(vector< vector <double>> dest, vector< vector <double>> src){

 	dest.insert(
      		dest.end(),
      		make_move_iterator(src.begin()),
     		make_move_iterator(src.end())
    	);

}
