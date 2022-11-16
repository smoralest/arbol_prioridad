#include <iostream>
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

/**
 * \mainpage priorityQueue
 * \author Jhonatan Moreno - Santiago Avila
 * \date Noviembre - 2022
 */

using namespace std; 


template <class T> 
class priorityQueue{
	T *Arr;
  int tam, PosAct;

public:
  priorityQueue(int tam2) {
    Arr= new T[tam2 ]; // +1 ? 
    PosAct = 1;
    for (int i = 0; i < tam2; i++)
      Arr[i] = 0;
    tam = tam2;
  };
  ~priorityQueue() { delete Arr; }
  bool insertOnPriorityQueue(T);
  T attendPriorityQueue();
  void printPriorityQueue();
  bool isPriorityQueueFull();
};

template <class T> 
bool  priorityQueue <T>::insertOnPriorityQueue(T dato) {
  int auxPos = PosAct;
  if(isPriorityQueueFull()){
  	cout<<"\nNo es posible agregar el elemento -> "<<dato<<endl;
	return false;  	
  }
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
T priorityQueue <T>::attendPriorityQueue() {
  int vattendPriorityQueue; 
  int ultimov; 
  int auxPos = 1;
  if (Arr[1] == 0)
    return 0;
  else {
    vattendPriorityQueue = Arr[1]; 
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
    return vattendPriorityQueue;
  }
}

template <class T> 
void priorityQueue <T>::printPriorityQueue() {
  cout <<"Impresión: "<< endl;
  cout<<" [ ";
  for (int i = 1; i <= tam; i++){
  	cout <<  Arr[i];
  	if(i<=tam-1)
  		cout<<" , ";
  	else if(!i<=tam)
  		cout<<" ]";
  }
//    cout << "(" << i <<":"<<  Arr[i] <<") - ";
	cout<<endl<<endl;
   
}

template <class T> 
bool priorityQueue <T>::isPriorityQueueFull() {
 return PosAct == 0;
  }
  
#endif 
