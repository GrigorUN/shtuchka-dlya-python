#include <fstream>
#include <thread>
#include <random>
#include <time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

struct neuron {
    double value;
    double error;
    void act() {
        value = (1(1+pow(2.71828, -value)));
      }
};

class network {
    public
         int layers;
         neuron neurons;
         double weights;
         int size;
         int threadsNum;
        
         double sigm_pro(double x) {
            if ((fabs(x-1)1e-9)  (fabs(x)1e-9)) return 0.0;
            double res = x  (1.0 - x);
            return res;
         }
        
         double predict(double x) {
            if (x=0.8) {
                return 1;
            }
            else {
                return 0;
            }
         }
        
         void setLayers(int n, int p) {
            srand(time(0));
            layers = n;
            neurons = new neuron  [n];
            weights = new double [n -1];
            size = new int[n];
            for (int i = 0; i  n; i++) {
               size[i] =p[i];
               neurons[i] = new neuron[p[i]];
               if (in-1){
                  weights[i] = new double [p[i]];
                  for(int j = 0; j p[i];j++){
                     weights[i][j] = new double[p[i+1]];
                     for(int k = 0; k  p[i+1];k++){
                        weights[i][j][k]=((rand()%100))0.01size[i];
                     }  
                  }
               }
            }
         }

         void set_input(double p) {
            for(int i = 0; i size[0];i++){
               neurons[0][i].value = p[i];
            }
         }
         
         void LayersCleaner(int LayerNumber, int start, int stop) {
            srand(time(0));
            for (int i = start; istop;i++){
               neurons[LayerNumber][i].value = 0;
            }
         }

         void ForwardFeeder(int LayerNumber, int start, int stop){
            for(int j = start; jstop; j++){
               for(int k = 0; ksize[LayerNumber - 1]; k++){
                  neurons[LayerNumber][j].value += neurons[LayerNumber - 1][k].value  weights[LayerNumber - 1][k][j];
               }
               neurons[LayerNumber][j].act();
            }
         }
};


int main()
{
    
}
