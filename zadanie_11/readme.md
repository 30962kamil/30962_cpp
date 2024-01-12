1. Deklarujemy klase o nazwie "human"
2. Tworzymy publiczne prawo dostępu w którym zawiera się:
   a) zmienną name typu string
   b) metodę print_all_info() typu void, która wypisuje pewne dane. Posiada również zmienną id_card_number, do której jest ograniczony dostęp, bo nie została zdeklarowana w sekcji publicznej.
3. Tworzymy prywatne prawo dostępu w którym jest zmienna id_card_number typu int.

4. Wynik programu wskazywał, że numberem karty jest liczba -858993460. Numer nie został nigdzie wcześniej zdefiniowany.
5. Efektem wprowadzenia konstruktora jest powiadomienia o powstaniu pustego objektu klasy oraz zastąpienie losowej liczby zerem.
6. Poznajemy dwa pojęcia setter- mutator i getter-akcesor.
,, 
Metody publiczne mogą być wywoływane spoza klasy, czyli na przykład z 
funkcji main.
Metody prywatne mogą być wywoływane tylko z wewnątrz klasy.
Powyższe tyczy się także dostępu do atrybutów obiektu.
"
