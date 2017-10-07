#include<iostream>
#include<string>
using namespace std;

class Curve {

	friend class Linked_List_C		;//class Linked_List_C has access here
	private:
		Curve* 	        Next_Curve	;//Pointer to the next curve
		string		coordinates	;//Information of the curve

	public :
		Curve( string coordinates )	;//constructor with values
		Curve(void)		;	//default constructor
					;
		void Print_Curve()	;	//function to print the curves
	//	int Get_Coordinates()		;//accesor function
};
