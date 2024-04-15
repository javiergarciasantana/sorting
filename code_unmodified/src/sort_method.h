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

#include <vector>

#ifndef SORT_METHOD_H
#define SORT_METHOD_H

template<class Key>
class SortMethod {

 protected:
  unsigned size;
  std::vector<Key> seq;
  bool tracing;

 public:
  virtual void Sort() = 0;
  virtual void PrintSeq() = 0;
};

#endif