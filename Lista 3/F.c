typedef struct{
    int pos_atual;
    long long result_1;
    long long result_2;
    int max;
    int first;
} fibo;

fibo var;

long int fibonacci (int n){
    if (var.first == 0){
        if (n == 1 || n == 2)
            return 1;
        
        if (n == 3)
            return 2;
        
        var.max = n;
        var.result_1 = 1;
        var.result_2 = 2;
        var.first = 1;
        var.pos_atual = 3;
    }
    
    long long temp = var.result_2;
    
    var.result_2 += var.result_1;
    
    var.result_1 = temp;
    
    var.pos_atual++;
    
    if (var.pos_atual == var.max)
        return var.result_2;
    else
        return fibonacci(var.pos_atual);
}

int main(void){

    printf("%ld",fibonacci(62));

}