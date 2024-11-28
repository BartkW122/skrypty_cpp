#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class zadanie {
public:
    void fun() {
        int w, k;
        cout << "Podaj wielkosc: ";
        cin >> w;

        int **tab1 = new int*[w];
        int **tab2 = new int*[w];
        int **sum = new int*[w];

        for (int i = 0; i < w; i++) {
            cout << "Podaj ilosc kolumn dla indeksu " << "|" << i << "|: ";
            cin >> k;

            tab1[i] = new int[k];
            tab2[i] = new int[k];
            sum[i] = new int[k];
        }

      

        for (int i = 0; i < w; i++) {
            for (int j = 0; j < k; j++) {
                tab1[i][j] = rand() % 20 + 1;
                tab2[i][j] = rand() % 20 + 1;
            }
        }

        cout << "\ntab1:\n";
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < k; j++) {
                cout << tab1[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "\ntab2:\n";
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < k; j++) {
                cout << tab2[i][j] << " ";
            }
            cout << "\n";
        }

        for (int i = 0; i < w; i++) {
            for (int j = 0; j < k; j++) {
                sum[i][j] = tab1[i][j] + tab2[i][j];
            }
        }

        cout << "\nsum:\n";
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < k; j++) {
                cout << sum[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "\npowtorzenia:\n";
        for (int i = 0; i < w; i++) {
            for (int j = 0; j < k; j++) {
                for (int x = i; x < w; x++) {
                    for (int y = (x == i ? j + 1 : 0); y < k; y++) {
                        if (sum[i][j] == sum[x][y]) {
                            cout << sum[i][j] << " ";
                        }
                    }
                }
            }
        }

        
        for (int i = 0; i < w; i++) {
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
    srand(time(NULL));
    zadanie z;
    z.fun();
    return 0;
}
