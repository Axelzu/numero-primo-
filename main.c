int main()
{
    int i, numero, cont=0;
    printf("dijite el numero entero");
    scanf("%i", &numero);
    for(i=1;i<=numero;i++ ){
        if(numero%i==0);
        cont++;
    }
    if(cont>2){
        printf("\n el numero no es primo");
    }
    else{
        printf("\n el numero es primo");
    }

    


    return 0;
}
