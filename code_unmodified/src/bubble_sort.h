// AUTOR: Javier Garcia Santana
// FECHA: 10/4/2023
// EMAIL: alu0101391663@ull.edu.es
// VERSION: 5.0
// ASIGNATURA: Algoritmos y Estructuras de Datos Avanzadas
// PRÁCTICA Nº: 5
// COMENTARIOS: Fichero .h en el que se instancia la
//              clase ShellSort 
//
// COMPILACIÓN: make

#include <algorithm>

#include "sort_method.h"
#include "library.h"

#ifndef BUBBLE_SORT_H
#define BUBBLE_SORT_H

template<class Key>
class BubbleSort : public SortMethod<Key> {

 public:
  BubbleSort(const std::vector<Key>& sequence, unsigned seq_size, const double alpha, bool trace = false) {
    SortMethod<Key>::seq = sequence;
    SortMethod<Key>::size = seq_size;
    SortMethod<Key>::tracing = true;
    alpha_ = alpha;
    Sort();
  }

  void Sort() {

    for (int i = 1; i < SortMethod<Key>::seq.size(); i++) {
      for (int j = SortMethod<Key>::seq.size() - 1; j >= i; j--) {
        if (SortMethod<Key>::seq[j] < SortMethod<Key>::seq[j-1]) {
          std::swap(SortMethod<Key>::seq[j-1], SortMethod<Key>::seq[j]);
        }
      }
      if (SortMethod<Key>::tracing) {
        PrintSeq(); 
      }
                                                          
    }
  }
  void PrintSeq() {
    std::cout << "seq sorted by Bubble: {";
    for (int i = 0; i < SortMethod<Key>::size; ++i) {
      std::cout << SortMethod<Key>::seq.at(i) << " ";
    }
    std::cout << "}" << std::endl;
  }
 
 private:
  double delta_;
  double alpha_;
};


#endif