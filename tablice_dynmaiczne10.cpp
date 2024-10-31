#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class klasa {
public:
    void tablica() {
        int **tab1,**tab2,**sum,**tab1_pom;
        int kolumny, wiersze;
        int liczba;
        cout << "Podaj liczbę wierszy: ";
        cin >> wiersze;
        
        tab1 = new int *[wiersze];
        tab1_pom=new int *[wiersze];
        tab2 = new int *[wiersze];
        sum = new int *[wiersze];
        
        for (int i = 0; i < wiersze; i++) {
            cout << "Podaj liczbę komórek w wierszu o numerze " << i << ": ";
            cin >> kolumny;
            tab1[i] = new int[kolumny];
            tab1_pom[i]=new int [kolumny];
            tab2[i] = new int[kolumny];
            sum[i] = new int[kolumny];
        }

 
        for (int i = 0; i < wiersze; i++) {
            for (int j = 0; j < kolumny; j++) {
                tab1[i][j]=( std::rand() % 52 ) + 1;
            }
        }
        
        for (int i = 0; i < wiersze; i++) {
            for (int j = 0; j < kolumny; j++) {
                cout<<"podaj liczbe dla tab2,dla indeksu "<<"|"<<i<<"|"<<"|"<<j<<"|"<<" :";
                cin>>tab2[i][j];
            }
        }
        
 
        cout<<"\n tab1 przed transpozycja:";
        cout<<endl;
        for (int i = 0; i < wiersze; i++) {
            for (int j = 0; j < kolumny; j++) {
                cout << tab1[i][j] << " ";
            }
            cout<<endl;
        }
        
        for(int i = 0;i<wiersze;i++){
            for(int j = 0;j<kolumny;j++){
                tab1_pom[j][i]=tab1[i][j];
            }
        }
        
        cout<<"\n tab1 po transpozycji:";
        cout<<endl;
        for (int i = 0; i < wiersze; i++) {
            for (int j = 0; j < kolumny; j++) {
                cout << tab1_pom[i][j] << " ";
            }
            cout<<endl;
        }
        
        cout<<"\n tab2:";
        cout<<endl;
        for (int i = 0; i < wiersze; i++) {
            for (int j = 0; j < kolumny; j++) {
                cout << tab2[i][j] << " ";
            }
            cout<<endl;
        }
        
        for (int i = 0; i < wiersze; i++) {
            for (int j = 0; j < kolumny; j++) {
                sum[i][j]=tab1_pom[i][j]+tab2[i][j];
            }
        }
        
        cout<<"\n sum:";
        cout<<endl;
        for (int i = 0; i < wiersze; i++) {
            for (int j = 0; j < kolumny; j++) {
                cout << sum[i][j] << " ";
            }
            cout<<endl;
        }
        
        for (int i = 0; i < wiersze; i++) {
            delete[] tab1[i];
            delete[] tab1_pom[i];
            delete[] tab2[i];
            delete[] sum[i];
        }
        delete[] tab1;
        delete[] tab1_pom;
        delete[] tab2;
        delete[] sum;
    }
};
int main() {
    srand( time( NULL ) );
    klasa kal;
    kal.tablica();
    return 0;
}