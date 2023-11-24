Przykład 1:
funkcja nadpisuje zmienną i podaje nadpisaną liczbe.
nadpisana liczba dziala do momentu dzialania funkcji.
po przestaniu dzialania funkcji, liczba pokazuje pierwotną wartość.

Przykład 2:
Zostaje zdeklarowany identyfikator "number" w funkcji.
Dzięki temu można w funkcji cout'owac jakąś zmienną bez konieczności wcześniejszego nadawania jej wartości (o ile w programie głównym została nadana).
Mimo że w funkcji nadawana jest wartosc zmiennej 21, to program nie nadpisuje tego i wyswietla ponownie liczbe nadaną w głównym programie.

**Przykład 3:
**użycie znaku & powoduje możliwość zmiany oryginalnej zmiennej "number" a nie tylko jej kopię.
program pokazuje najpierw 7 a potem 21.

Wniosek:
Do różnych potrzeb mogą się przydać te trzy zastosowania.

Boolean:
kod oddaje liczbe do funkcji, funkcja sprawdza, czy ta liczba oraz ta liczba zaokrąglona w dół są sobie równe. Jeśli tak, daje 1 czyli prawda. Jeśli są rózne od siebie to daje 0 czyli fałsz.

**Tablice zmiennych Array:
**funkcja powoduje wypisanie na ekranie imion po kolei podanych w programie głównym, a na końcu nadpisuje imię podane w names_array[1]. Co powoduje wyskoczenie imienia Barbara, a nie jak wczesniej myslalem Bartosz.
