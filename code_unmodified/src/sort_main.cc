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
//#include <bits/stdc++.h>

#include "insertion.h"
#include "heap_sort.h"
#include "merge_sort.h"
#include "shell_sort.h"
#include "radix_sort.h"
#include "quick_sort.h"
#include "selection.h"
#include "bubble_sort.h"
#include "shake_sort.h"
#include "sel_in_merge.h"

void SortingMethod(const std::vector<long>& seq, unsigned size, bool trace, bool print = false) {
  char option;
  SortMethod<long>* sort_method;
  while (true) {
    std::cout << "\nSecuencia original: {";
    for (int i = 0; i < seq.size(); ++i) {
      std::cout << seq.at(i) << " ";
    }
    std::cout << "}" << std::endl;
    std::cout << "Seleccione un metodo de ordenación:" << std::endl;
    std::cout << "[1]-Insercion\n" <<
                 "[2]-HeapSort\n" <<
                 "[3]-MergeSort\n" <<
                 "[4]-ShellSort\n" <<
                 "[5]-RadixSort\n" <<
                 "[6]-QuickSort\n" <<
                 "[7]-Seleccion\n" <<
                 "[8]-Burbury(BubbleSort)\n" <<
                 "[9]-ShakeSort\n" << 
                 "[A]-SelInMerge\n" <<
                 "[0]-Retroceder\n";
    std::cin >> option;
    switch(option) {
      case '0':
        return;
      case '1': 
      {
        sort_method = new Insertion<long>(seq, size, trace);
        break;
      }
      case '2':
      {
        sort_method = new HeapSort<long>(seq, size, trace);
        break;
      }
      case '3':
      {
        sort_method = new MergeSort<long>(seq, size, trace);
        break;
      }
      case '4':
      {
        double alpha;
        std::cout << "Introduzca la constante de reduccion(0 < alpha < 1):\n";
        std::cin >> alpha;
        while (alpha <= 0 || alpha >= 1) {
          std::cout << "El valor de alpha no se encuentra dentro de los parametros requeridos(0 < alpha < 1)\n"
                    << "Vuelva a insertar la constante de reduccion\n";
          std::cin >> alpha;
        }
        sort_method = new ShellSort<long>(seq, size, alpha, trace);
        break;
      }
      case '5':
      {
        sort_method = new RadixSort<long>(seq, size, trace);
        break;
      }
      case '6':
      {
        sort_method = new QuickSort<long>(seq, size, trace);
        break;
      }
      case '7':
      {
        sort_method = new Selection<long>(seq, size, trace);
        break;
      }
      case '8':
      {
        sort_method = new BubbleSort<long>(seq, size, true);
        break;
      }
      case '9':
      {
        sort_method = new ShakeSort<long>(seq, size, trace);
        break;
      }
      case 'A':
      {
        sort_method = new SelInMerge<long>(seq, size, trace);
        break;
      }
      default:
        std::cerr << "OPCION NO VALIDA\n\n";
        break;
    }
    if (print) {
      sort_method->PrintSeq();
    }
  }
}

int main() {

  srand(time(NULL));
  char option;
  unsigned seq_size;
  long aux;
  std::vector<long> sequence;
  std::cout << "               PR5 ORDENACION\n";
  while (true) {
    std::cout << "\nSeleccione el metodo de insercion de la secuencia:" << std::endl;
    std::cout << "[1]-Insertar secuencia manualmente\n" <<
                 "[2]-Crear una secuencia de numeros aleatorios\n" <<
                 "[0]-Salir\n";
    
    std::cin >> option;
    switch(option) {
      case '0':
        exit(EXIT_SUCCESS);
      case '1':
        std::cout << "Indique el tamaño de la sequencia:" << std::endl;
        std::cin >> seq_size;
        for (int i = 0; i < seq_size; ++i) {
          std::cin >> aux;
          sequence.push_back(aux);
        }
        SortingMethod(sequence, seq_size, true);
        break;
      case '2':
        std::cout << "Indique el tamaño de la sequencia:" << std::endl;
        std::cin >> seq_size;
        for (int i = 0; i < seq_size; ++i) {
          aux = rand() % 9999 + 1000;
          sequence.push_back(aux);
        }
        SortingMethod(sequence, seq_size, false, true);
        break;
      default:
        std::cerr << "OPCION NO VALIDA\n\n";
        break;
    }
  }
  return 0;
  }
