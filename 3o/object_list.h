#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Curve {

	friend class Linked_List_C		;//class Linked_List_C has access here
	private:
		Curve* 	        Next_Curve	;//Pointer to the next curve
		vector< vector <double> > coordinates ;
//		string		coordinates	;//Information of the curve

	public :
		Curve( vector< vector <double> > )	;//constructor with values
		Curve(void)		;	//default constructor
					;
		void Print_Curve()	;	//function to print the curves
	//	int Get_Coordinates()		;//accesor function
};
