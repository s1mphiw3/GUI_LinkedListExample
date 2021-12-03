// cloned LinkedList Example : Console Application
#include "stdafx.h"
#include "MyList.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[]){
	List L;//list declaration
	Init (L); //list intialisation
	Insert ("musa", L); Insert ("jane", L); Insert ("smile", L); ShowData (L);//Function calls to insert and display data
	Delete ("jane",L);ShowData (L); // function calls to delete and display data on screen


	system("pause");
	return 0;//terminates progamme
}

