#include <iostream>
#include <list>
using namespace std;

class Lista {
private:
    list<int>liczby1 = { 1,2,3,4,5 };
    list<int>liczby2 = { 6,7,8,9,10 };
    list<int>liczby3;
    list<int>::iterator it1 = liczby1.begin();
    list<int>::iterator it2 = liczby2.begin();
    list<int>::iterator it3 = liczby3.begin();
    int i=0,j=0,k=0;
public:
    void merge() {
        while (i < liczby1.size() && j < liczby2.size()) {
            if (*it1 < *it2) {
                *it3++ = *it1++;
                k++; i++;
            }
            else {
                *it3++ = *it2++;
                k++; j++;
            }
        }
        while (i < liczby1.size()) {
            *it3++ = *it1++;
            k++; i++;
        }
        while (j < liczby2.size()) {
            *it3++ = *it2++;
            k++; j++;
        }
    }
    void wyswietl() {
        for (it3 = liczby3.begin(); it3 != liczby3.end(); it3++) {
            cout << *it3 << endl;
        }

    }

};

int main()
{
    Lista l1;
    l1.merge();
    l1.wyswietl();

}//nie działa

