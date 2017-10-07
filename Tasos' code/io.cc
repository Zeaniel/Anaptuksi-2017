#include<iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#define D 25
#include<cstring>
//#include"object_list.h"
#include"linked_list_of_curves.h"

using namespace std;
int main(){
	Linked_List_C* list = new Linked_List_C();//dhmiourgia listas apo ton default constructor

	ifstream set("dataset0");//auto to arxeio anoigw
        string str ;//string gia apothiukefsh twn suntetagmenwn
       
	int d = 0 ;
        int i;
        while (getline(set,str)){//oso uparxoun grammes diavase mia apo to input(dataset)
                int i;
                string curve; //strings gia apothikefsh twn suntetagmenwn

		for (i=0; i <=str.length();i++){ //vres thn prwth fora pou anoigei  parenthesh sthn grammh
                        if(str[i] == '('){
                                break;
                        }
                }
                for (i; i <=str.length();i++){//twra apothikefse oti noumero uparxei apo edw kai pera se ena string(kwdikopoihsh kampulhs)
                        if (isdigit(str[i])){//is digit:tsekarei an ena char einai arithmos 0-9
                                curve.push_back(str[i]); //push back : prosthetei chars se ena string
                        }
                }
		char *chared_curve = new char[str.length() + 1];
		strcpy(chared_curve,curve.c_str());
		list->Add_curve_on_tail_C(chared_curve);//vale thn kampulh pou diavasstike mesa sthn lista
                d++;
        }
	list->Traverse_and_print_C();	

        set.close();

        return 0;
}

