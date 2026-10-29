
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Create an ofstream object to write to a file
    ofstream fout;

    string line;

    // Open the file for writing
    fout.open("sample.txt");

    // Check if file opened successfully
    if (fout.is_open()) {
        cout << "Enter text (-1 to stop):" << endl;

        while (true) {
            getline(cin, line);

            if (line == "-1")
                break;

            fout << line << endl;
        }

        fout.close();
    }

    // Create an ifstream object to read the file
    ifstream fin;

    // Open the file for reading
    fin.open("sample.txt");

    cout << "\nFile Contents:" << endl;

    // Read and display the file contents
    while (getline(fin, line)) {
        cout << line << endl;
    }

    // Close the file
    fin.close();

    return 0;
}
