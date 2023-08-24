#include "load.hpp"
#include <chrono>

int main(){


    // Captura o tempo de início
    auto start_time = std::chrono::high_resolution_clock::now();

    // Código que você deseja medir o tempo de execução
    loadInputs();

    // Captura o tempo de fim
    auto end_time = std::chrono::high_resolution_clock::now();

    // Calcula a duração em microssegundos
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();

    // Imprime o tempo de execução
    std::cout << "Tempo de execução: " << duration << " microssegundos" << std::endl;

    return 0;
    
    //readMultiple();
    //readTest();

/* 
    string teste;
    teste=removePunctuation("emanuel.jogou.bola");
    cout<<teste<<endl; */

    return 0;
}