#include<stdio.h>
#include<math.h>

double division(double, double);
double modulus(int, int);
void printf_menu();

int main() {
    int choice;
    double first, second, result;

    while(1) {
     printf_menu();
     scanf("%d", &choice);
     if ( choice== 7) {
        break;
     }

     if (choice < 1 || choice > 7 ){
      fprintf(stderr, "invalid menu choice.");
      continue;
     }

     printf("\n please enter the first number: ");
     scanf("%lf", &first);
     printf("\n please enter the second number: ");
     scanf("%lf", &second);

     switch (choice) {
     case 1: //add
     result = first + second;
     break;
     case 2: //subtract
     result = first - second;
     break;
     case 3: //multiply
     result = first * second;
     break;
     case 4: //divide
     result = division(first, second);
     break;
     case 5: //modulus
     result = modulus(first, second);
     break;
     case 6: //power
     result = pow(first, second);
     break;
     }
     if(!isnan(result)){
     printf("\n result of opration is: %.2f", result);
     }
     
};

 return 0;
}

double division(double a, double b) {
if (b == 0){
fprintf(stderr, "invalid argument for division");
return NAN;
} else{
   return a / b;
}
}

double modulus(int a, int b){
if (b == 0){
fprintf(stderr, "\n\ninvalid argument for modulus");
return NAN;
} else{
   return a % b;
}

}

void printf_menu() {
 printf("\n\n-------------------------------");
 printf("\nwelcome to simple calculator\n");
 printf("\n choose one of the following options :");
 printf("\n1. add"); \\for print add
 printf("\n2. subtract");
 printf("\n3. multiply");
 printf("\n4. divide");
 printf("\n5. modulus");
 printf("\n6. power");
 printf("\n7. exit");
 printf("\n  now, enter your choice: ");

}