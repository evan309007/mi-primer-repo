#include <iostream>
using namespace std;

int ar[2][2][3] = { {{1,2,3} , {4,5,6} },{ {7,8,9} ,{10,11,12} }};

int main() {
    
    cout << "  === Arreglo de tres Dimensiones ===\n" << endl;
    
    cout << "               ┌─────────┐\n";
    for(int i=0; i<2; i++) {
        for (int j=0; j<2; j++){
            
            for(int k=0;k<3;k++){
                cout << "     posicion:  "  "[" << i << "]"   "["<< j <<"]" "[" << k << "]   valor: " << ar[i][j][k] << endl;
            }
        }
    }
    cout << "               └─────────┘\n";
    cout<<"\n programa finalizado con éxito ........"<<endl;
    
    return 0;
}
