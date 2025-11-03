bool lemonadeChange(int* bills, int billsSize) {
    int *total;
    int i;

    for(i = 0; i < billsSize ; i++){

        total += *(bills + i);
    
        if(*bills == 10 && total > 0) {
            total -= 5;
        } 
        else {
            total -= 15;
        }
    }

    if (total > 0){
        return true;
    }
        return false;
	// Código funciona para o caso 1, mas deve ser melhorado para a lógica das notas, que vou analisar no desenvolvimento em casa.
}
