#include "priorityQueue.h"

/**
 * \mainpage priorityQueue
 * \author Jhonatan Moreno - Santiago Avila
 * \date Noviembre - 2022
 */

int main() {
  priorityQueue <int> box(10);
  
  	string estado = box.isPriorityQueueFull() ? "Está llena" : "Aun hay espacio";
  	cout<<"Esta lleno el arreglo: "<<estado<<endl;
	//Insertamos los elementos en el orden de las diapositivas
	box.insertOnPriorityQueue(60);
  	box.insertOnPriorityQueue(80);
  	box.insertOnPriorityQueue(20);
  	box.insertOnPriorityQueue(90);
  	box.insertOnPriorityQueue(50);
  	box.insertOnPriorityQueue(40);
  	box.insertOnPriorityQueue(30);
  	box.insertOnPriorityQueue(70);
  	box.insertOnPriorityQueue(55);
  	box.insertOnPriorityQueue(45);
  	//Imprimimos como quedo
  	cout<<"\t\tArreglo inicial: "<<endl;
  	box.printPriorityQueue();

	// Insertamos por fuera del rango
	box.insertOnPriorityQueue(32);
	
	//Atendemos el árbol
	box.attendPriorityQueue();
	
	box.insertOnPriorityQueue(32);
	// Imprimimos el nuevo resultado
	box.printPriorityQueue();
	
	
  	 estado = box.isPriorityQueueFull() ? "Si esta lleno" : "Aun hay espacio";
  	cout<<"Esta lleno el arreglo: "<<estado<<endl;
//  box.attendPriorityQueue();
//   box.printPriorityQueue();
//  box.insertOnPriorityQueue(70);
//   box.insertOnPriorityQueue(100);
//  box.printPriorityQueue();
  return 0;
}
