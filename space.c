#include <stdio.h>

int main() {
  float earthWeight;
  int numOfPlanet;

  printf("\t Welcome to The Interplanetery Space Box\n\n");
  printf("what is your earth weight (lbs or kg): ");
  scanf("%f", &earthWeight );
  printf("\t Planet:\n");
  printf("1. Mercury.\n");
  printf("2. Venus.\n");
  printf("3. Mars.\n");
  printf("4. Jupiter.\n");
  printf("5. Saturn.\n");
  printf("6. Uranus.\n");
  printf("7. Neptune.\n\n");

  printf("Enter the number of planet you want to fight on: ");
  scanf("%d", &numOfPlanet);
  switch (numOfPlanet){
    case 1:
      earthWeight *= 0.38;
      break;
    case 2:
      earthWeight *= 0.91;
      break;
    case 3:
      earthWeight *= 0.38;
      break;
    case 4:
      earthWeight *= 2.34;
      break;
    case 5:
      earthWeight *=  1.06;
      break;
    case 6:
       earthWeight *=  0.92;
      break;
    case 7:
      earthWeight *=  1.19;
      break;
    default:
      printf("Invalid choice!\n");
      break;
  }
  printf("\t Your earth weight is: %.2f(lbs or kg) ", earthWeight\n);
}
