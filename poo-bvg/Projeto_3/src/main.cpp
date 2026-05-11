#include <iostream>
#include <vector>
#include <string>
#include "Contato.h"

using namespace std;

int main() {
    vector<Contato> contatos;
    contatos.reserve(3);

    contatos.emplace_back("Empresa Alpha Ltda",   "+55 (11) 91234-5678");
    contatos.emplace_back("Beta Tecnologia S.A.", "+55 (21) 98765-4321");
    contatos.emplace_back("Gamma Solutions ME",   "+55 (85) 99876-5432");

    cout << "======================================" << endl;
    cout << "    CRM Enterprise - Modulo B2B       " << endl;
    cout << "======================================" << endl;

    for (int i = 0; i < (int)contatos.size(); i++) {
        cout << "\n[ Contato #" << (i + 1) << " ]" << endl;
        contatos[i].imprimirNome();
        contatos[i].imprimirTelefone();
    }

    cout << "\n======================================" << endl;
    cout << "  Encerrando modulo - liberando memoria" << endl;
    cout << "======================================" << endl;

    return 0;
}