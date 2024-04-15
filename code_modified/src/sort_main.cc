// AUTOR: Javier Garcia Santana
// FECHA: 10/4/2023
// EMAIL: alu0101391663@ull.edu.es
// VERSION: 5.0
// ASIGNATURA: Algoritmos y Estructuras de Datos Avanzadas
// PRÁCTICA Nº: 5
// COMENTARIOS: Fichero .cc en el que se define el menu 
//              del programa(main)
//
// COMPILACIÓN: make

#include <vector>
#include <cstdlib>
#include <iostream>
#include <bits/stdc++.h>

#include "insertion.h"
#include "heap_sort.h"
#include "merge_sort.h"
#include "shell_sort.h"
#include "radix_sort.h"



int main() {

  srand(time(NULL));
  char option;
  unsigned seq_size;
  long aux;
  double alpha;
  std::vector<long> v_1;
  std::cout << "               PR5 ORDENACION\n";
 
    
  std::cout << "Indique el tamaño de la sequencia:" << std::endl;
  std::cin >> seq_size;
  for (int i = 0; i < seq_size; ++i) {
    aux = rand() % 9999 + 1000;
    v_1.push_back(aux);
  }
  
  Insertion<long> in(v_1, v_1.size());


  HeapSort<long> hs(v_1, v_1.size());


  MergeSort<long> ms(v_1, v_1.size());
 

  RadixSort<long> rs(v_1, v_1.size());


  std::cout << "Introduzca la constante de reduccion(0 < alpha < 1):\n";
  std::cin >> alpha;
  while (alpha <= 0 || alpha >= 1) {
    std::cout << "El valor de alpha no se encuentra dentro de los parametros requeridos(0 < alpha < 1)\n"
              << "Vuelva a insertar la constante de reduccion\n";
    std::cin >> alpha;
  }
  ShellSort<long> ss(v_1, v_1.size(), alpha);



  return 0;
}
