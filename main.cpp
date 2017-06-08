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
    void printHistorico(){
        list<double>::iterator it;
        for(it=this->valores.begin();it!=this->valores.end();it++){
            cout<< *it <<","; 
        }
        cout<< "\n"<<endl;
    }
    void lineReading(string s){
        this -> nome=string.at(0);
    }
};

    
int main(){

    ifstream logFile("log.txt");
    ifstream values("entrada.txt");

    list<string> logList;
    list<variaveis> varList;
    list<string>::iterator it;

    
    
    if(!logFile.is_open()){
        cout<<"erro"<<endl;
    }

    string linha;
    
    while(logFile >> linha){
        logList.push_front(linha);
    }

    while (values >> linha){
        
    }



    logFile.close();


   
}