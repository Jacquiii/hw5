#include <iostream>

using namespace std; 

void eulerf(const double N, const double dt, double* v, double* x){ 
   v[0]=0;
   x[0]=1;
   for(int i=1; i<N; i++){
      v[i]=v[i-1]-x[i-1]*dt;
      x[i]=x[i-1]+v[i-1]*dt;
   }
}
   
//void eulerb(const double N, const double dt, double* v, double* x){
     //v[0]=0;
     //x[0]=1;
     //for(int i=1; i<N; i++){
        //v[i]=(v[i-1]+dt*x[i-1])/(1+(dt*dt));
        //x[i]=(x[i-1]-dt*v[i-1])/(1+(dt*dt));
     //}
  //}
 

int main(){

const int N=2000;
const double dt=3.14/100;
double v[N];
double x[N];

eulerf(N,dt,v,x);
//eulerb(N,dt,v,x);

   for(int i=0; i<N; i++){
   cout<<i*dt<<'\t'<< x[i]<<endl;
 }

}
