#include <iostream>
using namespace std;
class tablice{
    public:
        void dodawanie_do_tablicy(){
            int rozmiar;
            int ilosc,ilosc2;
            cout<<"podaj rozmiar:";
            cin>>rozmiar;
            int *tab=new int[rozmiar];
            int *tab2=new int[rozmiar];
            int *suma=new int[rozmiar];
            while(ilosc<rozmiar){
                cout<<"podaj liczbe do tablicy 1:";
                cin>>tab[ilosc];
                ilosc++;
            }
            while(ilosc2<rozmiar){
                cout<<"podaj liczbe do tablicy 2:";
                cin>>tab2[ilosc2];
                ilosc2++;
            }
            cout<<"tab:";
            for(int i=0;i<rozmiar;i++){
                cout<<tab[i]<<" ";
            }
            cout<<endl;
            cout<<"tab2:";
            for(int i=0;i<rozmiar;i++){
                cout<<tab2[i]<<" ";
            }
            for(int i=0;i<rozmiar;i++){
                suma[i]=tab2[i]+tab[i];
            }
            cout<<endl;
            cout<<"suma:";
            for(int i=0;i<rozmiar;i++){
                cout<<suma[i]<<" ";
            }
            /*cout<<endl;
            cout<<tab[1]<<endl;
            cout<<tab2[1];*/
            delete [] tab;
        };
};
int main()
{
    tablice TAB;
    TAB.dodawanie_do_tablicy();
 
    return 0;
}