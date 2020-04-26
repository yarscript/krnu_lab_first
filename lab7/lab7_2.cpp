#include <iostream>

using namespace std;

struct student {
    int number;
    const char *name;
    bool math;
    bool physic;
    bool english;
};

int main() {
    const int n = 25;
    int i;
    /** Declaimer: all matches are random **/
    student a[n] = {
            {1,  "Elon Musk",          true,  true,  true},
            {2,  "Elvis Presley",      true,  false, true},
            {3,  "Kurt Cobain",        true,  true,  true},
            {4,  "Albert Einstein",    false, false, true},
            {5,  "Neils Bohr",         false, true,  true},
            {6,  "Max Plank",          true,  true,  true},
            {7,  "Nikola Tesla",       true,  true,  true},
            {8,  "Stephen Hawking",    true,  true,  true},
            {9,  "Einstein Albert",    false, true,  true},
            {10, "Steve Jobs",         true,  true,  true},
            {11, "Bill Gates",         true,  true,  false},
            {12, "Johnny Depp",        false, false, true},
            {13, "Johny Cash",         true,  true,  true},
            {14, "Johny Sins",         true,  true,  true},
            {15, "Lana Del Rey",       false, true,  true},
            {16, "Mikhail Gorsheniov", false, true,  false},
            {17, "Lana Rhoades",       true,  true,  true},
            {18, "Johannes Kepler",    true,  false, true},
            {19, "John Kennedy",       false, true,  true},
            {20, "Washington Jorge",   false, true,  true},
            {21, "Fenry Ford",         false, false, true},
            {22, "Enzo Ferrari",       true,  false, false},
            {23, "Leonardo Da Vinci",  true,  true,  true},
            {24, "Sheldon Cooper",     false, true,  false},
            {25, "Winston Churchill",  true,  true,  true}
    };
//    cout << "x" << "\tIì'ÿ                         \tÌàò.\tÔiç.\tÀíãë.\n";
    for (i = 0; i < n; i++) {
        cout
                << a[i].number << "\t"
                << a[i].name << "\t"
                << a[i].math << "\t"
                << a[i].physic << "\t"
                << a[i].english
                << "\n";
    }
    cout << "-------------------------------------" << endl;
//    cout << "Ó÷íi, ÿêi íå çìîãëè âèêîíàòè áiëüø íiæ îäèí ïðåäìåò:\n";
//    cout << "¹" << "\tIì'ÿ\tÌàò.\tÔiç.\tÀíãë.\n";
    for (i = 0; i < n; i++) {
        if ((int) a[i].math + (int) a[i].physic + (int) a[i].english <= 1) {
            cout
                    << a[i].number << "\t"
                    << a[i].name << "\t"
                    << a[i].math << "\t"
                    << a[i].physic << "\t"
                    << a[i].english << "\n";
        }
    }

    cout << "-------------------------------------" << endl;
    return 0;
}