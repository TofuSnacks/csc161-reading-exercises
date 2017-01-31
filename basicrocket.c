#include <stdio.h>

void printCone(void) {
    printf("    /\\\n");
    printf("   /  \\\n");
    printf("  /    \\\n");
    printf("  ------\n");
}

void printBox(void) {
    printf("  ------\n");
    printf("  |    |\n");
    printf("  |    |\n");
    printf("  ------\n");
}

void printShip(void) {
    printCone();
    printBox();
    printCone();
}

int main(void) {
  printShip();
  return 0;
}
