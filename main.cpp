#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include "Functions.h"
#include "linked_list_of_curves.h"
#include "open_file.h"

#define D 25

using namespace std;


int main(int argc, const char *argv[]) {
	int k = 4, L = 5, index;			   		// arxikopoihsh tou K kai tou L
	string dataset, queries, output;				// strings gia apothikeush paths
	string str ;							// string gia apothikeush twn suntetagmenwn	
	string type_of_hash;						// eidos hashtable
	string type_of_distance;					// eidos apostashs

	//FILE *dataset=NULL;
  
	for (index = 1; index < argc; index++) {              		// tsekarei na dei poia parametro dinei o xrhsths mesw terminal kai thn
                                                              		// apothikeuei sthn katallhlh metavlhth

		if (!strcmp(argv[index], "-d")) {

			dataset = string(argv[index+1]);
			
			if(!dataset.empty()){                                          
            			cout << "dataset file ok" << endl;
        		}
       			else{
            			cout << "error dataset file" << endl;
            			return 1;
        		}
			
			
        	}
        	else if (strcmp(argv[index], "-q") == 0) {
            		queries = string(argv[index+1]);

			if(!queries.empty()){                                          
            			cout << "queries file ok" << endl;
        		}
       			else{
            			cout << "error queries file" << endl;
            			return 1;
        		}
        	}
        	else if (strcmp(argv[index], "-k") == 0) {
            		k = atoi(argv[index+1]);
        	}
        	else if (strcmp(argv[index], "-L") == 0) {
            		L = atoi(argv[index+1]);
        	}
        	else if (strcmp(argv[index], "-o") == 0) {
            		output = string(argv[index+1]);

			if(!output.empty()){                                          
            			cout << "output file ok" << endl;
        		}
       			else{
            			cout << "error output file" << endl;
            			return 1;
        		}
        	}
		else if (strcmp(argv[index], "-hash") == 0) {
            		type_of_hash = string(argv[index+1]);
        	}
		else if (strcmp(argv[index], "-function") == 0) {
            		type_of_distance = string(argv[index+1]);
        	}
    	}


	if (dataset.empty()){						// tsekarei ama o xrhsths exei dwsei to path gia to dataset mesw 										// terminal

		cout << "give the path for your dataset file" << endl;	// an den thn dwsei thn zhtaei apo to xrhsth
		dataset = ReadLine();
	}


	if (type_of_distance.empty()){					// tsekarei ama o xrhsths exei dwsei to eidos sunarthshs   										// apostashs mesw terminal

		cout << "give the type of your distance function" << endl;
		type_of_distance = ReadLine();
	}

	if (type_of_hash.empty()){					// tsekarei ama o xrhsths exei dwsei to eidos tou   										// hashtable mesw terminal

		cout << "give the type of your hashtable" << endl;
		type_of_hash = ReadLine();
	}




	//--------------------Dhmiourgia Domhs Anazhthshs--------------------------------------------//




	if (queries.empty()){						// tsekarei ama o xrhsths exei dwsei to path gia ta queries mesw 										// terminal

		cout << "give the path for your queries file" << endl;
		queries = ReadLine();
	}
	

	if (output.empty()){						// tsekarei ama o xrhsths exei dwsei to path gia to output mesw
									// terminal

		cout << "give the path for your output file" << endl;
		output = ReadLine();
	}



	Linked_List_C* list = new Linked_List_C();			//dhmiourgia listas apo ton default constructor

	//cout << d ;

	load_list_with_curves("",list);


	//ifstream set(d.c_str(),ios::in);				//auto to arxeio anoigw
	//ifstream set("dataset0");
	//hash*  table = new hash(10);
	//table->print();
	//table->destroy_hash_table();
	//table->print();

	/*ifstream set(dataset.c_str());					//auto to arxeio anoigw

	int count = 0 ;							//metrhths
 	while (getline(set,str)){					//oso uparxoun grammes diavase mia apo to input(dataset)
       
		int i;
                string curve; 						//strings gia apothikefsh twn suntetagmenwn

		for (i=0; i <= str.length(); i++){ 			//vres thn prwth fora pou anoigei  parenthesh sthn grammh
                        
			if(str[i] == '('){

                                break;
                        }
                }
   
             	for (i=0; i <=str.length();i++){			//twra apothikefse oti noumero uparxei apo edw kai pera se ena 										//string (kwdikopoihsh kampulhs)
			if (isdigit(str[i])){				//is digit:tsekarei an ena char einai arithmos 0-9
                        	curve.push_back(str[i]); 		//push back : prosthetei chars se ena string
                        }
                }

		char *chared_curve = new char[str.length() + 1];
		strcpy(chared_curve,curve.c_str());
		list->Add_curve_on_tail_C(chared_curve);		//vale thn kampulh pou diavasstike mesa sthn lista
                count++;
        }

	list->Traverse_and_print_C();	

        set.close();
	*/
}



