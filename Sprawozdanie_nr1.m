%%
%OR
close all; clear all; clc;

%stworzenie pojedynczego neuronu o zakresach [0,1] [0,2]
net=newp([0 1;0 2],1);
%stworzenie dw�ch wektor�w, odpowiadaj�cych wszystkim mo�liwym wej�ciom 
%bramki logiczniej OR
A=[0 0 1 1];
B=[0 1 0 1];
%po��czenie ich w jedn� macierz
P=[A;B];
%stworzenie wektora  opisuj�cego warto�ci wynikowe odpowiadaj�ce bramce 
%logicznej NOR dla powy�szych wektor�w A i B
T=[0 1 1 1];

%inicjalizacja sieci perceptronowe z losow� warto�ci� wag
net=init(net);
%wywo�anie symulacji przed treningiem
Przed_treningiem=sim(net,P)
%przetestowanie dzia�ania sieci dla innych wektor�w
test1=sim(net,[1 0 1 1;0 0 1 1])
test2=sim(net,[0 1 0 0;0 0 0 0])
%ustawienie 15 epok do okre�lenia treningu sieci
net.trainParam.epochs=15;
%uruchomienie treningu
net=train(net,P,T);
%symulacja sieci neuronowej dla warto�ci okre�lonych po treningu
Po_treningu=sim(net,P)
%ponowne przetestowanie dla tych samych wektor�w, co poprzednio
test1po=sim(net,[1 0 1 1;0 0 1 1])
test2po=sim(net,[0 1 0 0;0 0 0 0])

