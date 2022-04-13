#include <iostream>
using namespace std;

class Tabungan{
public:
void iteratif();
int a[12],totp=0,banyakA;
};

void Tabungan::iteratif(){
int saldo=0;
cout<< "Masukkan jumlah tabungan : Rp.";cin>>saldo;
cout<< "Masukkan bulan :";cin>>banyakA;

for(int i=0; i<banyakA; i++){
  cout<<"masukkan pengeluaran"<<i+1<<" : Rp.";cin>>a[i];
  totp = totp + a[i];
}
cout<<"\t     ------------+"<<endl;
cout<<"\t Total  : Rp."<<totp<<endl;
cout<<"\t     ------------ -"<<endl;
cout<<"\t sisa uang : Rp."<<saldo-totp;
}
int main(){
Tabungan BRI;
BRI.iteratif();
  return 0;
}
