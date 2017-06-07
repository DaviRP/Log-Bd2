#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <vector>

using namespace std;

class variaveis{

    string nome;
    list<double> valores;

    variaveis(string nome, double valor){
        this->nome=nome;
        valores.push_front(valor);

    }
    void attValores(double valor){
        valores.push_front(valor);
    }
};

int main(){

    ifstream logFile("log.txt");
    ifstream values("entrada.txt");

    list<string> logList;
    list<string> varList;
    list<string>::iterator it;

    
    
    if(!logFile.is_open()){
        cout<<"erro"<<endl;
    }

    string linha;
    
    while(logFile >> linha){
        logList.push_front(linha);
    }

    while (varList >> linha){
            varList.push_back(linha);        
    }

     for(it = varList.begin();it!=varList.end();it++){

        cout<<*it<<endl;

    }
    logFile.close();


   
}