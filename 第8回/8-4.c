#include <stdio.h>
#define SIZE 3

void read_vector3D(double vector[]);
void outer_product3D( double vector1[ ], double vector2[ ], double vector3[ ] );
double inner_product3D( double vector1[ ], double vector2[ ] );

int main(void){
    double vector1[SIZE];  // a
    double vector2[SIZE];  // b
    double vector3[SIZE];  // a*b

    printf("Enter the 3 elements of Vector 1:\n");
    read_vector3D(vector1);
    printf("Enter the 3 elements of Vector 2:\n");
    read_vector3D(vector2);
    outer_product3D(vector1, vector2, vector3);
    printf("\nVector 3 (outer product) perpendicular to the two vectors is(");
    printf("%.2lf,%.2lf,%.2lf).\n\n", vector3[0], vector3[1], vector3[2]);
    printf("The inner product of the two input vectors is %.2lf.\n", inner_product3D(vector1, vector2));
    printf("The inner product of Vector 2 and Vecor 3 is %.2lf.", inner_product3D(vector2, vector3));
    return 0;
}

void read_vector3D(double vector[]){
    for(int i=0; i<SIZE; i++){
        scanf("%lf", &vector[i]);
    }
}

void outer_product3D( double vector1[ ], double vector2[ ], double vector3[ ] ){
    // 課題の実行結果と実際の実行結果が異なるが, 外積の定義通りであるはず
    for(int i=0; i<SIZE; i++){
        vector3[i] = (vector1[(i+1)%3]*vector2[(i+2)%3])-(vector1[(i+2)%3]*vector2[(i+1)%3]);
    }
}

double inner_product3D( double vector1[ ], double vector2[ ] ){
    // 課題の実行結果と実際の実行結果が異なるため暫定的な対応
    double inner=0;
    for(int i=0; i<SIZE; i++){
        inner += vector1[i]*vector2[i];
    }
    return inner;
}