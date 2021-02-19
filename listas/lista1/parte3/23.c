#include <stdio.h>

int main() {
    unsigned long int cod, cv, cl;
    float p_compra, p_venda, pc_total = 0, pv_total = 0, lucro, perc_lucro, l_ant = 0, pl_total;
    int n_vendas, nv_ant = 0, l10 = 0, l1020 = 0, l20 = 0;

    while(scanf("%lu %f %f %d", &cod, &p_compra, &p_venda, &n_vendas) != EOF){
        
        pc_total += p_compra * n_vendas;
        pv_total += p_venda * n_vendas;


        lucro = n_vendas * (p_venda - p_compra);
        if(lucro > l_ant){
            cl = cod;
            l_ant = lucro;
        } 

        perc_lucro = ((n_vendas*(p_venda-p_compra)) / (n_vendas * p_compra)) * 100;
        if(perc_lucro < 10) l10++;
        else if(perc_lucro >= 10 && perc_lucro <= 20) l1020++;
        else l20++;

        
        if(n_vendas > nv_ant){
            cv = cod;
            nv_ant = n_vendas;
        } 

        pl_total = ((pv_total - pc_total) / pc_total) * 100;
        
    }

    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %d\n", l10);      
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %d\n", l1020);      
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %d\n", l20);      
    printf("Codigo da mercadoria que gerou maior lucro: %lu\n", cl);      
    printf("Codigo da mercadoria mais vendida: %lu\n", cv);      
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n", pc_total, pv_total, pl_total); 

    return 0;
}