#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class kal{
    public:
    void fun(){
        int w,k;
        cout<<"podaj wilkosc:";
        cin>>w;
        
        int **tab=new int*[w];
        for(int i = 0;i<w;i++){
            cout<<"podaj ilosc kolumn dla indeksu "<<i<<" :";
            cin>>k;
            tab[i]=new int[k];
        }
        
        for(int i = 0;i<w;i++){
            for(int j = 0;j<k;j++){
                tab[i][j]=rand()%10+1;
            }
        }
        
        cout<<"tab przed zamiana:\n";
        for(int i = 0;i<w;i++){
            for(int j = 0;j<k;j++){
                cout<<tab[i][j]<<" ";
            }
            cout<<endl;
        }
        
        int temp=0;
        for(int i = 0;i<w;i++){
            for(int j = 0;j<k;j++){
                if(i==j){
                   temp=tab[i][j];
                   tab[i][j]=tab[i][w-1-i];
                   tab[i][w-1-i]=temp;
                }
            }
        }
    
        cout<<"\ntab po zamiana:\n";
        for(int i = 0;i<w;i++){
            for(int j = 0;j<k;j++){
                cout<<tab[i][j]<<" ";
            }
            cout<<endl;
        }
        
        for(int i = 0;i<w;i++){
            delete[] tab[i];
        }
        delete[] tab;
    }
};
int main()
{
    srand(time(NULL));
    kal k;
    kal *wsk=&k;
    wsk->fun();
    
    return 0;
}