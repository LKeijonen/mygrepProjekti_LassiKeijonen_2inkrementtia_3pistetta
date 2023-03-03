#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char*argv[]) {
    if(argc == 1) {
        cout << "Give a string from which to search for: ";
        string input;
        cin >> input;
        cout << "Give search string: ";
        string search;
        cin >> search;
        size_t pos=input.find(search); 
        if(pos != string::npos) {
            cout << '"' << search << "\" found in \"" << input << "\" in position " << pos << endl;
        } else {
            cout << '"' << search << "\" NOT found in \"" << input << '"' << endl;
        }
    }
    else if(argc==3) {
        ifstream file(argv[2]);
        string line;
        string search = argv[1];
        while(getline(file,line)) {
            if(line.find(search)!= string::npos) {
                cout << line << endl;
            }
        }
    }
}