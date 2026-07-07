/*
    Author: Fuad Hassan Siam

This is a basic one time terminal based contact manager. Means, it doesn't have any history saving suppport yet. If you leave the terminal, it will close the program.

Key features: 
1. Save contacts one by one. 
2. View all contacts.
3. Remove contacts at any index one by one.

** Upcoming features: 
1. remove multiple contacts at a time by selecting multiple index. 
2. saved contacts will be shown in a better formate, probably in a box/table formate
3. 

*/


#include <iostream> 
#include <vector>
#include <string> 
using namespace std;

struct Contact {
    string name;
    string phone;

};

void display();
void add_contact(vector<Contact> & ref_contacts);
void view_contact(vector<Contact> & ref_contacts);
void delete_contact(vector<Contact> & ref_contacts);


int main(){

    vector<Contact> details_contacts;

        cout << endl;
        cout << "The program begins from here" << endl;

        char choose_loop;
        cout << "Do you want to continue (Y/N): ";
        cin >> choose_loop;

        while(choose_loop == 'Y' || choose_loop == 'y'){
            int choice = 0;
                
            display();

            cout << "Select an option: ";
            cin >> choice;

        switch(choice){
            case 1:
                add_contact(details_contacts);
                break;
            case 2:
                view_contact(details_contacts);
                break;
            case 3:
                delete_contact(details_contacts);
                break;
            case 4: 
                cout << "Existing the program. Goodbye";
                break;
            default:
                cout << "Invalid choice!" << endl;
        } 

        cout << endl;
        cout << "Do you want to continue (Y/N): ";
        cin >> choose_loop;
        
        if(choose_loop == 'N' || choose_loop == 'n'){
            cout << "Exit" << endl;
            break;
        }
    } 
    
    cout << "Program ends!" << endl;
            
    return 0;
}


void display(){
    cout << "1. Add a new contact" << endl;
    cout << "2. View all contact" << endl;
    cout << "3. Delect a contact" << endl;
    cout << "4. Exit" << endl;
}

void add_contact(vector<Contact> & ref_contacts){

    Contact add_new_contact;
    cin.ignore();

    cout << "Enter name: ";
    getline(cin, add_new_contact.name);

    cout << "Enter number: ";
    getline(cin, add_new_contact.phone);

    ref_contacts.push_back(add_new_contact);
    cout << "Contact successfully added" << endl;

}

void view_contact(vector<Contact> & ref_contacts){

    cout << "\n Your saved contacts " << endl;
    cout << endl;
    for(int i = 0; i < ref_contacts.size(); i++){
        cout << i + 1 << ". Name: " << ref_contacts[i].name << " , Phone: " << ref_contacts[i].phone << endl; 
    }

}

void delete_contact(vector<Contact> & ref_contacts){

    cout << endl;
    view_contact(ref_contacts);

    int index;
    cout << "Select the index number you wanna delete: ";
    cin >> index;

    if(index > 0 && index <= ref_contacts.size()){
        ref_contacts.erase(ref_contacts.begin() + index - 1);
        cout << "Contact removed" << endl;
    } else cout << "Invalid index number" << endl;

}