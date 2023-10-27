#ifndef NETWORD_H
#define NETWORK_H

typedef struct Neuron{
    double input;
    double weight;
    double output;
    struct Neuron * nextNeuron;
}Neuron;

typedef struct Layer {
    int numNeurons; 
    Neuron *neurons; 
} Layer;

typedef struct NeuralNetwork {
    int numLayers; 
    Layer *layers;
} NeuralNetwork;

#endif