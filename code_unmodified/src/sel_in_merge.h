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
#include <stack>
#include <vector>
#include <algorithm>

#include "sort_method.h"
#include "library.h"

#ifndef SEL_IN_MERGE
#define SEL_IN_MERGE

template<class Key>
class SelInMerge : public SortMethod<Key> {

 public:
  SelInMerge(const std::vector<Key>& sequence, unsigned seq_size, bool trace = false) {
    SortMethod<Key>::seq = sequence;
    SortMethod<Key>::size = seq_size;
    SortMethod<Key>::tracing = trace;
    Sort(); 
  }

  void Sort() {
    exam(SortMethod<Key>::seq, 0, SortMethod<Key>::size - 1);
  }
  int exam(std::vector<Key>& sec, int ini, int fin) {
    std::vector<Key> sec_2;
    int i = ini ; 
    int f = fin ;
    int p = sec[(i+f)/2] ;
    while (i <= f){
      while (sec[i] < p) {i++ ;}
      while (sec[f] > p) {f-- ;}
      if (i <= f) {
        std::swap(sec[i], sec[f]);
        i++ ; 
        f-- ;
      }
    }
    if (SortMethod<Key>::tracing) {
      PrintSeq(); 
    }
    for (int i = (sec.size()-1)/2; i > 0; --i) {
      int aux = i;
      sec[-1] = aux;
      int j = i;
      while (aux < sec[j- 1] && (j > 0)) {
        sec[j-1] = sec[j];
        --j;
      }
      sec[j] = aux;
    }
    for (int i = ((sec.size()-1)/2) + 1; i < sec.size(); ++i) {
      sec_2.push_back(sec[i]);
    }
    for (int i = sec_2.size() - 1; i > 0; --i) {
      int aux = i;
      sec_2[-1] = aux;
      int j = i;
      while (aux < sec_2[j- 1] && (j > 0)) {
        sec_2[j-1] = sec_2[j];
        --j;
      }
      sec_2[j] = aux;
    }
    int k = 0;
    for (int i = ((sec.size()-1)/2) + 1; i < sec.size(); ++i) {
      sec[i] = sec_2[k];
      ++k;
    }
        if (SortMethod<Key>::tracing) {
      PrintSeq(); 
    }
  }
  void PrintSeq() {
    std::cout << "seq sorted by SelInMerge: {";
    for (int i = 0; i < SortMethod<Key>::size; ++i) {
      std::cout << SortMethod<Key>::seq.at(i) << " ";
    }
    std::cout << "}" << std::endl;
  }
};



#endif