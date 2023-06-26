// Autor: Niklas Fulle

// prints the field
void printField(char field[3][3]){
    printf("   | 1 | 2 | 3 |\n");
    printf("   |---|---|---|\n");
    printf(" A | %c | %c | %c |\n", field[0][0], field[0][1], field[0][2]);
    printf("   |---|---|---|\n");
    printf(" B | %c | %c | %c |\n", field[1][0], field[1][1], field[1][2]);
    printf("   |---|---|---|\n");
    printf(" C | %c | %c | %c |\n", field[2][0], field[2][1], field[2][2]);
    printf("   |---|---|---|\n");
}