#include<stdio.h>
#define max 10

 struct item {
  int coeff;
  int exp;
 };

 struct poly {
   struct item Ply[max];
   int terms;
 };

 struct poly create_poly(void);
 void display_poly(struct poly);
 struct poly add_poly(struct poly,struct poly);
 struct poly multi_poly(struct poly X, struct poly Y) ;


 void main() {
  struct poly P,Q,R;
  int i,n;
  clrscr();

  P=create_poly();
  Q=create_poly();
  clrscr();
  printf("\nFirst Poly :");
  display_poly(P);
  printf("\nSecond Poly :");
  display_poly(Q);
  R = multi_poly(P,Q);
  printf("\nResultant Poly :");
  display_poly(R);
  getch();
 }

 struct poly create_poly(void) {
  struct poly P;
  int i,n;
  printf("\nEnter no.of terms of polynomial :");
  scanf("%d",&n);
  P.terms = n;
  printf("Enter %d terms of polynomial :",n);

  for(i=0;i<n;i++) {
   printf("\n Enter %d term cofficient and exponent value :",i+1);
   scanf("%d%d",&P.Ply[i].coeff, &P.Ply[i].exp);
  }
  return(P);
 }
 void display_poly(struct poly P) {
  int i;
  for(i=0;i<P.terms;i++) {
   if(P.Ply[i].exp>0) {
    if(P.Ply[i].coeff==0){
       continue;
    } else if(P.Ply[i].coeff<0) {
     printf("\b\b");
     printf("%dX^%d + ",P.Ply[i].coeff,P.Ply[i].exp);
    } else {
     printf("%dX^%d + ",P.Ply[i].coeff,P.Ply[i].exp);
    }
  } else if(P.Ply[i].coeff<0) {
    printf("\b\b");
    printf("%d",P.Ply[i].coeff);
  } else if(P.Ply[i].coeff>0) {
    printf("%d",P.Ply[i].coeff);
  } else {
    printf("\b\b");
  }
  }
  if(P.Ply[P.terms-1].exp!=0)
     printf("\b\b ");
  }

  struct poly add_poly(struct poly X,struct poly Y) {
    struct poly Z;
    int i,j,k,s;
    i=j=k=0;
    while(i<X.terms && j<Y.terms) {
     if(X.Ply[i].exp > Y.Ply[j].exp) {
	Z.Ply[k].coeff = X.Ply[i].coeff;
	Z.Ply[k].exp = X.Ply[i].exp;
	i++;k++;
     } else if(X.Ply[i].exp < Y.Ply[j].exp) {
	Z.Ply[k].coeff = Y.Ply[j].coeff;
	Z.Ply[k].exp = Y.Ply[j].exp;
	j++;k++;
     } else {
	s=X.Ply[i].coeff + Y.Ply[j].coeff;

     if(s!=0) {
	Z.Ply[k].coeff = s;
	Z.Ply[k].exp = X.Ply[i].exp;
	k++;
     }
       i++;j++;
    }
   }

  while(i<X.terms) {
    Z.Ply[k].coeff = X.Ply[i].coeff;
    Z.Ply[k].exp = X.Ply[i].exp;
    i++;k++;
  }

  while(j<Y.terms) {
    Z.Ply[k].coeff = Y.Ply[j].coeff;
    Z.Ply[k].exp = Y.Ply[j].exp;
    j++;k++;
  }

  Z.terms = k;
  return Z;
 }

 struct poly multi_poly(struct poly P, struct poly Q) {
  struct poly R,Temp;
  int i,j,k;
  R.terms = 0;
  i=0;
  while(i< P.terms) {
   j=k=0;
   while(j< Q.terms) {
     Temp.Ply[k].coeff = P.Ply[i].coeff*Q.Ply[j].coeff;
     Temp.Ply[k].exp = P.Ply[i].exp+Q.Ply[j].exp;
     j++;k++;
   }
   Temp.terms=k;
   R = add_poly(R,Temp);
   i++;
  }
  return R;
 }
