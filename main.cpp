#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <fstream>
#include <cstring>
#include "Functions.h"
#include "linked_list_of_curves.h"

#define D 25

using namespace std;


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

	ifstream set(d.c_str());					//auto to arxeio anoigw

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
	
}



