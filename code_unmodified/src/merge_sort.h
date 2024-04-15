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
    Msort(SortMethod<Key>::seq, 0, SortMethod<Key>::size - 1);
  }

  void Msort(std::vector<Key>& sec, Key ini, Key fin) {
    long cen;
    if (ini < fin) {
      cen = (ini + fin) / 2;
      Msort(sec, ini, cen);
      Msort(sec, cen+1, fin);
      Mezcla(sec, ini, cen, fin, SortMethod<Key>::size);
      if (SortMethod<Key>::tracing) {
        PrintSeq(); 
      }
    } else {
      return;
    }
  } 
  
  void PrintSeq() {
    std::cout << "seq sorted by MergeSort: {";
    for (int i = 0; i < SortMethod<Key>::size; ++i) {
      std::cout << SortMethod<Key>::seq.at(i) << " ";
    }
    std::cout << "}" << std::endl;
  }
};

#endif