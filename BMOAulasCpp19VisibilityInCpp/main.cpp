//
//  main.cpp
//  BMOAulasCpp19VisibilityInCpp
//
//  Created by Breno Medeiros on 08/06/21.
//

#include <iostream>
#include <string>

//1. Private [1:49], apenas esta classe e sua classe amiga/friend podem acessar atributos Privados
//2. Protect [3:20], apenas esta classe e sua subclasse podem acessar os atributos de Protect
//3. Public  [3:56], tudo pode acessar atributos públicos


class Entidade {
private:                          // Em [1:49], apenas esta classe e sua classe amiga/friend podem acessar atributos Privados
    int X, Y;
    void Print() {
        
    }

protected:                        // Em [3:20], apenas esta classe e sua subclasse podem acessar os atributos de Protect
    int xProtected, yProtected;
    void PrintProtected() {
        
    }
    
public:                           // Em [3:56], tudo pode acessar atributos públicos
    Entidade() {
        X=0;
        Print();
    }
};



class Jogador:public Entidade {
public:
    
};


int main(int argc, const char * argv[]) {
    // insert code here...
    
    Entidade e;
    //Descomentar uma das 3 linha abaixo causa erro, pois o escopo da funcao main() não consegue enxergar coisas privadas de outro escopo
    //e.X=2;
    //e.Print();
    //e.PrintProtected();
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
