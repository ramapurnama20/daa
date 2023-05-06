Skip to content
Search or jump to…
Pull requests
Issues
Codespaces
Marketplace
Explore
 
@ramapurnama20 
djambred~
/
daa
Public
Fork your own copy of djambred/daa
Code
Issues
Pull requests
Actions
Projects
Security
Insights
daa/pert4/tipedata.cc
@djambred
djambred fresh from oven
Latest commit 8202dee 13 minutes ago
 History
 1 contributor
57 lines (50 sloc)  1.23 KB
 

#include <iostream>
 
using namespace std;

struct Mahasiswa {
  string nama;
  string kampus;
  unsigned int jajan;
};

enum nama_hari {
    minggu = 0,
    senin  = 1,
    selasa = 2,
    rabu   = 3,
    kamis  = 4,
    jumat  = 5,
    sabtu  = 6
};

int main()
{
    int angka = 10;
    double angkakoma = 0.14;
    bool pilihan = true;
    char karakter = 'A';
    string karakter2 = "Bentuk-Bentuk Tipe Data";
    int arai[5] = {10, 20, 30, 40, 50};
    int pointer = 100;
    
    cout <<"TIPE DATA DASAR"<<endl;
    cout <<"---------------"<<endl;
    cout << angka << endl;
    cout << angkakoma << endl;
    cout << pilihan << endl;
    cout << karakter << endl;
    cout << karakter2 << endl;

    cout <<"TIPE DATA NON-PRIMITIVE"<<endl;
    cout <<"---------------"<<endl;
    cout << arai[2] << endl;
    cout << pointer << endl;
    cout << &pointer << endl;
    nama_hari var1;
    var1 = senin;
    cout << var1 << endl;
    
    cout <<"TIPE DATA BENTUKAN"<<endl;
    cout <<"---------------"<<endl;
    struct Mahasiswa mhs1;
    mhs1.nama = "Budi";
    mhs1.kampus = "UEU";
    mhs1.jajan = 100000;
    cout << mhs1.nama <<" kuliah di " << mhs1.kampus << endl;
    cout << "dengan uang saku " << mhs1.jajan << " per hari" << endl;
    return 0;
}
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
