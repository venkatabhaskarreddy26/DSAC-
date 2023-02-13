#include <iostream>
using namespace std;
const int MaxSize = 100;
 typedef struct
 {
 float Coef;
 int Exp;
 }
  polynomial_term;
 class Polynomial
 {
   private:
         polynomial_term Poly[MaxSize];
        int Total_Terms;
   public:
         Polynomial() { Total_Terms = 0;}
 void Read_Poly();
 void Display_Poly();
 Polynomial Add_Poly(Polynomial B);
 };
 void Polynomial :: Read_Poly()
 {
 int i;
 cout << "Let us read the polynomial now" << endl;
 cout << "Enter total number of terms in polynomial";
 cin >> Total_Terms;
 for(i = 0; i < Total_Terms; i++)
 {
 cout << "Enter Exponent of" << i+1 << "Term";
 cin >> Poly[i].Exp;
 cout<< "Enter Coefficient of" << i+1 << "Term";
 cin >> Poly[i].Coef;
 }
 }
 void Polynomial :: Display_Poly()
 {
 int i;
 for(i = 0; i < Total_Terms-1; i++)
 cout << Poly[i].Coef << "x^" << Poly[i].Exp << "+";
 cout << Poly[i].Coef<<"x^"<<Poly[i].Exp<<"\b" << endl;
 cout<<"no. of terms:"<<Total_Terms<<endl;
 }
 Polynomial Polynomial :: Add_Poly(Polynomial B)
 {
 int i = 0,j =0, k = 0;
 Polynomial C;
 while (i < Total_Terms && j < B.Total_Terms)
 {
 if(Poly[i].Exp == B.Poly[j].Exp)
 {
 C.Poly[k].Coef = Poly[i].Coef + B.Poly[j].Coef;
 C.Poly[k].Exp = Poly[i].Exp;
 i++; j++; k++;
 }
 else if(Poly[i].Exp > B.Poly[j].Exp)
 {
 C.Poly[k].Coef = Poly[i].Coef;
 C.Poly[k].Exp = Poly[i].Exp;
 i++; k++;
 }
 else
 {
 C.Poly[k].Coef = B.Poly[j].Coef;
 C.Poly[k].Exp = B.Poly[j].Exp;
 j++; k++;
 }
 }
 while(i < Total_Terms)
 {
 C.Poly[k].Coef = Poly[i].Coef;
 C.Poly[k].Exp = Poly[i].Exp;
 i++; k++;
 }
 while(j < B.Total_Terms)
 {
 C.Poly[k].Coef = B.Poly[j].Coef;
 C.Poly[k].Exp = B.Poly[j].Exp;
 j++; k++;
 }
 C.Total_Terms = k ;
 return C;
 }
 int main()
 {
 Polynomial A, B, C;
 A.Read_Poly();
 A.Display_Poly();
 B.Read_Poly();
 B.Display_Poly();
 C = A.Add_Poly(B);
 C.Display_Poly();
 }

