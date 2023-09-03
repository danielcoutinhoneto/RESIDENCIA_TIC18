#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main(void)
{
    long int li = LONG_MAX;
    unsigned int ui = 0xffffffff;

    

    cout << "A variável li que é long int, inicia em: "  << li << endl; 
    cout << "A variável uli que é unsigned int, inicia em: " << ui << endl; 

    li = ui;
    cout << "o valor da atribuido li = uli que é long int, fica: " << li << endl;

    ui = li;
    cout << "o valor da atribuido  uli = li que é unsigned int, fica: " << ui << endl;
    
    return 0;

    /*
    Resposta:
            Neste caso específico, não houve problemas porque o valor máximo atribuido é representável tanto como long int quanto como unsigned int. 
            Se li fosse negativo, a conversão para unsigned int faria com que ui armazenasse um valor grande, resultando em um comportamento indefinido.
    
    
    */
}