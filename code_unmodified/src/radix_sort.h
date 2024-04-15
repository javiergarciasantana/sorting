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
    // Find the maximum number to know number of digits
    int m = getMax(SortMethod<Key>::seq, SortMethod<Key>::size);

    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // where i is current digit number
    for (int exp = 1; m / exp > 0; exp *= 10) {
      countSort(SortMethod<Key>::seq, SortMethod<Key>::size, exp);
      if (SortMethod<Key>::tracing) {
        PrintSeq(); 
      }
    }
  }

  void PrintSeq() {
    std::cout << "seq sorted by RadixSort: {";
    for (int i = 0; i < SortMethod<Key>::size; ++i) {
      std::cout << SortMethod<Key>::seq.at(i) << " ";
    }
    std::cout << "}" << std::endl;
  }
};


#endif