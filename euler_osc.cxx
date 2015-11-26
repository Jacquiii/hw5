#include <iostream>

using namespace std; 

void eulerf(const double N, const double dt, double* v, double* x){ 
   v[0]=0;
   x[0]=0;
   for(int i; i<N; i++){
      v[i]=v[i-1]-x[i-1]*dt;
      x[i]=x[i-1]+v[i-1]*dt;
   }
}
   
void eulerb(const double N, const double dt, double* v, double* x){
   v[0]=0;
   x[0]=0;
   for(int i; i<N; i++){
      x[i]=(x[i-1]+v[i-1])/(1+dt);
   }
}
 

int main(){

const double N=20*3.14 ;
const double dt=3.14/10 ;
double v[N];
double x[N];

eulerf(N,dt,v,x);
eulerb(N,dt,v,x);

   for(int i; i<N; i++){
   cout<<i*dt<<'\t'<< x[i]<<endl;
 }

}
