// AUTOR: Javier Garcia Santana
// FECHA: 10/4/2023
// EMAIL: alu0101391663@ull.edu.es
// VERSION: 5.0
// ASIGNATURA: Algoritmos y Estructuras de Datos Avanzadas
// PRÁCTICA Nº: 5
// COMENTARIOS: Fichero .h en el que se declaran metodos plantilla
//              para su posterior uso en otras clases
//
// COMPILACIÓN: make

#include <algorithm>  
#include <stack>  

#include "sort_method.h"

#ifndef LIBRARY_H
#define LIBRARY_H

template<class Key>
void Insert(std::vector<Key> &sec, int i, Key x) {
  sec[-1] = x;
  int j = i;
  while ( x < sec[j - 1] && j > 0){
    sec[j] = sec[j - 1];
    j--;
  } 
  sec[j] = x;
} 

template<class Key>
void baja(int i, std::vector<Key> &sec, unsigned n) {
  int h, h1, h2;
  while ((2 * i) + 1 < n) {
    h1 = (2 * i) + 1;
    h2 = h1 + 1;
    if (h1 == n || sec[h1] > sec[h2]) {
      h = h1;
    } else {
      h = h2;
    }
    if (sec[i] < sec[h]) {
      std::swap(sec[i], sec[h]);
    } else {
      break;
    }
    i = h;
  }
} 

template<class Key>
void deltasort(int delta, std::vector<Key>& sec, unsigned size) {
  int j, x;
  for (int i = delta; i < size; i++){
    x = sec[i] ;
    j = i ;
    while ((j >= delta) && (x < sec[j - delta])){
      sec[j] = sec[j - delta] ;
      j = j - delta ;
    } 
    sec[j] = x ;
  } 
}
  
template<class Key>
void Mezcla(std::vector<Key>& sec, Key ini, Key cen, Key fin, unsigned size) { 
  std::vector<Key> result;
  std::stack<Key> pila_1, pila_2;

  for (int i = cen; i >= ini; --i) {
    pila_1.push(sec[i]);
    //std::cout << "pila_1: " << sec[i] << " ";
  }
  //std::cout << std::endl;
  for (int j = fin; j > cen; --j) {
    pila_2.push(sec[j]);
    //std::cout << "pila_2: " << sec[j] << " ";
  }
  //std::cout << std::endl;
  while(!pila_1.empty() && !pila_2.empty()) {
    if (pila_1.top() < pila_2.top()) {
      result.push_back(pila_1.top());
      pila_1.pop();
    } else {
      result.push_back(pila_2.top());
      pila_2.pop();
    }
  }
  while (!pila_1.empty()) {
    result.push_back(pila_1.top());
    pila_1.pop();
  }
  while (!pila_2.empty()) {
    result.push_back(pila_2.top());
    pila_2.pop();
  }
  int m = 0;
  for (int k = ini; k <= fin; ++k) {
    sec[k] = result[m];
    ++m;
  }
} 

template<class Key>
void countSort(std::vector<Key>& sec, unsigned size, int exp) {
  int output[size]; // output array
  int i, count[10] = { 0 };
 
  // Store count of occurrences in count[]
  for (i = 0; i < size; i++) {
    count[(sec[i] / exp) % 10]++;
  }
  // Change count[i] so that count[i] now contains actual
  //  position of this digit in output[]
  for (i = 1; i < 10; i++) {
    count[i] += count[i - 1];
  }
  // Build the output array
  for (i = size - 1; i >= 0; i--) {
    output[count[(sec[i] / exp) % 10] - 1] = sec[i];
    count[(sec[i] / exp) % 10]--;
  }
  // Copy the output array to arr[], so that arr[] now
  // contains sorted numbers according to current digit
  for (i = 0; i < size; i++) {
    sec[i] = output[i];
  }
}

template<class Key>
int getMax(const std::vector<Key>& sec, unsigned size) {
  int mx = sec[0];
    for (int i = 1; i < size; i++) {
      if (sec[i] > mx) {
        mx = sec[i];
      }
    }
   return mx;
}



#endif