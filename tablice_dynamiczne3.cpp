

#include <iostream>
using namespace std;
class kalsa{
    public:
    void szukanie(){
        int w;
        char p;
        cout<<"podaj wielkosc:";
        cin>>w;
      
        char *tab=new char[w];
        char *tab2=new char[w];
    
        
        for(int i = 0;i<w;i++){
            cout<<"podaj char dla tablicy tab:";
            cin>>tab[i];
        }
        
        for(int i = 0;i<w;i++){
            cout<<"podaj char dla tablicy tab2:";
            cin>>tab2[i];
        }
        
       
        
        cout<<"\ntab:";
        for(int i = 0;i<w;i++){
            cout<<tab[i]<<" ";
        }
        
        cout<<"\ntab2:";
        for(int i = 0;i<w;i++){
            cout<<tab2[i]<<" ";
        }
        
        cout<<"\npowtarzajace sie elementy:";
        for(int i = 0 ;i<w;i++){
            for(int j = 0 ;j<w;j++){
                if(tab[i]==tab2[j]){
                
                    cout<<tab[i]<<" ";
                }
            }
        }
     
        
        delete[] tab;
        delete[] tab2;
    
    }
};

int main(){
    kalsa k;
    k.szukanie();

    return 0;
}