#include "TF1.h"
#include "TCanvas.h"
#include "TMath.h"

 using namespace std;

double myFunc(double *x, double *p) {
    return p[0] * sin(p[1] * x[0]);
}

void plotFunction() {


   
   TF1 * f1 = new TF1("f1","sin(x)/x",0,10);
   f1->Draw();


   TF1 *fp = new TF1("fp", myFunc, 0, 10, 2); 
    fp->SetParameter(0, 1.0); 
    fp->SetParameter(1, 2.0); 
    fp->Draw("same");
    fp->SetLineColor(kBlue);
    
    
    f1->SetMaximum(2);
    f1->SetMinimum(-2);
    
    
    cout << "Value of f(x) at x = 1 is       " << fp->Eval(1.) <<endl; 
    cout << "Derivative of f(x) at x = 1 is  " << fp->Derivative(1.) << endl; 
    cout << "Integral of f(x) in [0,3] is    " << fp->Integral(0,3)  << endl;
   }
