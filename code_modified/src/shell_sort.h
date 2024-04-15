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

#ifndef SHELL_SORT_H
#define SHELL_SORT_H

template<class Key>
class ShellSort : public SortMethod<Key> {

 public:
  ShellSort(const std::vector<Key>& sequence, unsigned seq_size, const double alpha, bool trace = false) {
    SortMethod<Key>::seq = sequence;
    SortMethod<Key>::size = seq_size;
    SortMethod<Key>::tracing = trace;
    alpha_ = alpha;
    Sort();
  }

  void Sort() {
    ShellSorting(SortMethod<Key>::seq, SortMethod<Key>::size, 0.5, SortMethod<Key>::tracing);
  }
 
 private:
  double alpha_;
};


#endif