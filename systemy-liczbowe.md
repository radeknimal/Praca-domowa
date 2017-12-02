systemy liczbowe
================

system dwojkowy (BIN)
---------------------

system bazujacy na dwoch cyfrach - 0 oraz 1
liczby zapisuje sie jako kolejne potegi liczby 2
ostatnie miejsce to 2^0, poprzednie 2^1, wczesniejsze 2^2 itd

system dziesietny (DEC)
-----------------------

uzywany popularnie przez ludzi na calym swiecie
bazuje na 10 cyfrach
na ostatnim miejscu zapisywana jest cyfra oznaczajaca jednosci
na przedostatnio dziesiatki
na wczesniejszym - setki
itd.

system szesnastkowy (HEX)
-------------------------

uzywany do przedstawienia zapisu binarnego w krotszej formie
8 bitow pozwala na zapisanie 256 stanow, co w HEX zjamuje tylko 2 znaki - dlatego bajty najcesciej przedstawia sie w formie zapisu HEX
HEX wykorzystuje 10 cyfr oraz litery od A do F w celu zapisania znakow od 0 do 15 (czyli lacznie 16 znakow)
podobnie jak w innych systemach zapis czyta sie od konca

konwersje pomiedzy systemami liczbowymi
=======================================

konwersja DEC do BIN
--------------------

dana liczbe dzielimy przez 2 z reszta i zapisujemy reszte w kolumnie
wynik ponownie dzielimy przez 2 itd az dojdziemy do 1
jedynke spiujemy do kolumny i odczytujemy ciag 1 i 0 od dolu

konwersja BIN do DEC
--------------------

odczytujemy wartosc liczby od konca i wymnazamu ostatnie miejsce przez 2^0, przedostatnie przez 2^1, wczesniejsce przez 2^2 itd
wynik sumujemy

konwersja HEX do BIN
--------------------

kazdy znak HEX zapisujemy w jego wartosci BIN po kolei

konwersja BIN do HEX
--------------------

liczbe w BIN dzielimy od konca na pakiety po 4 bity
jezeli na koncu (czyli na poczatku liczby) zabraknie znakow, uzupelniamy zerami
kazdej czworce znakow przypisujemy jego wartosc w HEX
zapisujemy wynik




