#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <map>
#include <string>
#include "Livro.h"
#include "Membro.h"

class Biblioteca {
public:
    // Métodos para carregar dados
    void carregarLivros(const std::string& nomeArquivo, std::map<std::string, Livro>& livros);
    void carregarMembros(const std::string& nomeArquivo, std::map<string, Membro>& membros);

    // Métodos para registrar
    void registrarLivro(const Livro& livro);
    void registrarMembro(const Membro& membro);

    // Métodos para gravar dados
    void gravarLivros(const std::string& nomeArquivo) const;
    void gravarMembros(const std::string& nomeArquivo) const;

    // Métodos para listar
    void listarLivros() const;
    void listarMembros() const;

    // Métodos de empréstimo e devolução
    void emprestarLivro(const std::string& isbn, const int idMembro);
    void devolverLivro(const std::string& isbn, const int idMembro);

private:
    std::map<std::string, Livro> livros; // Mapa de livros, com ISBN como chave
    std::map<int, Membro> membros;       // Mapa de membros, com ID como chave
};

#endif // BIBLIOTECA_H
