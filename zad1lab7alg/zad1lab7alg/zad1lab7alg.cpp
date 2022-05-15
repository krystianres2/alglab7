#include <iostream>
#include <list>
using namespace std;
class Lista {
private:
    list<int>liczby = { 1,2,3,4,3,6,7,8,9,10 };
    int n;
    int ile = 0;
public:

    void liczba(){
        cout << "Podaj liczbe: " << endl;
        cin >> n;
    }
    void wyszukiwanie() {
        for (list<int>::iterator it = liczby.begin(); it != liczby.end(); it++) {
            if (*it == n) {
                ile++;
               
            }      
        }if (ile > 0) {
            cout << "Tak" << endl;
            cout << "Ile: " << ile << endl;
        }
    }
};

int main()
{
    Lista l1;
    l1.liczba();
    l1.wyszukiwanie();

}

