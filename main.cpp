#include <iostream>
#include <set>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
struct Jucator{
    string mNume;
    string mPrenume;
    vector<vector<int>> mCombinatiiJucate;
};
bool comparator(pair<int, int> p1, pair<int, int> p2){
    if(p1.second == p2.second)
        return p1.first < p2.first;
    return p1.second < p2.second;
}
int main() {
    set <int> numere_castigatoare;
    vector <Jucator> jucatori;
    vector <string> jucatori_castigatori;
    char cerinta;
    int nr_maxim_bilete = 0;
    int nr_maxim_ghicite = 0;
    map <int, int> contor_aparitii;
    for(int i = 0; i<6; i++){
        int nr;
        cin >> nr;
        numere_castigatoare.insert(nr);
    }
    cin >> cerinta;
    string nume, prenume;
    while (cin >> nume >> prenume){
        int nr_bilete_jucate = 0;
        vector <vector<int>> combinatii_jucate;
        char spatiu;
        scanf("%c", &spatiu);
        while(spatiu != '\n'){
            nr_bilete_jucate++;
            vector <int> combinatie;
            int nr_ghicite = 0;
            for(int i = 0; i<6; i++) {
                int nr;
                cin >> nr;
                contor_aparitii[nr]++;
                combinatie.push_back(nr);
                if (numere_castigatoare.count(nr)) {
                    nr_ghicite++;
                }
            }
            if(nr_ghicite == 6){
                string nume_intreg;
                nume_intreg = nume + " " + prenume;
                jucatori_castigatori.push_back(nume_intreg);
            }
            if(nr_ghicite > nr_maxim_ghicite){
                nr_maxim_ghicite = nr_ghicite;
            }
            combinatii_jucate.push_back(combinatie);
            scanf("%c", &spatiu);
        }
        Jucator jucator;
        jucator.mNume = nume;
        jucator.mPrenume = prenume;
        jucator.mCombinatiiJucate = combinatii_jucate;
        jucatori.push_back(jucator);
        if(nr_bilete_jucate > nr_maxim_bilete){
            nr_maxim_bilete = nr_bilete_jucate;
        }
    }
    if(cerinta == 'A'){
        int nr_aparitii_maxim = 0;
        int nr_cautat=0;
        for(auto pereche : contor_aparitii){
            if(pereche.second > nr_aparitii_maxim){
                nr_aparitii_maxim = pereche.second;
                nr_cautat = pereche.first;
            }
        }
        cout << nr_cautat <<' '<< nr_aparitii_maxim;
    }
    if(cerinta == 'B'){
        cout << nr_maxim_bilete;
    }
    if(cerinta == 'C'){
        vector <pair<int, int>> perechi;
        for(auto pereche : contor_aparitii){
            perechi.push_back(pereche);
        }
        sort(perechi.begin(), perechi.end(), comparator);
        for (auto pereche : perechi){
            cout << pereche.first << ' ';
        }
    }
    if(cerinta == 'D'){
        cout << nr_maxim_ghicite;
    }
    if(cerinta == 'E'){
        if(jucatori_castigatori.empty()){
            cout << "Niciun castigator";
        }
        else{
            sort(jucatori_castigatori.begin(), jucatori_castigatori.end());
            for(string nume_castigator : jucatori_castigatori){
                cout << nume_castigator << endl;
            }
        }
    }
    return 0;
}
