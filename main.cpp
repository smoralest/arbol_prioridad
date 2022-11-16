#include <iostream>
#include "priorityQueue.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std; 
int main(int argc, char** argv) {
	priorityQueue<int> test(6);
	
	test.insertOnPriorityQueue(60);
	test.insertOnPriorityQueue(12);
	test.insertOnPriorityQueue(20);
	
	test.insertOnPriorityQueue(90);
	test.insertOnPriorityQueue(50);
	test.insertOnPriorityQueue(40);
		test.insertOnPriorityQueue(30);
	test.insertOnPriorityQueue(70);
	test.insertOnPriorityQueue(55);
	test.insertOnPriorityQueue(45);
/*	
	


	*/
	
//	for(int i = 1; i <= test.sizePriorityQueue();i++){
//		test.printPriorityQueue();
////	}
//	cout<<"---------------------"<<endl;
////		test.guardarArreglo();	
//	test.attendPriorityQueue();
//		cout<<"2---------------------"<<endl;
////	test.printPriorityQueue();
//		cout<<"3---------------------"<<endl;
	return 0;
}
