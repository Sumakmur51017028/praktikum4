#include <iostream.h>
#include <conio.h>

main()
{
int a,b,mod;
float bagi;
cout<<"Contoh penggunaan / dan % \n\n";
cout<<"masukkan angka pertama (a) = ";cin>>a;
cout<<"masukkan angka kedua (b) = ";cin>>b;
bagi=float(a)/b;
mod=a%b;
cout<<"\n\tHasil pembagian = "<<bagi;
cout<<"\n\tSisa hasil bagi = "<<mod;
getch();
}
