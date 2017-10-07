
#include"object_list.h"
#include<string>
#include<cstring>
using namespace std;
Curve :: Curve( string coors )//Defining a curve
	:Next_Curve(NULL),coordinates(coors){}

Curve :: Curve(void) // defining a curve by default
	:Next_Curve(NULL),coordinates(NULL){}

void Curve::Print_Curve(){//Print the coordinates of this curve
        cout << coordinates << endl ;
}

/*
int Edge :: Get_start(){//take the key of the account sending money
	return Start;
}

*/
