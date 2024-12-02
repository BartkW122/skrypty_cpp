#include <iostream>
#include <string>
using namespace std;
string obroc(string &tekst){
    int poczatek=0;
    int koniec=tekst.size()-1;
    int wilelkosc=tekst.length();
    
    char temp;
    
    for(int i = 0;i<wilelkosc/2;i++){
        temp=tekst[i];
        tekst[i]=tekst[wilelkosc-i-1];
        tekst[wilelkosc-i-1]=temp;
    }
    
    cout<<tekst;
    return "0";
}
int main()
{
    string tekst;
    cout<<"napisz cos:";
    cin>>tekst;
    cout<<"prze obroceniem:\n"<<tekst;
    cout<<endl;
    cout<<"po obroceniu:\n";
    obroc(tekst);
    return 0;
}