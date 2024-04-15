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
    for (int i = (SortMethod<Key>::size / 2) - 1; i >= 0; i--) {
      baja(i, SortMethod<Key>::seq, SortMethod<Key>::size);
      if (SortMethod<Key>::tracing) {
        PrintSeq();
      }
    }
    for (int i = SortMethod<Key>::size - 1; i > 0; i--) {
      std::swap(SortMethod<Key>::seq[0], SortMethod<Key>::seq[i]);
      baja(0, SortMethod<Key>::seq, i - 1) ;
      if (SortMethod<Key>::tracing) {
        PrintSeq();
      }
    } 
  }
  
  void PrintSeq() {
    std::cout << "seq sorted by HeapSort: {";
    for (int i = 0; i < SortMethod<Key>::size; ++i) {
      std::cout << SortMethod<Key>::seq.at(i) << " ";
    }
    std::cout << "}" << std::endl;
  }
};

 

#endif