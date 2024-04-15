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

#include "sort_method.h"
#include "library.h"

#ifndef INSERTION_H
#define INSERTION_H

template<class Key>
class Insertion : public SortMethod<Key> {

 public:
  Insertion(const std::vector<Key>& sequence, unsigned seq_size, bool trace = false) {
    SortMethod<Key>::seq = sequence;
    SortMethod<Key>::size = seq_size;
    SortMethod<Key>::tracing = trace;
    Sort(); 
  }

  void Sort() {
    for (int i = 1; i < SortMethod<Key>::size; ++i) {
		  Insert(SortMethod<Key>::seq, i, SortMethod<Key>::seq[i]);
      if (SortMethod<Key>::tracing) {
        PrintSeq();
      }
    }
  }

  void PrintSeq() {
    std::cout << "seq sorted by Insertion: {";
    for (int i = 0; i < SortMethod<Key>::size; ++i) {
      std::cout << SortMethod<Key>::seq.at(i) << " ";
    }
    std::cout << "}" << std::endl;
  }
};



#endif