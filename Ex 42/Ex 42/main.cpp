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
    
    int idade[300], cont = 0, soma=0 ;
    string nome;
    string nr[300];
    
     cout<<"Programa para entrada de 300 nomes e 300 idades sendo exibido os maiores de 21 anos.\n";
    
    for (int i = 0; i < 300; i++) {
        cout << "\nDigite o seu " << i + 1 <<"º nome:\n";
        cin >> nome;
        cout<<"\nDigite a  "<<i + 1<<"º idade:\n";
        cin >> idade[i];
        
        soma = soma+idade[i];
        
        if (idade[i] >= 21) {
            nr[cont++] = nome;
        }
    }
    
    
    cout<<"A soma das idades das pessoas é;\n"<<soma<<"\n";
    
    
    
    cout << "número de pessoas maior de 21 anos são: " << cont << "\n";
    
    for (int i = 0; i < cont; i++) {
        cout << "nome: " << nr[i] << "\n";
    }
    return 0;
}
