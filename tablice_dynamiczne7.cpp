#include <iostream>
using namespace std;
class klasa{
    public:
    void maciez(){
        int w,k;
        cout<<"podaj wilekosc:";
        cin>>w;
        cout<<"\n wielkosc:"<<w<<"\n";
        int **tab=new int*[w];
        int **tab_maciez=new int*[w];
        for (int i = 0; i < w; i++) {
            cout << "Podaj liczbę komórek w wierszu o numerze " << i << ": ";
            cin >> k;
            tab[i] = new int[k];
            tab_maciez[i] = new int[k];
        }
        for(int i = 0;i<w;i++){
            for(int j = 0;j<k;j++){
                cout<<"podaj liczbe dla |"<<i<<"|"<<"|"<<j<<"|"<<":";
                cin>>tab[i][j];
            }
        }
        
        cout<<"\ntablica:\n";
        for(int i = 0;i<w;i++){
            for(int j = 0;j<k;j++){
                cout<<tab[i][j]<<" ";
            }
            cout<<"\n";
        }
        
        cout<<"\ntranspozycja maciezy:\n";
        
        for(int i = 0;i<w;i++){
            for(int j = 0;j<k;j++){
                tab_maciez[j][i]=tab[i][j];
            }
        }
        
        for(int i = 0;i<w;i++){
            for(int j = 0;j<k;j++){
                cout<<tab_maciez[i][j]<<" ";
            }
            cout<<"\n";
        }
        
        for (int i = 0; i < w; i++) {
            delete[] tab[i];
            delete[] tab_maciez[i];
        }
        delete[] tab;
        delete[] tab_maciez;
    }
};
int main()
{
    klasa kal;
    kal.maciez();
    return 0;
}