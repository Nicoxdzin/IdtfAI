#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "network.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


NeuralNetwork * createNeuralNetwork(int numNeurons){

    NeuralNetwork * network = (NeuralNetwork *)malloc(sizeof(NeuralNetwork));
    network->numLayers = 3;// 1 camada de entrada, 1 oculta(processos) e 1 de saida.
    network->layers = (Layer *)malloc(3 * sizeof(Layer));

    //Camada de entrada ->
    int numFeatures = 5;
    network->layers[0].numNeurons = numFeatures; 
    network->layers[0].neurons = (Neuron *)malloc(numFeatures * sizeof(Neuron));

    //Camadas ocultas ->
    int numNeuronsHidden = 5;
    network->layers[1].numNeurons = numNeuronsHidden; 
    network->layers[1].neurons = (Neuron *)malloc(numNeuronsHidden * sizeof(Neuron));

    //Camada de saída
    int numNeuronsExit = 5;
    network->layers[2].numNeurons = numNeuronsExit;
    network->layers[2].neurons = (Neuron *)malloc(numNeuronsExit * sizeof(Neuron));
}

void * freeNeuralNetwork(NeuralNetwork *network) {

    for (int i = 0; i < network->numLayers; i++) {
        free(network->layers[i].neurons);
    }
    free(network->layers);

    // Libere a memória da rede neural
    free(network);
}



    // void readImages();
    // void insertImages();


    int menu(){
        int op = 0;
        printf("Qual atitude deseja tomar? \n");
        printf("1 - Inserir imagens na base de dados\n");
        printf("2 - Inserir uma imagem para a resposta da IA\n");
        printf("3 - Finalizar programa.\n->");

        scanf("%d", &op);

        switch(op)
        {
            case 1:
                // insertImages();
            break;
            
            case 2:
                // readImages();
            break;

            case 3:
                return 0;
            break;

            default:
                printf("Opção inválida.");
            break;
        }
        return 0;
    }

double standardDeviation() {
    int arr[] = {446, 450, 554, 547, 486, 498, 440, 560, 451, 568};
    double sum = 0;
    int i = 0;

    for(i = 0; i < 10; i++){
        double aux = arr[i] - 500;
        double calc = aux * aux;
        sum = sum + calc;
    }
    double variance = sum / (i -1);
    double standard_deviation = sqrt(variance);
    printf("%f\n", sum);
    printf("%f\n", variance);
    printf("%f", standard_deviation);

    return standard_deviation;
}



#endif