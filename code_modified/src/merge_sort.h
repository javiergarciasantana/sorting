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

#ifndef MERGE_SORT_H
#define MERGE_SORT_H

template<class Key>
class MergeSort : public SortMethod<Key> {

 public:
  MergeSort(const std::vector<Key>& sequence, unsigned seq_size, bool trace = false) {
    SortMethod<Key>::seq = sequence;
    SortMethod<Key>::size = seq_size;
    SortMethod<Key>::tracing = trace;
    Sort();
  }

  void Sort() {
    Msort(SortMethod<Key>::seq, 0, SortMethod<Key>::size - 1, SortMethod<Key>::tracing);
  }


};



#endif