// AUTOR: Javier Garcia Santana
// FECHA: 10/4/2023
// EMAIL: alu0101391663@ull.edu.es
// VERSION: 5.0
// ASIGNATURA: Algoritmos y Estructuras de Datos Avanzadas
// PRÁCTICA Nº: 5
// COMENTARIOS: Fichero .h en el que se instancia la
//              clase SortMethod 
//
// COMPILACIÓN: make

#include <iostream>
#include <algorithm>

#include "sort_method.h"
#include "library.h"

#ifndef SELECTION_H
#define SELECTION_H

template<class Key>
class Selection : public SortMethod<Key> {

 public:
  Selection(const std::vector<Key>& sequence, unsigned seq_size, bool trace = false) {
    SortMethod<Key>::seq = sequence;
    SortMethod<Key>::size = seq_size;
    SortMethod<Key>::tracing = trace;
    Sort(); 
  }

  void Sort() {
    for (int i = 0; i < SortMethod<Key>::size - 1; ++i) {
      long aux = i;
		  for (int j = i + 1; j < SortMethod<Key>::size; ++j) {
        if (SortMethod<Key>::seq[aux] > SortMethod<Key>::seq[j]) {
          aux = j;
          //std::cout << SortMethod<Key>::seq[aux] << std::endl;
        }
      }
      std::swap(SortMethod<Key>::seq[i], SortMethod<Key>::seq[aux]);
      if (SortMethod<Key>::tracing) {
        PrintSeq();
      }
    }
  }

  void PrintSeq() {
    std::cout << "seq sorted by Selection: {";
    for (int i = 0; i < SortMethod<Key>::size; ++i) {
      std::cout << SortMethod<Key>::seq.at(i) << " ";
    }
    std::cout << "}" << std::endl;
  }
};



#endif