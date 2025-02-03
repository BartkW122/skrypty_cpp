#include <iostream>
#include <string>
#include <map>
using namespace std;

class Osoba;
class Kolumna;

struct Person {
    string nazwisko;
    int wiek;
};

class Baza {
public:
    friend class Kolumna;
    friend class Osoba;
    
    friend void dodanie_do_bazy(Baza&, Kolumna&, Osoba&);
    friend void zadanie(Kolumna&, Osoba&);
};

class Kolumna {
public:
    map<string, Person> kolumna;

    friend void utowrzenie_osoby(Kolumna&, Osoba&);
};

class Osoba {
public:
    string imie;
    string nazwisko;
    int wiek;

    void utowrzenie_osoby(Kolumna& k, Osoba& o) {
        char znak;

        do {
            cout << "podaj imie: "; cin >> imie;
            cout << "podaj nazwisko: "; cin >> nazwisko;
            cout << "podaj wiek: "; cin >> wiek;
            
            k.kolumna[imie] = {nazwisko, wiek};
            
            cout << "czy chcesz dalej dodwac osoby (y/n): "; cin >> znak;

        } while (znak == 'y');
    }
    
    void dodanie_do_bazy(Baza& baza, Kolumna& k, Osoba& o) {
        for (const auto& person : k.kolumna) {
            cout << "Imię: " << person.first << ", Nazwisko: " << person.second.nazwisko << ", Wiek: " << person.second.wiek << "\n";
        }
    }

    void zadanie(Kolumna& k, Osoba& o) {
        char znak2;
        char zad;
        do {
            cout << "podaj litere: "; cin >> zad;
            cout << endl;
            for (const auto& person : k.kolumna) {
                string naz = person.second.nazwisko;
                cout << "Nazwisko: " << naz << "\n";
                
                if (naz[0] == zad) {
                    cout << "Wyszukane Nazwiska: " << naz << "\n";
                }
            }
            cout << "Czy chcesz kontynuować wyszukiwanie (y/n): "; cin >> znak2;
        } while (znak2 == 'y');
    }
};

int main() {
    Baza baza;
    Kolumna k;
    Osoba o;

    o.utowrzenie_osoby(k, o);
    o.dodanie_do_bazy(baza, k, o);
    o.zadanie(k, o);

    return 0;
}
