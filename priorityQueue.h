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
			int pos2;
			T arreglo [];
			int pos;
			T nc;
	public: priorityQueue(){
			cab=NULL;
			tam=0;
			pos2= 0;
			pos= 1;
			nc=0;
						cout<<"ndsdsrregloxxx:	"<<nc<<endl;
			}

			bool isEmptyPriorityQueue();
			int sizePriorityQueue();
			void insertOnPriorityQueue(T dato); 
			void attendPriorityQueue();
			T printPriorityQueue();
			NodoPQ<T> *searchPosition(int);
			void guardarArreglo ();
			void organizarArreglo();
//			~priorityQueue();

};
	
template <class T>
int priorityQueue<T>::sizePriorityQueue(){
	return tam;
}	

template <class T>
void  priorityQueue<T>:: guardarArreglo(){
	cout<<"xxxncc:	"<<nc<<endl;
	NodoPQ<T> *ncambio2 = new NodoPQ<T>;
	ncambio2 = cab;
	arreglo[tam];
	cout<<"xxx2ncc:	"<<nc<<endl;
	for(int i = 0; i< tam;i++){
		cout<<"xxxxxxxxncc:	"<<nc<<"	i:"<<i<<endl;
		arreglo[i]= ncambio2->info;
//		cout<<arreglo[i]<<endl;
		ncambio2 = ncambio2->sig;
	}
	cout<<"perra:	"<<arreglo[1]<<endl;
				cout<<"ncccccc:	"<<nc<<endl;
}	
template <class T>
T priorityQueue<T>::printPriorityQueue(){
				cout<<"ncsssss:	"<<nc<<endl;
//	NodoPQ<T> *aux = new NodoPQ<T>;
//	aux=cab;
//	for(int i = 1; i<= tam;i++){
//	
//		if(aux->pos==lugar){
//			cout<<"Informacion: "<<aux->info<<endl;
//			return aux->info;
//		}else{
//			aux=aux->sig;
//		}
//	}
//	return NULL;
	guardarArreglo();
	for(int i = 0; i< tam;i++){
		cout<<arreglo[i]<<endl;
	}
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
 

template <class T>
void priorityQueue<T>::attendPriorityQueue(){
			cout<<"arregloxxx222:	"<<arreglo[1]<<endl;
			cout<<"ncxxx:	"<<nc<<endl;
//
//	if(pos2==0){
//							cout<<"arreglo22222:"<<endl;
//								for(int i = 0; i< tam;i++){
//		cout<<arreglo[i]<<endl;
//	}	
	nc=140;
//		nc = arreglo[(tam-1)];
//		arreglo[1]=30;
		cout<<"arregloxxx:	"<<arreglo[1]<<endl;
//			nc=140;
//							cout<<"arregloxxxx:"<<endl;
//								for(int i = 0; i< tam;i++){
//		cout<<arreglo[i]<<endl;
//	}
//		arreglo[tam-1] = NULL;
//
//		arreglo[0] = NULL;
//		pos2++;
//		cout<<"hola1"<<endl;
//
//		pos++;
//
//		attendPriorityQueue();
//	}
//	else{
//		cout<<"hola2"<<endl;
//		T nhermano = arreglo[(pos*2)-1];
//		T nhermano2 = arreglo[((pos*2)+1)-1];
//		T comparacion;
//		
//							cout<<"nhermano:	"<<nhermano<<endl;
//							cout<<"nhermano2:	"<<nhermano2<<endl;
//		if(nhermano > nhermano2){
//	
//			comparacion = nhermano;
//								cout<<"compaaracion1	"<<comparacion<<endl;
//			pos=(pos*2)-1;
//		}else{
//			
//			comparacion = nhermano2;
//						cout<<"compaaracion2:	"<<comparacion<<endl;
//			pos= ((pos*2)+1)-1;
//		}
//		if(comparacion> nc){
//			cout<<"compaaracion:	"<<comparacion<<endl;
//			arreglo[pos-1]= comparacion;
//			attendPriorityQueue();
//		}else{
//			cout<<"nc:	"<<nc<<endl;
////			arreglo[pos-1]= nc;
//				cout<<"Hello there!"<<endl;
//				for(int i = 0; i< tam;i++){
//					cout<<arreglo[i]<<endl;
////					organizarArreglo();
//				}
//		}	
//	}	
}

template <class T>
void priorityQueue<T>::organizarArreglo(){
	NodoPQ<T> *ncambio2 = new NodoPQ<T>;
	ncambio2 = cab;
	for(int i = 0; i< tam;i++){
		ncambio2->info= arreglo[i];
		ncambio2 = ncambio2->sig;
	}	
}
#endif

