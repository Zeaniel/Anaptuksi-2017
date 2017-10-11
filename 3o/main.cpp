#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include "Functions.h"
#include "linked_list_of_curves.h"
//#include "hash_table.h"
#include "open_file.h"
#define D 25

using namespace std;
//Linked_List_C* load_list_with_curves(string ,Linked_List_C* );

int main(int argc, const char *argv[]) {
	int k = 4, L = 5, index;			   		// arxikopoihsh tou K kai tou L
	string d, q, o;							// strings gia apothikeush paths
	string str ;							// string gia apothikeush twn suntetagmenwn	
  
	for (index = 1; index < argc; index++) {              		// tsekarei na dei poia parametro dinei o xrhsths mesw terminal kai thn
                                                              		// apothikeuei sthn katallhlh metavlhth
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

	if (d.empty()){							// tsekarei ama o xrhsths exei dwsei to path gia to dataset mesw 										// terminal

		cout << "give the path for your dataset file" << endl;	// an den thn dwsei thn zhtaei apo to xrhsth
		d = ReadLine();
	}

	if (q.empty()){							// tsekarei ama o xrhsths exei dwsei to path gia ta queries mesw 										// terminal

		cout << "give the path for your queries file" << endl;
		q = ReadLine();
	}

	if (o.empty()){							// tsekarei ama o xrhsths exei dwsei to path gia to output mesw
									// terminal

		cout << "give the path for your output 2 file" << endl;
		o = ReadLine();
	}


	Linked_List_C* list = new Linked_List_C();			//dhmiourgia listas apo ton default constructor
	//cout << d ;
	load_list_with_curves("",list);
//	ifstream set(d.c_str(),ios::in);					//auto to arxeio anoigw
//	ifstream set("dataset0");

//	hash*  table = new hash(10);
//        table->print();
//	table->destroy_hash_table();
//	table->print();
	return 0 ;
}



