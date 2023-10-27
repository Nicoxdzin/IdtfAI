// Hello! I'm Nicolas Marques and this is my new project. I have reading topics of AI's, and i liked all from this.
// Now, i want to make my AI, "IdtfAI". This AI receive images and return what have in image.

#include "functions.h"

int main()
{  
    int numFeatures = 784; // Número de recursos na camada de entrada

    NeuralNetwork *network = createNeuralNetwork(numFeatures);

    freeNeuralNetwork(network);

    return 0;

}
