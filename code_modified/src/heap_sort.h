// AUTOR: Javier Garcia Santana
// FECHA: 10/4/2023
// EMAIL: alu0101391663@ull.edu.es
// VERSION: 5.0
// ASIGNATURA: Algoritmos y Estructuras de Datos Avanzadas
// PRÁCTICA Nº: 5
// COMENTARIOS: Fichero .h en el que se instancia la
//              clase HeapSort 
//
// COMPILACIÓN: make

#include "sort_method.h"
#include "library.h"

#ifndef HEAP_SORT_H
#define HEAP_SORT_H

template<class Key>
class HeapSort : public SortMethod<Key> {

 public:
  HeapSort(const std::vector<Key>& sequence, unsigned seq_size, bool trace = false) {
    SortMethod<Key>::seq = sequence;
    SortMethod<Key>::size = seq_size;
    SortMethod<Key>::tracing = trace;
    Sort();
  }

  void Sort() {
    HeapingSort(SortMethod<Key>::seq, SortMethod<Key>::size, SortMethod<Key>::tracing);
  }
  
};

 

#endif