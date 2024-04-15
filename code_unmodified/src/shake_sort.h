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

#include "sort_method.h"
#include "library.h"

#ifndef SHAKE_SORT_H
#define SHAKE_SORT_H

template<class Key>
class ShakeSort : public SortMethod<Key> {

 public:
  ShakeSort(const std::vector<Key>& sequence, unsigned seq_size, const double alpha, bool trace = false) {
    SortMethod<Key>::seq = sequence;
    SortMethod<Key>::size = seq_size;
    SortMethod<Key>::tracing = trace;
    alpha_ = alpha;
    Sort();
  }

  void Sort() {

    if (SortMethod<Key>::tracing) {
      PrintSeq(); 
    }
  
  }
  void PrintSeq() {
    std::cout << "seq sorted by Shake: {";
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