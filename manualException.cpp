#include <iostream>
#include <exception>
#include <array>
using namespace std;

int main () {
    try {
        cout << "Selamat belajar di prodi TI UMY" << endl;
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch (int a) {
        cout << "Pegecualian akan dieksekusi" << endl;
    }
    catch (...) {
        cout << "Default pengecualian dieksekusi" << endl;
    }
    return 0;
}