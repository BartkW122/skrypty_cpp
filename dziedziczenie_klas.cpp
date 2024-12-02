#include <iostream>
using namespace std;
class Bazowa{
    public:
    virtual void wynik(){
        cout<<"wynik dzailania to: ...";
    }
};
class kal1:public Bazowa{
    public:
    void wynik(){
        int a,b,sum;
        cout<<"podaj a:";
        cin>>a;
        cout<<"podaj b:";
        cin>>b;
        sum=a+b;
        cout<<"suma (a+b):"<<sum<<endl;
    }
};
class kal2:public Bazowa{
    public:
    void wynik(){
        int a,b,odejmowanie;
        cout<<"podaj a:";
        cin>>a;
        cout<<"podaj b:";
        cin>>b;
        odejmowanie=a-b;
        cout<<"odejmowanie (a-b):"<<odejmowanie<<endl;
    }
};
class kal3:public Bazowa{
    public:
    void wynik(){
        int a,b,mnozenie;
        cout<<"podaj a:";
        cin>>a;
        cout<<"podaj b:";
        cin>>b;
        mnozenie=a*b;
        cout<<"mnozenie (a*b):"<<mnozenie<<endl;
    }
};
int main()
{
   Bazowa **tab=new Bazowa*[3];
   tab[0]=new kal1();
   tab[1]=new kal2();
   tab[2]=new kal3();
    
    for(int i = 0;i<3;i++){
        tab[i]->wynik();
    }
    return 0;
}