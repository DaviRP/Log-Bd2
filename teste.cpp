#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <vector>

using namespace std;

int main(){

    list<string> l;
    list<string>::iterator it;

    l.push_front("1");

    for(it = l.begin();it!=l.end();it++){

        cout<<*it<<endl;

    }

    
   return 0;
}