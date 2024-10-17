#include <iostream>
#include<algorithm>
using namespace std;
class Klasa{
    public:
    bool wartosc(){
        char znak;
        cout<<"czy chcesz zeby tablica byla posortwoana rosnaco (r) czy malejaco (m)?:";
        cin>>znak;
    
        if(znak =='r' || znak == 'R'){
            return true;
        }else if(znak == 'm' || znak == 'M'){
            return false;
        }else{
            cout<<"\nmusisz wpisac r,R lub m,M!!!\n";
        }
        return true;
    };
    void wypelnij(){
        int w;
        cout<<"podaj wilekosc:";
        cin>>w;
        
        int *tab=new int [w];
        
        for(int i = 0;i<w;i++){
            cout<<"podaj liczbe "<<"|"<<i<<"|"<<":";
            cin>>tab[i];
        }
        
        cout<<"\ntablica:\n";
        for(int i = 0;i<w;i++){
            cout<<tab[i]<<" ";
        }
        cout<<"\n";
        if(wartosc()==true){
            sort(tab,tab+w);
            cout<<"\ntablica posortowana rosnaco:\n";
            for(int i = 0;i<w;i++){
                cout<<tab[i]<<" ";
            }
        }else{
            sort(tab,tab+w,greater<int>());
             cout<<"\ntablica posortowana malejaco:\n";
             for(int i = 0;i<w;i++){
                cout<<tab[i]<<" ";
            }
        }
       delete [] tab;
    }
};
int main()
{
   Klasa kal;
   Klasa *wsk;
   wsk=&kal;
   wsk->wypelnij();

    return 0;
}