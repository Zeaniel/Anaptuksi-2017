#include "open_file.h"

Linked_List_C* load_list_with_curves(string dataset,Linked_List_C* list ){

//	string set;
	ifstream set("dataset0");//auto to arxeio anoigw
        string str ;//string gia apothiukefsh twn suntetagmenwn

        int d = 0 ;
//        int i;
        while (getline(set,str)){//oso uparxoun grammes diavase mia apo to input(dataset)
                int i;
                string curve; //strings gia apothikefsh twn suntetagmenwn

                for (i=0; i <=str.length();i++){ //vres thn prwth fora pou anoigei  parenthesh sthn gram$
                        if(str[i] == '('){
                                break;
                        }
                }
                for (i; i <=str.length();i++){//twra apothikefse oti noumero uparxei apo edw kai pera se$
                        if (isdigit(str[i]) || str[i] == '.' || str[i] == ',' || str[i] =='(' || str[i] == ')'){
                                curve.push_back(str[i]); //push back : prosthetei chars se ena string
                        }
                }

		
                int number_of_points = 0 ;
		for (int i = 0 ; i <= curve.length();i++){
                        if(curve[i] == '('){    number_of_points++;}
                }
                cout << curve << " " << number_of_points <<"\n";

                string points[2*number_of_points];
                double points_d[2*number_of_points];
                int k = 0 ;
                int n = 0 ;
                while(curve[n] != '\0' && k < 2*number_of_points && n < curve.length()){
                        if(curve[n] == '(' /*|| curve[n] ==',' */){
                                n++;
                                //continue;
                        }
                         if(isdigit(curve[n]) || curve[n] == '.'){
                                        points[k].push_back(curve[n]);
                                //n++;
                                        //cout << points[k] ;
                        }
                        else if(curve[n] == ')' || curve[n] == ',' /*|| curve[n] == '('*/){
			//cout << "telos shmeiou\n";//<< points[k] << endl;
                                //n++;
                                //k++;
                                cout << points[k] << endl;
                                points_d[k] = stod(points[k]);
                                points[k] = "";
                                k++;
                        }
                        //cout <<points[k];
                n++;

                }
                cout <<"after while";
                for(int i = 0 ; i < 2*number_of_points; i++){
                        cout << points_d[i] << " ";
                }
                cout << endl;

                vector<vector <double> > Curve ;
                for (int i= 0 ; i<2*number_of_points ; i++){
                        vector<double> suntetagmenes ;
                        //int k = i;
                        //for(int j= 0 ; j <2  ; j++){
                                suntetagmenes.push_back(points_d[i]);
                                //suntetagmenes.push_back(points_d[2*i]);
                        //}

                        Curve.push_back(suntetagmenes);
                }


                list->Add_curve_on_tail_C(Curve);
                //list->Add_curve_on_tail_C(chared_curve);//vale thn kampulh pou diavasstike mesa sthn l$
                d++;
       	
	}
	return list; 



}
