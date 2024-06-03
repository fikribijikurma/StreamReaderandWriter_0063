#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    string baris;

    // membuka file dalam mode menulis
    ofstream outfile;
    // menunjuk kesebuah nama file
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis
    while (true) {
        cout << "-";
        // mendafatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        // menulis dan memasukan nilai dari 'baris' kedaam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup filenya
    outfile.close();

    // membuka file dalam mode membaca
    ifstream infile;
    // memnunjuk kesebuah file
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membaca file " << endl;
    // jika file ada maka
    if (infile.is.open()){
        // melakukan perulangan setiap baris
        while (getline(infile, baris))
        {
            // dan tampilkan disini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }
    // jika tidak ditemukan file maka akan menampilkan ini
    else cout << "Unable to open file";
    return 0;
}