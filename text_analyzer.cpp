/*
****************************************************
                On going...
****************************************************
*/


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream inputFile("text_analyzer.txt");

    if(!inputFile){
        cout << "No file!" << endl;
        return -1;
    }

    string read;
    while(getline(inputFile, read)){
        cout << read << endl;
    }


    return 0;
}