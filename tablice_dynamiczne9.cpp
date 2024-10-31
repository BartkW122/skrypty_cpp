#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class klasa {
public:
    void tablica() {
        int **tab1;
        int kolumny, wiersze;
        int liczba;
        cout << "Podaj liczbę wierszy: ";
        cin >> wiersze;
        
        tab1 = new int *[wiersze];

        for (int i = 0; i < wiersze; i++) {
            cout << "Podaj liczbę komórek w wierszu o numerze " << i << ": ";
            cin >> kolumny;
            tab1[i] = new int[kolumny];
        }

 
        for (int i = 0; i < wiersze; i++) {
            for (int j = 0; j < kolumny; j++) {
                tab1[i][j]=( std::rand() % 52 ) + 1;
            }
        }
      
 
        cout<<"\n tab1:";
        cout<<endl;
        for (int i = 0; i < wiersze; i++) {
            for (int j = 0; j < kolumny; j++) {
                cout << tab1[i][j] << " ";
            }
            cout<<endl;
        }
        
        cout<<"\n paryste liczby:";
        cout<<endl;
        for (int i = 0; i < wiersze; i++) {
            for (int j = 0; j < kolumny; j++) {
                
                if(tab1[i][j]%2==0){
                    cout<<"indeksy "<<"|"<<i<<"|"<<"|"<<j<<"|"<<":"<<tab1[i][j]<<"\n";
                }
                
            }
            cout<<endl;
        }
        
        for (int i = 0; i < wiersze; i++) {
            delete[] tab1[i];
         
        }
        delete[] tab1;
      
    }
};
int main() {
    srand( time( NULL ) );
    klasa kal;
    kal.tablica();
    return 0;
}