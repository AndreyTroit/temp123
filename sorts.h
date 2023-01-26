#ifndef _sorts_h_
#define _sorts_h_
#include <iostream>
#include <time.h>

using namespace std;

void Swap(int& a, int& b){
    int s = a;
    a = b;
    b = s;
}

void randomFill(int* ar, int size){
    srand(time(nullptr));
    for(int i = 0; i < size; i++){
        ar[i] = rand() % 100;
    }
}

void showMass(int* ar, int size){
	for(int i = 0; i < size; i++){
		cout << ar[i] << ' ' << endl;
	}
}

int getMinEl(int* ar, int size){
	int res = ar[0];
	int ind = 0;
	for(int i = 0; i < size; i++){
		if(ar[i] < res){
			res = ar[i];
			ind = i;
		}
	}
	return res;
}

int getMaxEl(int* ar, int size){
	int res = ar[0];
	int ind = 0;
	for(int i = 0; i < size; i++){
		if(ar[i] > res){
			res = ar[i];
			ind = i;
		}
	}
	return res;
}

void bubbleSort(int* ar, int size){
    	for(int i = 0; i < size; i++){
        	for(int j = 0; j < size - 1 - i; j++){
            		if (ar[j] > ar[j+1]){
                		Swap(ar[j], ar[j+1]);
            		}
        	}
    	}
}

void InsertSort(int* ar, int size){
	for(int i = 1; i < size; i++){
		int el = ar[i];
		int j = i-1;                    
	  	while(ar[j] > el && j >= 0){
		 	ar[j + 1] = ar[j];
	       		j--;
	    	}
	  	ar[j + 1] = el;
	}
}

void CountSort(int* ar, int size){
	int numMass[100];
	for(int i = 0; i < 100; i++){
		for(int j = 0; j < size; j++){
			if(ar[j] == i){
				numMass[i] += 1;
		    	}
	    	}	
    	}
	int newMass[size];
	int index = 0;
	for(int i = 0; i < 100; i++){
		for(int j = numMass[i]; j > 0; j--){
			newMass[index] = numMass[i];
			index++;
		}
	}
	ar = newMass;
}

#endif /*_sorts_h_*/
