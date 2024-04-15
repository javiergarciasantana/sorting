// AUTOR: Javier Garcia Santana
// FECHA: 10/4/2023
// EMAIL: alu0101391663@ull.edu.es
// VERSION: 5.0
// ASIGNATURA: Algoritmos y Estructuras de Datos Avanzadas
// PRÁCTICA Nº: 5
// COMENTARIOS: Fichero .h en el que se instancia la
//              clase RadixSort 
//
// COMPILACIÓN: make

#include "sort_method.h"
#include "library.h"  

#ifndef RADIX_SORT_H
#define RADIX_SORT_H

template<class Key>
class RadixSort : public SortMethod<Key> {

 public:
  RadixSort(const std::vector<Key>& sequence, unsigned seq_size, bool trace = false) {
    SortMethod<Key>::seq = sequence;
    SortMethod<Key>::size = seq_size;
    SortMethod<Key>::tracing = trace;
    Sort();
  }
  void Sort() {
    RadixSorting(SortMethod<Key>::seq, SortMethod<Key>::size, SortMethod<Key>::tracing);
  }

};


#endif