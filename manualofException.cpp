#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "Selamat Belajar di prodi TI UMY" << endl;
        // throw 0.5; // melemparkan sebuah interger maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }
    catch {
        // blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch {
        /*jika selain interger maka block ini akan dieksekusi*/
        cout << "default pengecualian dieksekusi" << endl;
    }

    return 0;
}