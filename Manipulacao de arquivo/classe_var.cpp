#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class _var{
public:
    string variavel;
    int n_var;
    _var *pilha;
    _var ();
    _var(string);
    _var & operator =(const _var &outro);
    int if_var_array(_var *, int, string);
};

_var::_var()
	:n_var(0), pilha(NULL){
	this->variavel.empty();
	}
	
_var::_var(string x)
	:pilha(NULL), n_var(0),variavel(x){}

_var& _var::operator= (const _var &recebe)//recebe uma variavel para ir para o vetor de funcao ou variavel
{
    _var *aux = new _var;
    _var *percorre_pilha;
    aux->variavel = recebe.variavel;
    aux->pilha = NULL;
    percorre_pilha = this->pilha;
    while (percorre_pilha->pilha != NULL){
        percorre_pilha = percorre_pilha->pilha;
    }
    percorre_pilha->pilha = aux;
    this->n_var++;
    return *this;
}

int if_var_array (_var *vet, int size_array, string new_string){//insercao de variavel no vetor de variaveis
    int i=0;
    for(i = 0 ; i < size_array ; i++){
        if(!vet[i].variavel.compare(new_string))
            return 1;
    }
    vet[size_array].variavel = new_string;
    return 0;
}
