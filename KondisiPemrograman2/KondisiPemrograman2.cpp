#include <iostream>

int main()
using namespace std

{
    float nMat, nfisika, rerata;

    cout << " Masukan nilai matematika ";
    cin >> nMat;
    cout << " Masukan nilai fisika ";
    cin >> nfisika;

    rerata = (nfisika + nMat) / 2;

    if (rerata >= 60) {
        status = "Lulus jalur rerata";
    }
    else if (nMat >= 70) {
        status = " lulus jalur matematika";

    }
    else
    {
        status = " Tidak Lulus";
    }

    cout << "Statusnya adalah " << status << endl;

    system("pause");



}
