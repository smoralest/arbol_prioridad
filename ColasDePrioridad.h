#include <iostream>
#ifndef COLASDEPRIORIDAD
#define COLASDEPRIORIDAD


using namespace std; 


template <class T> 
class colaPrio {
	T *Arr;
  int tam, PosAct;

public:
  colaPrio(int tam2) {
    Arr= new T[tam2 ]; // +1 ? 
    PosAct = 1;
    for (int i = 0; i < tam2; i++)
      Arr[i] = 0;
    tam = tam2;
  };
  ~colaPrio() { delete Arr; }
  bool insertar(int);
  int atender();
  void imprimirArreglo();
  bool colaPrio_lleno();
};

template <class T> 
bool  colaPrio <T>::insertar(int dato) {
  int auxPos = PosAct;
  if(colaPrio_lleno())
    return false;
  else if (auxPos == 1) {
    Arr[PosAct] = dato;
    PosAct++;
  } else {
    while ( auxPos / 2 != 0 &&  dato > Arr[auxPos / 2] ) {
      Arr[auxPos] = Arr[auxPos / 2];
      auxPos /= 2;
    }
    Arr[auxPos] = dato;
    PosAct = PosAct == tam ? 0 : PosAct + 1;
  }
  return true;
}

template <class T> 
int colaPrio <T>::atender() {
  int vatender; 
  int ultimov; 
  int auxPos = 1;
  if (Arr[1] == 0)
    return 0;
  else {
    vatender = Arr[1]; 
    Arr[1] = 0; 
    if (PosAct == 0) PosAct = tam;
    else PosAct--;
    ultimov = Arr[PosAct]; 
    Arr[PosAct] = 0;
    while(auxPos * 2 <= tam
          && (ultimov < Arr[auxPos * 2] || ultimov < Arr[auxPos * 2 + 1])){
      if (ultimov < Arr[auxPos * 2]) {
        Arr[auxPos] = Arr[auxPos * 2];
        auxPos = auxPos * 2;
      } else {
        Arr[auxPos] = Arr[auxPos * 2 + 1];
        auxPos = auxPos * 2 + 1;
      }
      Arr[auxPos] = 0;
    }
    Arr[auxPos] = ultimov;
    return vatender;
  }
}

template <class T> 
void colaPrio <T>::imprimirArreglo() {
  cout << endl;
  for (int i = 1; i <= tam; i++)
    cout << "Posicion " << i << ":  \t" << Arr[i] << endl;
}

template <class T> 
bool colaPrio <T>::colaPrio_lleno() {
 return PosAct == 0;
  }
#endif 
