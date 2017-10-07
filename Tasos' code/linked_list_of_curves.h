#include <iostream>
#include <cstddef>
#include"object_list.h"
using namespace std;
/* definition of the linked list class */
class Linked_List_C{
		friend class  Curve           ;//class Curve has access 
	private:
		Curve 	* 	Head         ;/* pointer of Head node */
		int 		Size_of_list ;/*size of list  */
	public:
		/* Constructors */
		Linked_List_C(void);
		Linked_List_C( string);

    		/* Destructor */
		~Linked_List_C(void);

		/* Traverse and print the list */
		void Traverse_and_print_C();

		/*Add curve to the end of the list*/
		void Add_curve_on_tail_C( string) ;
		/* This function returns the size of the list  */
		int size_of_list_C();  
		//This function deletes  the list
		void Delete_all_the_curves();
		//This function deletes a defined curve by user
		void Delete_a_curve_C( string );
		//This function returns a connections searcing it by its elements
		Curve* Return_a_curve_C( string );
		//This function tells us if a curve exists
		bool  Is_in_C( string);
};
