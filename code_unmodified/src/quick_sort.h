// AUTOR: Javier Garcia Santana
// FECHA: 10/4/2023
// EMAIL: alu0101391663@ull.edu.es
// VERSION: 5.0
// ASIGNATURA: Algoritmos y Estructuras de Datos Avanzadas
// PRÁCTICA Nº: 5
// COMENTARIOS: Fichero .h en el que se instancia la
//              clase MergeSort 
//
// COMPILACIÓN: make

#include <algorithm> 

#include "sort_method.h"
#include "library.h"

#ifndef QUICK_SORT_H
#define QUICK_SORT_H

template<class Key>
class QuickSort : public SortMethod<Key> {

 public:
  QuickSort(const std::vector<Key>& sequence, unsigned seq_size, bool trace = false) {
    SortMethod<Key>::seq = sequence;
    SortMethod<Key>::size = seq_size;
    SortMethod<Key>::tracing = trace;
    Sort();
  }

  void Sort() {
    quickSort(SortMethod<Key>::seq, 0, SortMethod<Key>::size - 1);
  }

  int quickSort(std::vector<Key>& sec, int ini, int fin) {
    int i = ini ; 
    int f = fin ;
    int p = sec[(i+f)/2] ;
    while (i <= f){
      while (sec[i] < p) {i++ ;}
      while (sec[f] > p) {f-- ;}
      if (i <= f) {
        std::swap(sec[i], sec[f]);
        i++ ; 
        f-- ;
      }
    }
    if (SortMethod<Key>::tracing) {
      PrintSeq(); 
    }
    if (ini < f) {quickSort(sec, ini, f) ; }
    if (i < fin) {quickSort(sec, i, fin) ;}
  }
  
  void PrintSeq() {
    std::cout << "seq sorted by QuickSort: {";
    for (int i = 0; i < SortMethod<Key>::size; ++i) {
      std::cout << SortMethod<Key>::seq.at(i) << " ";
    }
    std::cout << "}" << std::endl;
  }
};



#endif