// AUTOR: Javier Garcia Santana
// FECHA: 10/4/2023
// EMAIL: alu0101391663@ull.edu.es
// VERSION: 5.0
// ASIGNATURA: Algoritmos y Estructuras de Datos Avanzadas
// PRÁCTICA Nº: 5
// COMENTARIOS: Fichero .h en el que se declaran metodos plantilla
//              para su posterior uso en otras clases
//
// COMPILACIÓN: make

using namespace std;
using namespace std::chrono;

#include <algorithm>
#include <chrono>

#include "sort_method.h"

#ifndef LIBRARY_H
#define LIBRARY_H


template<class Key>
void Insert(std::vector<Key> &sec, int i, Key x) {
  sec[-1] = x;
  int j = i;
  while ( x < sec[j - 1] && j > 0){
    sec[j] = sec[j - 1];
    j--;
  } 
  sec[j] = x;
} 


template<class Key>
void baja(int i, std::vector<Key> &sec, unsigned n) {
  int largest, left, right;
  largest = i;
  left = 2 * i + 1; 
  right = 2 * i + 2;

  if (left < n && sec[left] > sec[largest]) {
    largest = left;
  }
  if (right < n && sec[right] > sec[largest]) {
    largest = right;
  }
  if (largest != i) {
    std::swap(sec[i], sec[largest]);
    baja(largest, sec, n);
  }
} 

template<class Key>
void deltasort(int delta, std::vector<Key>& sec, unsigned size) {
  int j, x;
  for (int i = delta; i < size; i++){
    while ((j >= delta) && (x < sec[j - delta])){
      sec[j] = sec[j - delta] ;
      j = j - delta ;
    } 
    sec[j] = x ;
  } 
}

  
template<class Key>
void Mezcla(std::vector<Key>& sec, int ini, int cen, int fin, unsigned size) { 
  int i, j, k;
  std::vector<Key> aux(size);
  i = ini; j = cen + 1; k = ini;
  while ((i <= cen) && (j <= fin)) {
    if (sec[i] < sec[j]){
      aux[k] = sec[i];
      i++;
    } else {
      aux[k] = sec[j];
      j++;
    }
    k++;
  }
  if (i > cen) {
    while (j <= fin) {
      aux[k] = sec[j];
      j++;
      k++;
    }
  } else {
    while (i <= cen) {
      aux[k] = sec[i];
      i++; 
      k++;
    }
  } 
  for (int k = ini; k <= fin; k++) {
    sec[k] = aux[k];
  }
} 


template<class Key>
void countSort(std::vector<Key>& sec, unsigned size, int exp) {
  int output[size]; // output array
  int i, count[10] = { 0 };
 
  // Store count of occurrences in count[]
  for (i = 0; i < size; i++) {
    count[(sec[i] / exp) % 10]++;
  }
  // Change count[i] so that count[i] now contains actual
  //  position of this digit in output[]
  for (i = 1; i < 10; i++) {
    count[i] += count[i - 1];
  }
  // Build the output array
  for (i = size - 1; i >= 0; i--) {
    output[count[(sec[i] / exp) % 10] - 1] = sec[i];
    count[(sec[i] / exp) % 10]--;
  }
  // Copy the output array to arr[], so that arr[] now
  // contains sorted numbers according to current digit
  for (i = 0; i < size; i++) {
    sec[i] = output[i];
  }
}

template<class Key>
int getMax(const std::vector<Key>& sec, unsigned size) {
  int mx = sec[0];
    for (int i = 1; i < size; i++) {
      if (sec[i] > mx) {
        mx = sec[i];
      }
    }
   return mx;
}

template<class Key>
void PrintSeq(const std::vector<Key>& sec, unsigned size) {
  std::cout << "seq sorted: {";
  for (int i = 0; i < size; ++i) {
    std::cout << sec.at(i) << " ";
  }
  std::cout << "}" << std::endl;
}


template<class Key>
void InsertSort(std::vector<Key> &sec, unsigned size, bool tracing) {
  auto start = high_resolution_clock::now();
  for (int i = 0; i < size; ++i) {
    Insert(sec, i, sec[i]);
    if (tracing) {
      PrintSeq(sec, size);
    }
  }
  auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  std::cout << "Time taken by Insertion: "
  << duration.count() << " microseconds" << std::endl;
}

template<class Key>
void HeapingSort(std::vector<Key> &sec, unsigned size, bool tracing) {
  auto start = high_resolution_clock::now();
  for (int i = (size / 2) - 1; i >= 0; i--) {
    baja(i, sec, size);
    if (tracing) {
      PrintSeq(sec, size);
    }
  }
  for (int i = size - 1; i >= 0; i--) {
    std::swap(sec[0], sec[i]);
    baja(0, sec, i);
    if (tracing) {
      PrintSeq(sec, size);
    }
  } 
    auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  std::cout << "Time taken by Insertion: "
  << duration.count() << " microseconds" << std::endl;
}

template<class Key>
void Msort(std::vector<Key>& sec, int ini, int fin, bool tracing = false) {
  auto start = high_resolution_clock::now();
  long cen;
  if (ini < fin) {
    cen = (ini + fin) / 2;
    Msort(sec, ini, cen);  
    Mezcla(sec, ini, cen, fin, sec.size());
    if (tracing) {
      PrintSeq(sec, sec.size()); 
    }
  } else {
    return;
  }
} 

template<class Key>
void RadixSorting(std::vector<Key>& seq, unsigned size ,bool tracing) {
  auto start = high_resolution_clock::now();
  // Find the maximum number to know number of digits
  int m = getMax(seq, size);

  // Do counting sort for every digit. Note that instead
  // of passing digit number, exp is passed. exp is 10^i
  // where i is current digit number
  for (int exp = 1; m / exp > 0; exp *= 10) {
    countSort(seq, size, exp);
    if (tracing) {
      PrintSeq(seq, size); 
    }
  }
      auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  std::cout << "Time taken by Insertion: "
  << duration.count() << " microseconds" << std::endl;
}


template<class Key>
void ShellSorting(std::vector<Key>& seq, unsigned size, double alpha, bool tracing) {
  auto start = high_resolution_clock::now();
  double delta = size;
  while (delta > 1){
    delta = delta * alpha;//alpha??
    deltasort(delta,seq,size);
    if (tracing) {
      PrintSeq(seq, size); 
    }
  }
      auto stop = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(stop - start);
  std::cout << "Time taken by Insertion: "
  << duration.count() << " microseconds" << std::endl;
}

#endif