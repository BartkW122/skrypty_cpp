#include <iostream>
using namespace std;
class klasa{
    public:
    void maciez(){
        int w,k,sum;
        cout<<"podaj wilekosc:";
        cin>>w;
        cout<<"\n wielkosc:"<<w<<"\n";
        int **tab=new int*[w];
        int *przek=new int[w];
        for (int i = 0; i < w; i++) {
            cout << "Podaj liczbę komórek w wierszu o numerze " << i << ": ";
            cin >> k;
            tab[i] = new int[k];
          
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
        
        for(int i = 0;i<w;i++){
            przek[i]=tab[i][i];
        }
        cout<<"\nliczby pod i nad przekatna:\n";
        for(int i = 0;i<w;i++){
            for(int j = 0;j<k;j++){
                if(przek[i]!=tab[i][j]){
                    cout<<tab[i][j]<<",";
                    sum+=tab[i][j];
                }
            }
            cout<<"\n";
        }
        cout<<"\nsuma:"<<sum;
        for (int i = 0; i < w; i++) {
            delete[] tab[i];
            
        }
        delete[] tab;
        delete[] przek;
    }
};
int main()
{
    klasa kal;
    kal.maciez();
    return 0;
}