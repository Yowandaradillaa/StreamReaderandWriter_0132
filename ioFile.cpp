#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main () {
    string baris;

    ofstream outfile;
    outfile.open("contohfile.txt");
    cout << ">= Menulis File, \'q\' untuk keluar " << endl;

    while (true) {
        getline (cin, baris);
        if (baris == "q") break;
        outfile << baris << endl;
    }

    
}