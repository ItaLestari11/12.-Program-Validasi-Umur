#include<iostream>
#include<iomanip>
#include<string>
using namespace std;


int main()
{
    string nama;
    int tglahir,blnlahir,thnlahir;
    int tgsekarang,blnsekarang,thnsekarang;
    int Ubulan, Utahun, Uhari;

    cout<<"Nama anda"<<endl;
    cin>>nama;
    cout<<"Tanggal kelahiran"<<endl;
    cin>>tglahir;
    cout<<"Bulan lahir"<<endl;
    cin>>blnlahir;
    cout<<"Tahun kelahiran"<<endl;
    cin>>thnlahir;
    cout<<endl;



    for(int i=0; i<45; ++i)
    {
        cout<<(char)196;
    }
    endl(cout); cout<<endl;


    cout<<"tanggal sekarang"<<endl;
    cin>>tgsekarang;
    cout<<"bulan sekarang"<<endl;
    cin>>blnsekarang;
    cout<<"tahun sekarang"<<endl;
    cin>>thnsekarang;


    if(blnlahir > blnsekarang && tglahir > tgsekarang)
        {
            Uhari=tglahir-tgsekarang;
            Ubulan=12-(blnlahir-blnsekarang);
            Utahun=(thnsekarang - thnlahir)-1;
        }
        else if (blnlahir > blnsekarang && tglahir < tgsekarang)
        {
            Uhari=tgsekarang - tglahir;
            Ubulan=12-(blnlahir-blnsekarang);
            Utahun=(thnsekarang-thnlahir)-1;
        }

        if(blnlahir < blnsekarang && tglahir > tgsekarang)
        {
            Uhari=tglahir-tgsekarang;
            Ubulan=blnsekarang-blnlahir;
            Utahun=thnsekarang-thnlahir;
        }

        else if (blnlahir < blnsekarang && tglahir < tgsekarang)
        {
            Uhari=tgsekarang-tglahir;
            Ubulan=blnsekarang-blnlahir;
            Utahun=thnsekarang-thnlahir;
        }

        cout<<"Hai"<<nama<<"!!!\n usia anda sekarang:"<<Utahun;
        cout<<"tahun"<<Ubulan<<"bulan"<<Uhari<<"hari"<<endl;

        return 0;
}

