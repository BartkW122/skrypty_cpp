#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int ilosc=0;
    string name="",haslo="";
    char znak,wer;
    vector<string> name_tab;
    vector<string> haslo_tab;
    
    do{
        cout<<"\nname tab:\n";
        for(int i = 0;i<name_tab.size();i++){
            cout<<name_tab[i]<<" ";
        }
        cout<<"\nhaslo tab:\n";
        for(int i = 0;i<haslo_tab.size();i++){
            cout<<haslo_tab[i]<<" ";
        }
        cout<<"jezeli chcesz sie zalogowac to wpisz (l),jeżeli nie masz konta i chcesz sie zarjestrowac wpisz (r):";
        cin>>wer;
        if(wer=='l' || wer=='L'){
            cout<<"LOGOWANIE:\n";
           
                cout<<"podaj imie:";
                cin>>name;
                cout<<"podaj haslo:";
                cin>>haslo;
            
                for(int i = 0;i<name_tab.size();i++){
                    if(name!=name_tab[i]){
                        
                        cout<<"\nnie ma takigo uzytkownika!!\n";
                        
                    }else if(haslo!=haslo_tab[i]){
                        
                        cout<<"\nnie ma takigo uzytkownika!!\n";
                        while(ilosc<3 && haslo!=haslo_tab[i]){
                            
                            cout<<"podaj haslo:";
                            cin>>haslo;
                            
                            ilosc++;
                            
                            cout<<"proba:"<<ilosc<<"\n";
                            
                            if(ilosc==3 && haslo!=haslo_tab[i]){
                                
                                cout<<"za duzo prob!!!";
                                znak='n';
                                break;
                            }
                            if(haslo==haslo_tab[i]){
                                
                                cout<<"\nzalogowano pomyslnie!!\n";
                                break;
                                
                            }
                        }
                        
                    }else{
                        cout<<"\nzalogowano pomyslnie!!\n";
                        break;
                    }
                }
            ilosc = 0;    
        }else if(wer=='r' || wer=='R'){
            cout<<"REJESTROWANIE:\n";
            
            cout<<"podaj imie:";
            cin>>name;
            cout<<"podaj haslo:";
            cin>>haslo;
          
            name_tab.push_back(name);
            haslo_tab.push_back(haslo);
        }
        cout<<"czy chcesz kontynuowac?(y/n):";
        cin>>znak;
    }while(znak=='y'||znak=='Y');
    
    cout<<"\nname tab:\n";
    for(int i = 0;i<name_tab.size();i++){
        cout<<name_tab[i]<<" ";
    }
    cout<<"\nhaslo tab:\n";
    for(int i = 0;i<haslo_tab.size();i++){
        cout<<haslo_tab[i]<<" ";
    }

    return 0;
}