#include <iostream>
#include <string>
#include <chrono>
#include <thread>

using namespace std;

// We pass the friend's name into the function so we can actually use it!
void runBrainTest(string name);

int main() {
    cout << "--- Knock! Knock! Knock! ---" << endl << endl;
    
    cout << "Enter your friend's nickname: ";
    string friend_name;
    // Using getline here covers full names (like "John Doe") safely
    getline(cin, friend_name); 

    int select_option = 0;
    bool running = true;

    while (running) {
        cout << "\nSelect an option between 1 to 5 to test " << friend_name << " (or 0 to exit): ";
        
        // Check if the user entered a valid number
        if (!(cin >> select_option)) {
            cout << "That's not even a number! Try again." << endl;
            cin.clear(); // Clear the error flag
            cin.ignore(10000, '\n'); // Discard bad input
            continue;
        }

        if (select_option == 0) {
            cout << "Exiting... peace out!" << endl;
            break;
        }

        switch (select_option) {
            case 1: 
            case 2:
            case 3:
            case 4:
            case 5:
                runBrainTest(friend_name);
                running = false; // Ends the game after the prank runs
                break;
            default: 
                cout << "Invalid Number. Try again!" << endl;
        }
    }

    return 0;
}

void runBrainTest(string name) {
    cout << "\n--- " << name << "'s Brain Test! Version 1.0 ---" << endl;
    this_thread::sleep_for(chrono::seconds(1));

    cout << "Scanning for intelligence..." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "ERROR: 404 - Logic Not Found." << endl << endl;

    cout << "Scanning for social skills..." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "ERROR: 404 - Logic Not Found." << endl;

    cout << "\nWARNING: Final calculation starting..." << endl;
    cout << "Loading";
    for (int i = 0; i < 5; i++) {
        cout << ".........." << endl;
        this_thread::sleep_for(chrono::milliseconds(500));
    }

    // Now your friend's name is actually printed here dynamically!
    cout << "\nSCAN COMPLETE. RESULT:" << endl;
    cout << "Status: " << name << " is a Donkey!" << endl;
    cout << "Displaying " << name << "'s current look:" << endl << endl;

    cout << "    XXXXXXXXXXXX   " << endl;
    cout << "   X  0      0  X  " << endl;
    cout << "  X      ||      X " << endl;
    cout << "  X    \\__//    X " << endl;
    cout << "   X            X  " << endl;
    cout << "    XXXXXXXXXXXX   " << endl;
    cout << "\n[System Shutdown: " << name << " needs to sleep.]" << endl;
}