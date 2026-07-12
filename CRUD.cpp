/********************************************************************
 
            -> on-going...

 *******************************************************************

create, read, update, delete -> this is kinda backbone of most of all real world applications. 
so, let's build my own little version that stays only in the terminal.

### plannings: 
-> an user enters the program
-> user will be able to create a file name first. 
   : when user says "create", it will take the user to let him select file name and save it, then write under it. 
-> user will be able to see his all file names, then select his deside file number to go through the file and read or edit or delete.
*/


#include <iostream>
#include <vector>
#include <string> 

using namespace std;

void display();

int main(){

	cout << endl;
	cout << endl;

	cout << "   *** Welcome to CRUD ***" << endl;
	cout << "Create | Read | Update | Delete" << endl;	
	cout << endl;
	display();

	int choose_option = 0;
	
	while(choose_option != 5){
		cin >> choose_option;
		display();

	/*	switch(choose_option){
		case 1: 

			break;
		}
		*/
	}
	return 0;

}


void display(){
	cout << "1. Create" << endl;
	cout << "2. Read" << endl;
	cout << "3. Update" << endl;
	cout << "4. Delete" << endl;
	cout << "5. Exit the program" << endl;
	cout << "Select an option (1-5): ";

}
