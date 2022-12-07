int faz_conta_direito(int parcelas, char op){
    int cont = 0, numero, soma = 0;
    while (parcelas > cont){  
        scanf("%d", &numero);  
        if(op == '+'){

            soma += numero; 
            
        }
        else{
            if(soma == 0){
                soma = numero;

            }
            else{
                soma -= numero;
            }



        }
        cont++;   
    }
    return soma;
}
