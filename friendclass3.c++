#include <iostream>
using namespace std;

class pelajar;
class mahasiswa
{
public:
    void showNilaiPelajar(pelajar &x);
};
class pelajar
{
private:
    int nilai;
