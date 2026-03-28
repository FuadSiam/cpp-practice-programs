#include <bits/stdc++.h>
using namespace std;

// group them
struct Contact {
	string name;
	string phone_number;
};

// main functions
void display();
void add_contact(vector<Contact>& contacts);
void view_contacts(const vector<Contact>& contacts);
void delete_contact(vector<Contact>& contacts);

int main(){
	vector<Contact> address_book;
	int choice = 0;	

	cout << "Wellcome to the Contact Manager!" << endl;

	//starting or main program loop
	while(choice != 4){
		display();
		cout << "Enter your choice (1-4): ";
		cin >> choice;

		cin.ignore(); // clearing new line buffer

		switch(choice){
		case 1:
			add_contact(address_book);
			break;
		case 2: 
			view_contacts(address_book);
			break;
		case 3:
			delete_contact(address_book);
			break;
		case 4:
			cout << "Exising the program. Goodbye!" << endl;
			break;
		default: 
			cout << "Invalid choice. Please try again." << endl;

		}
	}
	return 0;
}


void display(){
	cout << "\n--- Contact Manager Menu ---" << endl;
	cout << "1. Add a contact" << endl;
	cout << "2. View all contacts" << endl;
	cout << "3. Delete a contact" << endl;
	cout << "4. Exit" << endl;
} 

void add_contact(vector<Contact> & contacts){
	Contact new_contact;

	cout << "Enter contact name: ";
	getline(cin, new_contact.name);

	cout << "Enter phone number: ";
	getline(cin, new_contact.phone_number);

	contacts.push_back(new_contact);
	cout << "Contact added successfully!" << endl;
} // contact addition done



void view_contacts(const vector<Contact>& contacts){
	if(contacts.empty()){
		cout << "The contact list is empty." << endl;
		return;
	}

    cout << "\n --- Your Saved Contacts ---" << endl;
    for(size_t i = 0; i < contacts.size(); i++){
    	cout << i + 1 << ". Name: " << contacts[i].name << " | Phone: " << contacts[i].phone_number << endl;
    } // full contact list
}

void delete_contact(vector<Contact>& contacts){
	if(contacts.empty()){
		cout << "There are no contacts to delete." << endl;
		return;
	} 

	view_contacts(contacts);

	int index;
	cout << "Enter the number of the contact to delete: ";
	cin >> index;

	if(index > 0 && index <= contacts.size()){
		contacts.erase(contacts.begin() + index - 1);
		cout << "Contact deleted successfully." << endl;
	} else {
		cout << "Invalid Contact Number." << endl;
	}
}