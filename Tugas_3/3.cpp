#include <iostream>

using namespace std;

enum hari {
    Minggu = 100,
    Senin = 1,
    Selasa = 2,
    Rabu = 3,
    Kamis = 4,
    Jumat = 5,
    Sabtu = 90
    };

int main(){

    hari var1;

    var1 = Sabtu;
    cout << var1 << endl;

    var1 = Jumat;
    cout << var1 << endl;

    var1 = Minggu;
    cout << var1 << endl;

  return 0;
}
