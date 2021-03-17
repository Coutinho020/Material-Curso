#include <stdio.h>
#define colunas 3

void PreencheMatriz(int matriz[][colunas], int linhas){
   
    int i=0, j=0, flag=0;
    
    for(i = 0; i < linhas; i++){

        do{

            printf("Valor %d: ",i+1);
            scanf("%d", &matriz[i][0]);
            flag = (matriz[i][0] < 1 || matriz[i][0] > 100);
            for(j=0;j<i && !flag;j++)
                if(matriz[j][0] == matriz[i][0])
                    flag=1;
                if(flag)
                    printf("Valor invalido\n");
            
        }while(matriz[i][j]<1 || matriz[i][j]>100);

        matriz[i][1] = matriz[i][0] * matriz[i][0]; 
        matriz[i][2] = matriz[i][1] * matriz[i][0];   
    }
}

void MostraMatriz(int matriz[][colunas], int linhas){

 int i, j;

 printf("\nMatriz:\n");

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            printf("%d  ", matriz[i][j]);
        }
        
        printf("\n");
    }

}

int main()
{
    int matriz[colunas][colunas] = {{1,2,3}, {4,5,6}, {7,8,9}};
    PreencheMatriz(matriz, colunas);
    MostraMatriz(matriz, colunas);
    
    return 0;
}
