#include <iostream>
#include <pthread.h>
#include <mutex>
#include <stdio.h>
#include <unistd.h>
#include <time.h>
#include <curses.h>
#include <thread>
 
using namespace std;
 
int ile_0;
pthread_mutex_t mutex_0;
 
uint32_t*bufor_0=(uint32_t*) malloc(ile_0*sizeof(int));
 
struct Blok_0
{
    uint32_t head;
    uint32_t thaly;
    double x;
    double y;
};
 
void*Wczytaj_0(void*argumenty)
{
    Blok_0*q=(Blok_0*)argumenty;
    cout<<"Podaj ile = ";
    cin>>ile_0;
    cout<<endl;
    q->head++;
    if(q->head==ile_0)
        q->head=0;
    if(q->head==q->thaly)
        exit(-1);
    for(q->head=0;q->head<ile_0;q->head++)
    {
        cout<<"Wyraz ["<<q->head<<"] = ";
        cin>>bufor_0[q->head];
    }
    pthread_mutex_unlock(&mutex_0);
    cout<<endl;
    return 0;
}
 
void*Odczytaj_0(void*argumenty)
{
    Blok_0*q=(Blok_0*)argumenty;
    pthread_mutex_lock((&mutex_0));
    q->thaly++;
    if(q->thaly==ile_0)
        q->thaly=0;
    if(q->head==q->thaly)
        exit(-1);
    cout<<"ODCZYT WATKU_0"<<endl;
    cout<<endl;
    float x;
    cout<<"Podaj x =";
    cin>>x;
    cout<<endl;
    for(q->thaly=0;q->thaly<ile_0;q->thaly++)
    {
        cout<<"wyraz ["<<q->thaly<<"] = "<<x*bufor_0[q->thaly]<<endl;
    }
    cout<<endl;
    return 0;
}
int main(int argc, const char * argv[]){
 
 
    
    pthread_t watek_0;
    pthread_t watek_1;
    Blok_0 obiekt_0;
    pthread_create(&watek_0,NULL,Wczytaj_0,&obiekt_0);
    pthread_join(watek_0,NULL);
    pthread_detach(watek_0);
    pthread_create(&watek_0,NULL,Odczytaj_0,&obiekt_0);
    pthread_join(watek_0,NULL);
    pthread_detach(watek_0);
}