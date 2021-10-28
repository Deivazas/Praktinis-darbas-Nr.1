https://leetcode.com/problems/intersection-of-two-arrays-ii/

Problema.

Duoti du masyvai, atspausdinti masyva, kuriame yra sutampantys skaičiai. Kiekvienas elementas rezultate turi
būti atspaustas tiek kartų kiek jų yra pirmame ir antrame masyve. Rezultatas gali būti atspausdintas bet kokia tvarka.

Analizė.

Įvestis yra pirmo ir antro masyvo dydis, bei masyvų elementai, o išvestis yra naujas masyvas su elementais sutampamčiais
iš pirmo ir antro masyvo.

Algoritmo konstravimas/projektavimas.

1.Įvesti dviejų masyvų dydį, bei jų elementus.

2.Naudojamas ciklas cikle For kad antrasis masyvo elementas patikrintu
  pirmąjį elementą su pirmo masyvo visais elementais.

3.Funkcija if naudojama patikrinti ar elementai sutampa, jei taip juos išsaugo.

4.Paskutinis For ciklas naudojamas, kad galėtu paimti masyvo tam tikrą elementą,
  šiuo atveju sutampančius ir patalpintu į naują masyvą.

5.Įvykdžius 4 žingsnį i++ naudojamas, kad sistema tikrinų pirmo masyvo sekantį elementą.