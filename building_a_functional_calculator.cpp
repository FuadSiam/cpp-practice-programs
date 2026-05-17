
/* this is the biginning and the absolute basic version. But i will be adding more things on it. like, 
1. calculating multiple numbers at the same time
2. using other operations than basic the basic four. */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void display(){

}

int main(){

	cout << endl;
	cout << endl;  // added two blank lines, bacause of having a clean visual look in the terminal

	cout <<	"--- Learning how to use switch in C++ through building a basic calculator ---" << endl;
	cout << endl;
	double first_num;
	cout << "Select the first number: ";
	cin >> first_num;

	double second_num;
	cout << "Select the second number: ";
	cin >> second_num;

	int select_operator;
	cout << "1. Add (+)" << endl;
	cout << "2. Substract (-)" << endl;
	cout << "3. Multiply (*)" << endl;
	cout << "4. Divide (/)" << endl;
	cout << "Select the operator (1 - 4): ";
	cin >> select_operator;

	/*if(select_operator != 1 || select_operator != 2 || select_operator != 3 || select_operator != 4){
		cout << "Invalid operator!" << endl;
	}*/

	double result_add = first_num + second_num;
	double result_subtract = first_num - second_num;
	double result_multiply = first_num * second_num;
	double result_divide = first_num / second_num;

	switch (select_operator){
		case 1: 
			cout << first_num << " + " << second_num << " = " << result_add << endl;
			break;
		case 2: 
			cout << first_num << " - " << second_num << " = " << result_subtract << endl;
			break;

		case 3: 
			cout << first_num << " * " << second_num << " = " << result_multiply << endl;
			break;

		case 4: 
			cout << first_num << " / " << second_num << " = " << result_divide << endl;
			break;
		default:
			cout << "Something went wrong!" << endl;
	}



	
	return 0;
}