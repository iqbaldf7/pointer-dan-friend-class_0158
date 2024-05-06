#include <iostream>
using namespace std;

class mahasiswa
{
    string nama;
public:
    friend void setNama(mahasiswa &a, string);
};