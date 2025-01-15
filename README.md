# Agenda de Contatos em C++ com Qt Creator

## Descrição do Projeto
Este projeto é uma aplicação de agenda de contatos desenvolvida em C++ utilizando o Qt Creator. A aplicação foi projetada para ser simples, intuitiva e eficiente, oferecendo funcionalidades de gerenciamento de contatos com segurança e praticidade.

## Funcionalidades Principais
- **Tela de Login:**
  - Proteção de acesso aos dados dos contatos.
  - Apenas usuários autenticados podem acessar a agenda.

- **CRUD de Contatos:**
  - Criação, leitura, atualização e deleção de contatos.
  - Integração com SQLite para armazenamento local dos dados.

- **Barra de Pesquisa:**
  - Permite buscar contatos de forma rápida e eficiente.
  - Filtros de busca com base no nome ou outros critérios.

## Tecnologias Utilizadas
- **Linguagem:** C++
- **Framework:** Qt (utilizando o Qt Creator como IDE)
- **Banco de Dados:** SQLite

## Como Executar o Projeto

### Pré-requisitos
1. **Qt Creator:** Certifique-se de que o Qt Creator está instalado. Pode ser baixado em [Qt Downloads](https://www.qt.io/download-qt-installer).
2. **Compilador:** Um compilador compatível com C++ (como MinGW ou MSVC).

### Passos para Execução
1. Clone este repositório:
   ```bash
   git clone <https://github.com/matheuspx/contact-manage.git>
   cd agenda-contatos
   ```
2. Abra o Qt Creator e carregue o arquivo `.pro` do projeto.
3. Configure o perfil de compilação e certifique-se de que o banco de dados SQLite está configurado corretamente.
4. Compile e execute o projeto diretamente pelo Qt Creator.

## Estrutura do Projeto
- **/src:** Contém os arquivos fonte (C++).
- **/ui:** Contém os arquivos de interface do usuário (Qt Designer).
- **/db:** Banco de dados SQLite utilizado pela aplicação.

## Autor
**Matheus Henri**  
Desenvolvedor apaixonado por criação de soluções em C++ e design de interfaces intuitivas.  
[GitHub](https://github.com/matheuspx) | [LinkedIn](https://www.linkedin.com/in/matheus-henri-alcantara/)


