
#include <iostream>
using namespace std;
class tablice{
    public:
        void sumowanie(){
            
            int wymiar,kolumny,kolumny2;
           
            
            cout<<"podaj wymiar:";
            cin>>wymiar;
            int *** tab=new int ** [wymiar];
            int *** tab2=new int ** [wymiar];
            int *** suma=new int ** [wymiar];
             
             for(int i = 0;i<wymiar;i++){
                    cout << "Podaj liczbę komórek w wierszu o numerze (kolumny) " << i << ": ";
                    cin >> kolumny;
                    tab[i]=new int*[kolumny];
                    tab2[i]=new int*[kolumny];
                    suma[i]=new int*[kolumny];
             }
             
            for(int i = 0;i<wymiar;i++){
                for(int j = 0;j<kolumny;j++){
                        cout << "Podaj liczbę komórek w wierszu o numerze (kolumny2) " << i << ": ";
                        cin >>kolumny2;
                        tab[i][j]=new int[kolumny2];
                        tab2[i][j]=new int[kolumny2];
                        suma[i][j]=new int[kolumny2];
                }
            }
             
             
            for(int i = 0;i<wymiar;i++){
                for(int j = 0;j<kolumny;j++){
                    for(int y = 0 ;y<kolumny2;y++){
                        cout<<"podaj liczbe (tab) "<<i<<"|"<<j<<"|"<<y<<":";
                        cin>>tab[i][j][y];
                    }
                }
            }
            
            for(int i = 0;i<wymiar;i++){
                for(int j = 0;j<kolumny;j++){
                    for(int y = 0 ;y<kolumny2;y++){
                        cout<<"podaj liczbe (tab2) "<<i<<"|"<<j<<"|"<<y<<":";
                        cin>>tab2[i][j][y];
                    }
                }
            }
            cout<<"\ntab:";
            cout<<"\n";
            for(int i = 0;i<wymiar;i++){
                for(int j = 0;j<kolumny;j++){
                    for(int y = 0 ;y<kolumny2;y++){
                        cout<<tab[i][j][y]<<" ";
                    }
                }
                 cout<<endl;
            }
            
            cout<<"\ntab2:";
            cout<<"\n";
            for(int i = 0;i<wymiar;i++){
                for(int j = 0;j<kolumny;j++){
                    for(int y = 0 ;y<kolumny2;y++){
                        cout<<tab2[i][j][y]<<" ";
                    }
                }
                 cout<<endl;
            }
            
            for(int i = 0;i<wymiar;i++){
                for(int j = 0;j<kolumny;j++){
                    for(int y = 0 ;y<kolumny2;y++){
                        suma[i][j][y]=tab[i][j][y]+tab2[i][j][y];
                    }
                }
                 cout<<endl;
            }
            
            
            cout<<"\nsuma:";
            cout<<"\n";
            for(int i = 0;i<wymiar;i++){
                for(int j = 0;j<kolumny;j++){
                    for(int y = 0 ;y<kolumny2;y++){
                        cout<<suma[i][j][y]<<" ";
                    }
                }
                 cout<<endl;
            }
            
            for(int i = 0;i<wymiar;i++){
                delete[] tab[i];
                delete[] tab2[i];
                delete[] suma[i];
            }
            for(int i = 0;i<wymiar;i++){
                for(int j = 0;j<kolumny;j++){
                    delete[] tab[i][j];
                    delete[] tab2[i][j];
                    delete[] suma[i][j];
                }
            }
            delete[] tab;
            delete[] tab2;
            delete[] suma;
        }
        
};

int main()
{
    tablice TAB;
    TAB.sumowanie();

    return 0;
}