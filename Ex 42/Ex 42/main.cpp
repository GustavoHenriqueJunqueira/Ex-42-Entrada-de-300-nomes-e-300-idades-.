//
//  main.cpp
//  Ex 42
//
//  Created by Gustavo Henrique Furtado Junqueira on 31/05/16.
//  Copyright © 2016 Gustavo Henrique Furtado Junqueira. All rights reserved.
//

#include <iostream>
#include <locale.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");
    int idade, cont = 0;
    string nome[300];
    string nr[300];
     cout<<"Programa para entrada de 300 nomes e 300 idades sendo exibido os maiores de 21 anos.\n";
    
    for (int i = 0; i < 300; i++) {
        cout << "\nDigite o seu " << i + 1 <<"º nome:\n";
        cin >> nome[i];
        cout<<"\nDigite a  "<<i + 1<<"º idade:\n";
        cin >> idade;
        if (idade >= 21) {
            nr[cont++] = nome[i];
        }
    }
    
    cout << "número de pessoas maior de 21 anos são: " << cont << "\n";
    
    for (int i = 0; i < cont; i++) {
        cout << "nome: " << nr[i] << "\n";
    }
    return 0;
}
