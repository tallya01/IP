#include <stdio.h>

int main()
{
	int tamanho,cor_fundo,v[200][200];
	int x=0,y=0,cor,raio,estilo;
	int i,j,k;

	scanf("%d %d", &tamanho,&cor_fundo);
	
	for(i=0;i<tamanho;i++)
	{
		for(j=0;j<tamanho;j++)
		{
			v[i][j]=cor_fundo;
		}
	}

	while(1)
	{
		scanf("%d %d", &x,&y);
		if(x==-1 && y==-1)	break;
		scanf("%d %d %d",&cor,&raio,&estilo);	
		
			
		if(x+raio<tamanho && y+raio<tamanho)
		{
			//se só a borda
			if(estilo==1)
			{
				for(j=y-raio;j<=y+raio;j++)	//a
				{
					v[x-raio][j]=cor;
				}
			
				for(i=x-raio;i<=x+raio;i++)	//b
				{
					v[i][j-raio]=cor;
				}
			
				for(j=y-raio;j<=y+raio;j++)	//c
				{
					v[x+raio][j]=cor;
				}
			
				for(i=x-raio;i<=x+raio;i++)	//d
				{
					v[i][y-raio]=cor;
				}
			}
		
			//se preenchida
			else
			{
				for(i=x-raio;i<=x+raio;i++)
				{
					for(j=y-raio;j<=y+raio;j++)
					{
						v[i][j]=cor;
					}
				}
			}
		}	
	}
	
	printf("P2\n%d %d\n255\n", tamanho,tamanho);

	for(i=0;i<tamanho;i++)
	{
		for(j=0;j<tamanho;j++)
		{
			printf("%d",v[i][j]);
			if(j<tamanho-1)	printf(" ");
		}
		printf("\n");
	}


    return 0;
}