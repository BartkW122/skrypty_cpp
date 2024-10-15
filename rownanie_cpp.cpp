#include <iostream>
using namespace std;
class rownanie1{
    public:
    double x1;
    double y1;
    double c1;
};
 
class rownanie2{
    public:
    double x2;
    double y2;
    double c2;
};
rownanie1 rown1;
rownanie2 rown2;
 
long dodawanie_liczb(){
    cout<<"podaj liczbe dla x do 1 rownania:";
    cin>>rown1.x1;
    cout<<"podaj liczbe dla y do 1 rownania:";
    cin>>rown1.y1;
    cout<<"podaj liczbe dla c do 1 rownania:";
    cin>>rown1.c1;

    cout<<"podaj liczbe dla x do 2 rownania:";
    cin>>rown2.x2;
    cout<<"podaj liczbe dla y do 2 rownania:";
    cin>>rown2.y2;
    cout<<"podaj liczbe dla c do 2 rownania:";
    cin>>rown2.c2;
    return 0;
}
 
void wyswietl(){
    cout<<rown1.x1<<" x "<<" + "<<rown1.y1<<" y "<<"="<<rown1.c1<<"\n";
    cout<<rown2.x2<<" x "<<" + "<<rown2.y2<<" y "<<"="<<rown2.c2<<"\n";
};
 
void obliczanie(){
    double W=(rown1.x1*rown2.y2)-(rown2.x2*rown1.y1);
    double Wx=(rown1.c1*rown2.y2)-(rown2.c2*rown1.y1);
    double Wy=(rown1.x1*rown2.c2)-(rown2.x2*rown1.c1);
    double x=Wx/W;
    double y=Wy/W;
    cout<<"W:"<<W<<"\n";
    cout<<"Wx:"<<Wx<<"\n";
    cout<<"Wy:"<<Wy<<"\n";
    if(x==0){
        cout<<"y:"<<y<<"\n";
    }else if(y==0){
        cout<<"x:"<<x<<"\n";
    }else if(x!=0 && y!=0){
        cout<<"x:"<<x<<"\n";
        cout<<"y:"<<y<<"\n";
    }
}
 
int main()
{   
    dodawanie_liczb();
    wyswietl();
    obliczanie();
    return 0;
}