#include "ColasDePrioridad.h"

////Hanna vatenderlentina Sarmiento Márquez - 20192020105
// Juan Esteban Velásquez - 20201020171

int main() {
  colaPrio <int> mon(10);

  mon.insertar(40);
  mon.insertar(80);
  mon.insertar(70);
  mon.insertar(90);
  mon.insertar(50);
  mon.insertar(20);
  mon.insertar(30);
  mon.insertar(60);
  mon.insertar(55);
  mon.insertar(45);
  mon.imprimirArreglo();

  if(mon.colaPrio_lleno()){
  	cout << "YA SE USARON TODAS LAS POSICIONES DEFINIDAS" << endl;
  }else{
  	cout << "NO SE HAN USADO TODAS LAS POSICIONES DEFINIDAS" << endl;
  }
  
  if (mon.insertar(32))
    cout << "Se agrego el 32" << endl;
  else
    cout << "No se pudo agregar el numero 32" << endl;
  mon.imprimirArreglo();
  mon.atender();
  mon.imprimirArreglo();
  mon.atender();
   mon.imprimirArreglo();
  mon.insertar(70);
   mon.insertar(100);
  mon.imprimirArreglo();
  return 0;
}
