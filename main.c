// Hello! I'm Nicolas Marques and this is my new project. I have reading topics of AI's, and i liked all from this.
// Now, i want to make my AI, "IdtfAI". This AI receive images and return what have in image.

typedef struct Neuron{
    double input;
    double weight;
    double output;
    Neuron * nextNeuron;
}Neuron;

typedef struct Layer {
    int numNeurons; 
    Neuron *neurons; 
} Layer;

typedef struct NeuralNetwork {
    int numLayers; 
    Layer *layers;
} NeuralNetwork;

int main(){

}