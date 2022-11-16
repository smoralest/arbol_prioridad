/**
 * \mainpage priorityQueue
 * \author Jhonatan Moreno - Santiago Avila
 * \date Noviembre - 2022
 */
 
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

using namespace std;


template <class T>
class priorityQueue{
			int tam;
			int pos2;
			int espacio;
			int pos;
			T nc;
			T arreglo[];
			 //
	public: priorityQueue(int a){
			T Arreglo[a]; //
			T *Arr = &Arreglo[0]; //
			espacio = a; //*//
			cout<<"Arreglo de tamaño "<<espacio<<" ha sido creado"; //
			cout<<" en el espacio de memoria: "<<Arr<<endl; //
			tam=0;
			pos2= 0;
			pos= 1;
			nc=0;
			
//						cout<<"ndsdsrregloxxx:	"<<nc<<endl;
			}

//			bool isEmptyPriorityQueue();
//			int sizePriorityQueue();
			void insertOnPriorityQueue(T dato); 
		//	void attendPriorityQueue();
//			T printPriorityQueue();
		//	NodoPQ<T> *searchPosition(int);
//			void guardarArreglo ();
//			void organizarArreglo();
//			~priorityQueue();

};
	
//template <class T>
//int priorityQueue<T>::sizePriorityQueue(){
//	return tam;
//}	

//template <class T>
//void  priorityQueue<T>:: guardarArreglo(){
//	cout<<"xxxncc:	"<<nc<<endl;
////	NodoPQ<T> *ncambio2 = new NodoPQ<T>;
//	ncambio2 = cab;
//	arreglo[tam];
//	cout<<"xxx2ncc:	"<<nc<<endl;
//	for(int i = 0; i< tam;i++){
//		cout<<"xxxxxxxxncc:	"<<nc<<"	i:"<<i<<endl;
//		arreglo[i]= ncambio2->info;
////		cout<<arreglo[i]<<endl;
//		ncambio2 = ncambio2->sig;
//	}
//	cout<<"perra:	"<<arreglo[1]<<endl;
//				cout<<"ncccccc:	"<<nc<<endl;
//}	

//template <class T>
//T priorityQueue<T>::printPriorityQueue(){
//				cout<<"ncsssss:	"<<nc<<endl;
////	NodoPQ<T> *aux = new NodoPQ<T>;
////	aux=cab;
////	for(int i = 1; i<= tam;i++){
////	
////		if(aux->pos==lugar){
////			cout<<"Informacion: "<<aux->info<<endl;
////			return aux->info;
////		}else{
////			aux=aux->sig;
////		}
////	}
////	return NULL;
//	guardarArreglo();
//	for(int i = 0; i< tam;i++){
//		cout<<arreglo[i]<<endl;
//	}
//}

//
//template <class T>
//NodoPQ<T> *priorityQueue<T>::searchPosition(int posicion){
//	NodoPQ<T> *aux = new NodoPQ<T>;
//	aux=cab;
//	while(aux->sig!=NULL){
//		if(aux->pos==posicion){
//			return aux;
//		}else{
//			aux=aux->sig;
//		}
//	}
//	return cab;	
//}
	
template <class T>
void priorityQueue<T>::insertOnPriorityQueue(T dato){

	if (tam==0){
		// si no existe nada 
		arreglo[0]=dato; 
		cout<<arreglo[0]<<endl; 
		tam++; 
		cout<<"entro"<<endl;
	}
	if (tam > 0 && tam <= espacio){
		// si se puede ingresar al arreglo 
		  cout<<"espacio: "<<espacio<<"------";
		  arreglo[tam]=dato;
		  cout<<arreglo[tam]<<endl; 
		  tam++;
		
	}else {
		// si no puede meter mas cosas 
		cout<<"espacio lleno"<<endl; 
		
	}
	
}
 

//template <class T>
//void priorityQueue<T>::attendPriorityQueue(){
//			cout<<"arregloxxx222:	"<<arreglo[1]<<endl;
//			cout<<"ncxxx:	"<<nc<<endl;
//
//	if(pos2==0){
//							cout<<"arreglo22222:"<<endl;
//								for(int i = 0; i< tam;i++){
//		cout<<arreglo[i]<<endl;
//	}	
//	nc=140;
////		nc = arreglo[(tam-1)];
////		arreglo[1]=30;
//		cout<<"arregloxxx:	"<<arreglo[1]<<endl;
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
//}

//template <class T>
//void priorityQueue<T>::organizarArreglo(){
//	NodoPQ<T> *ncambio2 = new NodoPQ<T>;
//	ncambio2 = cab;
//	for(int i = 0; i< tam;i++){
//		ncambio2->info= arreglo[i];
//		ncambio2 = ncambio2->sig;
//	}	
//}
#endif

