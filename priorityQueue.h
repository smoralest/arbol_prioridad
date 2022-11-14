/**
 * \mainpage priorityQueue
 * \author Jhonatan Moreno - Santiago Avila
 * \date Noviembre - 2022
 */
 
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

using namespace std;
template <class T>
struct NodoPQ{T info;
	NodoPQ<T> *sig;
	int pos;
};

template <class T>
class priorityQueue{NodoPQ<T>*cab = new NodoPQ<T>;
			int tam;
	public: priorityQueue(){
			cab=NULL;
			tam=0;
			}
			bool isEmptyPriorityQueue();
			int sizePriorityQueue();
			void insertOnPriorityQueue(T dato); 
			bool deleteFromPriorityQueue(int pos);
			T printPriorityQueue(int);
			void sortPriorityQueue();
			NodoPQ<T> *searchPosition(int);
			
//			~priorityQueue();

};
	
template <class T>
int priorityQueue<T>::sizePriorityQueue(){
	return tam;
}	
	
template <class T>
T priorityQueue<T>::printPriorityQueue(int lugar){
	NodoPQ<T> *aux = new NodoPQ<T>;
	aux=cab;
	for(int i = 1; i<= tam;i++){
	
		if(aux->pos==lugar){
			cout<<"Informacion: "<<aux->info<<endl;
			return aux->info;
		}else{
			aux=aux->sig;
		}
	}
	return NULL;
}


template <class T>
NodoPQ<T> *priorityQueue<T>::searchPosition(int posicion){
	NodoPQ<T> *aux = new NodoPQ<T>;
	aux=cab;
	while(aux->sig!=NULL){
		if(aux->pos==posicion){
			return aux;
		}else{
			aux=aux->sig;
		}
	}
	return cab;	
}
	
template <class T>
void priorityQueue<T>::insertOnPriorityQueue(T dato){
	NodoPQ<T> *nn = new NodoPQ<T>;
	NodoPQ<T> *ncambio = new NodoPQ<T>;	
	NodoPQ<T> *ncambio2 = new NodoPQ<T>;
	nn->info=dato;
	if(tam==0){
		nn->sig = NULL;
		cab = nn;
		tam++;
		nn->pos=tam;
	}else{
	NodoPQ<T> *aux = new NodoPQ<T>;
	aux=cab;
	while(aux->sig!=NULL){
		aux=aux->sig;
	}
	aux->sig=nn;
	nn->sig=NULL;
	tam++;
	nn->pos=tam;
	int auxPos = tam;
	while(auxPos > 0){
		//hacemos el cambio
		if(nn->info >= (searchPosition(auxPos/2)->info)){
			if(searchPosition(auxPos/2) == cab){
				ncambio->info = nn->info;
				nn->info = cab->info;
				cab->info = ncambio->info ;
			}else{
				ncambio->info = nn->info;
				nn->info = searchPosition(auxPos/2)->info;
				searchPosition(auxPos/2)->info = ncambio->info;	
			}
		
		}else if(ncambio2->info > (searchPosition(auxPos/2)->info)){
			
			if(searchPosition(auxPos/2) == cab){
				ncambio->info = ncambio2->info;
				ncambio2->info = cab->info;
				cab->info = ncambio->info ;
			}else{
				ncambio->info = nn->info;
				nn->info = searchPosition(auxPos/2)->info;
				searchPosition(auxPos/2)->info = ncambio->info;	
			}		
		}
		ncambio2 = searchPosition(auxPos/2);
		auxPos = auxPos/2;
	}
		

		
		
	}
	
	
}
 

	
	
	
#endif

