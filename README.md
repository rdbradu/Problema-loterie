# Problema-loterie
Loteria Romana v-a angajat sa scrieți un program care analizează biletele jucate de clienți la 6/49.

Scrieți un program care citește de la tastatură combinația extrasă (câștigătoare), tipul de analiză și numele persoanelor care au jucat și combinațiile de numere alese și afișează rezultatul, conform cerințelor de mai jos.

Date de intrare Pe prima linie se va gasi combinația extrasă (câștigătoare), de a doua linie cerința, sub forma unui caracter literă mare A, B, C, D sau E. Pe liniile urmatoare, până la EOF, se vor găsi numele și prenumele jucătorilor urmate cel puțin o combinații.Combinațiile nu sunt separate unele de celelalte, dar fiecare grup consecutiv de 6 numere reprezintă o combinație jucată. Numerele combinațiilor sunt separate prin unul sau mai multe whitespaces.

Exemplu date de intrare:

28 12 19 30 31 14 A Emilian Torje 23 3 5 35 17 26 17 41 24 23 7 20 25 21 43 9 31 15 Neculai Raducioiu 43 33 8 7 40 9 49 35 33 43 21 17 Ionut Mironescu 4 29 46 2 42 25 7 34 49 26 20 43 22 8 47 14 27 20 49 3 33 29 10 32 44 36 3 24 37 42 Mihaita Sandulescu 26 12 45 20 42 9 43 41 20 2 37 18 7 30 47 25 5 49 Felix Vladu 22 30 16 26 15 23 31 8 46 17 15 45 Cerințe În funcție de litera corespunzătore tipului de analiză:

A - 6p. Afișați pe ecran numărul care apare de cele mai multe ori în combinațiile jucătorilor și de câte ori apare. Dacă sunt mai multe numere care apar de același număr (maxim) de ori, afișați-l pe cel mai mic.

Exemplu date de ieșire (pentru intrarea de mai sus):

20 5 Numărul maxim de apariții pentru un număr este 5. Dintre toate numerele care apar de 5 ori, 20 este cel mai mic.

B - 6p. Afisati pe ecran numarul maxim de bilete pe care il cumpara o persoană.

Exemplu date de ieșire (pentru intrarea de mai sus):

5 Ionut Mironescu a cumpărat numărul maxim de bilete: 5.

C - 6p. Sortați crescător, în funcție de numărul aparițiilor, numerele de la 1 la 49, iar dacă două numere apar de același număr de ori, sortați-le crescator in funcție de valoarea lor. Daca un numar nu apare deloc, se considera ca apare de 0 ori. Afișați aceste valori, pe o singură linie, separate prin spațiu.

Exemplu date de ieșire (pentru intrarea de mai sus):

1 6 11 13 19 28 38 39 48 4 10 12 14 16 18 27 32 34 36 40 44 2 5 21 22 24 29 30 31 35 37 41 45 46 47 3 8 9 15 23 25 33 42 7 17 26 49 20 43 D - 6p. Afișați pe ecran numărul maxim de numere ghicite de un jucător într-o combinație.

Exemplu date de ieșire (pentru intrarea de mai sus):

1 E - 6p. Afișați pe ecran numele persoanelor care au câștigat (au ghicit toate cele 6 numere), ordonate alfabetic fiecare pe câte o linie, sau, dacă nu există niciun câștigător, afișați Niciun castigator

Exemplu date de ieșire (pentru intrarea de mai sus):

Niciun câștigător
