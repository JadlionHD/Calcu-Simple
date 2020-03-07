#include <iostream>

using namespace std;

int main()
{
    char hitungan;
    int nomer1;
    int nomer2;
    int jawaban;

    cout << "Simpel calculator dibuat oleh jadlion" << endl;
    cout << "Masukan hitungan buat ngejumlahkan (contoh +, -, *, /, dan %)" << endl;
    cin >> hitungan;
    cout << "Masukkan nomer yg kepertama:" << endl;
    cin >> nomer1;
    cout << "Masukkan nomer yg kedua:" << endl;
    cin >> nomer2;

    if(hitungan == '+') {
        jawaban = nomer1 + nomer2;
    }
    else if(hitungan == '-') {
        jawaban = nomer1 - nomer2;
    }
    else if (hitungan == '*') {
        jawaban = nomer1 * nomer2;
    }
    else if (hitungan == '/') {
        jawaban = nomer1 / nomer2;
    }
    else if (hitungan == '%') {
        jawaban = nomer1 % nomer2;
    }
    else {
        cout << "maaf masih ngesupport (+, -, *, /, dan %)";
    }
    cout << "jawabannya adalah : " << jawaban;
    return 0;
}
