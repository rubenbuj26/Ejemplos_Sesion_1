#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
    char c;
    bool test;
    cout << "Pulse teclas numéricas. Acabe pulsando ESC\n";
    
    do {
        c = getchar();
        test = ((c >= '0') && (c <= '9'));
        
        if(test)
            cout << c << " pulsado.\n";
        
    } while(c != 27); // 27 es el código ASCII para la tecla ESC

    return 0;
}
