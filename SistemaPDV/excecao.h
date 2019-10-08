#ifndef EXCESSAOH
#define EXCESSAOH
#include<iostream>
using namespace std;

class ExcCL : public exception
{
    public:
        ExcessaoCliente(string mensagem)
        {
            this->mensagem = mensagem;
        }
        virtual const char* what() const throw()
        {
            return mensagem.c_str();
        }
        virtual ~ExcCL() throw(){}
    private:
        string mensagem;
};

class ExcRP : public exception
{
    public:
        ExcRP(string mensagem)
        {
            this->mensagem = mensagem;
        }
        virtual const char* what() const throw()
        {
            return mensagem.c_str();
        }
        virtual ~ExcRP() throw(){}
    private:
        string mensagem;
};

#endif
