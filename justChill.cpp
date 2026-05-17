#include <bits/stdc++.h>
using namespace std;

void sample1 ();


int main() {

    cout << "--- Knock! Knock! Knock! ---" << endl;
    cout << endl;
    cout << "Enter your friend's nick name: ";
    string friend_name;
    cin >> friend_name;

   // cin.ignore();
    getline(std::cin, friend_name);

   int select_option = 0;
   // cin >> select_option;
   // cout << "Watch the show! Good luck for your friend!" << endl;

    while(cin >> select_option){
        cout <<"Select an option between 1 to 5: ";
        cin >> select_option;
        cin.ignore();
       // getline(std::cin, myLine);

    switch(select_option){
    case 1: 
        sample1();
        break;
    case 2:
        sample1();
        break;
    case 3:
        sample1();
        break;
    case 4: 
        sample1();
        break;
    case 5:
        sample1();
        break;
    default: 
        cout << "Invalid Number. Try again!" << endl;
    }
}

    return 0;
}


void sample1 (){
    cout << "--- 's Brain test! Version 1.0 ---" << endl;
     this_thread::sleep_for(chrono::seconds(1));

    cout << "Scanning for intelligence..." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "ERROR: 404 - Logic Not Found." << endl;

    cout << "Scanning for social skills..." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "ERROR: 404 - Logic Not Found." << endl;

    cout << "\nWARNING: Final calculation starting..." << endl;
    for(int i = 0; i < 5; i++) {
        cout << "Loading.........." << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    cout << "\nSCAN COMPLETE. RESULT:" << endl;
    cout << "Status: Fahad is a Donkey!" << endl;
    cout << "Displaying fahad's current look:" << endl;

    cout << "   XXXXXXXXXXXX   " << endl;
    cout << "  X  0      0  X  " << endl;
    cout << " X      ||      X " << endl;
    cout << " X    \\__//    X " << endl;
    cout << "  X            X  " << endl;
    cout << "   XXXXXXXXXXXX   " << endl;
    cout << "\n[System Shutdown: Fahad needs to sleep.]" << endl;

}