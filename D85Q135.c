/* Q135:(enum) Assign explicit values starting from 10 and print them.


Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include <stdio.h>
int main() {
    enum Letters { A = 10, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R, S, T, U, V, W, X, Y, Z };
    enum Letters letter;
    
    printf("Enter a letter (A-Z): ");
    scanf("%d", &letter);

    switch (letter) {
        case A:
            printf("A=%d\n", A);
            break;
        case B:
            printf("B=%d\n", B);
            break;
        case C:
            printf("C=%d\n", C);
            break;
        case D:
            printf("D=%d\n", D);
            break;
        case E:
            printf("E=%d\n", E);
            break;
        case F:
            printf("F=%d\n", F);
            break;
        case G:
            printf("G=%d\n", G);
            break;
        case H:
            printf("H=%d\n", H);
            break;
        case I:
            printf("I=%d\n", I);
            break;
        case J:
            printf("J=%d\n", J);
            break;
        case K:
            printf("K=%d\n", K);
            break;
        case L:
            printf("L=%d\n", L);
            break;
        case M:
            printf("M=%d\n", M);
            break;
        case N:
            printf("N=%d\n", N);
            break;
        case O:
            printf("O=%d\n", O);
            break;
        case P:
            printf("P=%d\n", P);
            break;
        case Q:
            printf("Q=%d\n", Q);
            break;
        case R:
            printf("R=%d\n", R);
            break;
        case S:
            printf("S=%d\n", S);
            break;
        case T:
            printf("T=%d\n", T);
            break;
        case U:
            printf("U=%d\n", U);
            break;
        case V:
            printf("V=%d\n", V);
            break;
        case W:
            printf("W=%d\n", W);
            break;
        case X:
            printf("X=%d\n", X);
            break;
        case Y:
            printf("Y=%d\n", Y);
            break;
        case Z:
            printf("Z=%d\n", Z);
            break;
        default:
            printf("Invalid letter\n");
    }

    return 0;
    
}
