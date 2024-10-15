#include <iostream>
using namespace std;
class sumaowanie {
public:
    void sum_tab() {
        double **tab1,**tab2,**sum;
        int kolumny, wiersze;
        cout << "Podaj liczbę wierszy: ";
        cin >> wiersze;
        tab1 = new double *[wiersze];
        tab2 = new double *[wiersze];
        sum = new double *[wiersze];
        for (int i = 0; i < wiersze; i++) {
            cout << "Podaj liczbę komórek w wierszu o numerze " << i << ": ";
            cin >> kolumny;
            tab1[i] = new double[kolumny];
            tab2[i] = new double[kolumny];
            sum[i] = new double[kolumny];
        }

 
        for (int i = 0; i < wiersze; i++) {
            for (int j = 0; j < kolumny; j++) {
                cout<<"podaj liczbe do tab1:";
                cin>>tab1[i][j];
            }
        }
        for (int i = 0; i < wiersze; i++) {
            for (int j = 0; j < kolumny; j++) {
                cout<<"podaj liczbe do tab2:";
                cin>>tab2[i][j];
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
                sum[i][j]=tab1[i][j]+tab2[i][j];
            }
        }
         cout<<"\n suma:";
         cout<<endl;
        for (int i = 0; i < wiersze; i++) {
            for (int j = 0; j < kolumny; j++) {
                cout << sum[i][j] << " ";
            }
           cout<<endl;
        }
        for (int i = 0; i < wiersze; i++) {
            delete[] tab1[i];
            delete[] tab2[i];
            delete[] sum[i];
        }
        delete[] tab1;
        delete[] tab2;
        delete[] sum;
    }
};
int main() {
    sumaowanie SUM;
    SUM.sum_tab();
    return 0;
}