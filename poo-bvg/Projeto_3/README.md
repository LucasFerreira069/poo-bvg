# Projeto 3 — CRM Enterprise: Módulo de Contatos B2B

Módulo de gestão de contatos corporativos desenvolvido em C++ com separação de interface e implementação, uso do ponteiro `this`, destrutor com log de memória e container dinâmico `std::vector` (STL).

## Estrutura de Arquivos

```
Projeto_3/
├── docs/
│   └── Contato_UML.png       # Diagrama de Classes UML
├── src/
│   ├── Contato.h             # Declaração da classe Contato
│   ├── Contato.cpp           # Implementação: construtor, destrutor e métodos
│   └── main.cpp              # Ponto de entrada: std::vector e iteração
└── README.md
```

## Como Compilar

### Usando GCC (g++)

Navegue até a pasta `Projeto_3` e execute:

```bash
g++ src/main.cpp src/Contato.cpp -o crm_app
```

### Executar

```bash
./crm_app
```

### Saída esperada

```
======================================
    CRM Enterprise - Modulo B2B
======================================

[ Contato #1 ]
Nome: Empresa Alpha Ltda
Telefone: +55 (11) 91234-5678

[ Contato #2 ]
Nome: Beta Tecnologia S.A.
Telefone: +55 (21) 98765-4321

[ Contato #3 ]
Nome: Gamma Solutions ME
Telefone: +55 (85) 99876-5432

======================================
  Encerrando modulo - liberando memoria
======================================
LOG: Contato [Gamma Solutions ME] desalocado da memoria.
LOG: Contato [Beta Tecnologia S.A.] desalocado da memoria.
LOG: Contato [Empresa Alpha Ltda] desalocado da memoria.
```

> Os destrutores são chamados automaticamente em ordem inversa ao sair do escopo do `main`.

## Conceitos Utilizados

| Conceito | Onde aparece |
|---|---|
| Separação `.h` / `.cpp` | `Contato.h` + `Contato.cpp` |
| `#pragma once` (include guard) | `Contato.h` |
| Ponteiro `this->` | Construtor em `Contato.cpp` |
| Destrutor com log | `~Contato()` em `Contato.cpp` |
| `std::vector` + `push_back` | `main.cpp` |
| Iteração com índice | Laço `for` em `main.cpp` |
| `using namespace std` | `main.cpp` |