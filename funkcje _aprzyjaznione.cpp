#include <iostream>
using namespace std;
class Prostokat;
class Punkt{
    int x,y,z;
public:
    Punkt(int=0,int=0,int=0);
    void wczytaj();
    friend void spr(Punkt pkt,Prostokat p);
};

class Prostokat{
    int x,y,z,szerokosc,wysokosc,wypuklosc;
public:
    Prostokat(int=0,int=0,int=0,int=1,int=1,int=1);
    void wczytaj();
    friend void spr(Punkt pkt,Prostokat p);
};

Punkt::Punkt(int xx,int yy,int zz){
    x=xx;
    y=yy;
    z=zz;
}
void Punkt::wczytaj(){
    cout<<"Wspolzedne\n";
    cout<<"podaj x: ";cin>>x;
    cout<<"podaj y: ";cin>>y;
    cout<<"podaj z: ";cin>>z;
}

Prostokat::Prostokat(int xx,int yy,int zz,int s,int w,int wp){
    x=xx;
    y=yy;
    z=zz;
    szerokosc=s;
    wysokosc=w;
    wypuklosc=wp;
}

void Prostokat::wczytaj(){
    cout<<"Wielkosc Protokata\n";
    cout<<"podaj x lewego dolnego naroznika: ";cin>>x;
    cout<<"podaj y lewego dolnego naroznika: ";cin>>y;
    cout<<"podaj z lewego dolnego naroznika: ";cin>>z;
    cout<<"podaj szerokosc: ";cin>>szerokosc;
    cout<<"podaj wysokosc: ";cin>>wysokosc;
    cout<<"podaj wypuklosc: ";cin>>wypuklosc;
}

void spr(Punkt pkt,Prostokat p){
    if((pkt.x>=p.x) && (pkt.x<=p.x+p.szerokosc) && (pkt.y>=p.y) && (pkt.y<=p.y+p.wysokosc) && (pkt.z>=p.z) && (pkt.z<=p.z+p.wypuklosc)){
        cout<<"\n Punkt nalezy do prostokata";
    }else{
        cout<<"\n Punkt nie nalezy do prostokata";
    }
}
int main()
{
    Punkt pkt1;
    
        pkt1.wczytaj();
        
    Prostokat p1;
    
        p1.wczytaj();
        
    spr(pkt1,p1);
    return 0;
}