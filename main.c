#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

struct Employee
{//STRUCT COM 15 VARIÁVEIS
    char Id[30];//matrícula
    char Name[100];//nome
    char DateBirthday[12];//aniversário
    char Office[50];//cargo
    char CPF[12];
    char Sector[35];//setor
    char Shift[20];//turno
    char DateAdmission[12];//admissão
    double Salary;//salário
    char MaritalStatus[2];//estado civil
    char Nationality[20];//nacionalidade
    char Street[150];//Rua
    int Number;//numero
    char Complement[30];//complemento
    char Neighborhood[30];//Bairro
    char City[30];//Cidade
};

struct Employee funcionario[100];
typedef struct Employee FUNC;
int n = 0;//contador da lista
char numstr[40];//converte número em str
char buscar[60];//para realizar consulta
int i = 0;//indice

int main()
{
	char opc;
	const int TRUE = 1;
		while (TRUE)
		{
			layout();
			printf("\n\t\t\t (C) - Cadastro  Funcion%crio",160);
			printf("\n\t\t\t (L) - Lista de  Funcion%crios",160);
			printf("\n\t\t\t (G) - Gravar Arquivos");
			printf("\n\t\t\t (R) - Ler Arquivos");
			printf("\n\t\t\t (F) - Finalizar Programa");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n\t\t\t Op%c%co: ", 135,198);
	    	opc = getche();
    		switch (opc)
        	{
    		case 'c':tela_funcionario();break;
     		case 'C':tela_funcionario();break;
    		case 'l':lista_funcionario();break;
     		case 'L':lista_funcionario();break;
			case 'g':grava_funcionario();break;
			case 'G':grava_funcionario();break;
			case 'r':ler_funcionario();break;
			case 'R':ler_funcionario();break;
            case 'f':
	        	 printf("\n");
	        	 printf("\n");
                 printf("\n\t\t\t Programa Finalizado\n");
        	     printf("\n");
        	     printf("\n\t\t\t ");
        	     system("pause");
        	     return EXIT_SUCCESS;
        	     return 0;
	        case 'F':
	        	 printf("\n");
	        	 printf("\n");
                 printf("\n\t\t\t Programa Finalizado\n");
        	     printf("\n");
        	     printf("\n\t\t\t ");
        	     system("pause");
        	     return EXIT_SUCCESS;
        	     return 0;
        	     break;
        	default:
        		 printf("\n");
                 printf("\n\t\t\t Opcao Inválida\n");
                 printf("\n\t\t\t ");
                 system("pause");
        	     break;
	    }
	}
}

int tela_funcionario()
{
   	char  opc1;
	const int TRUE = 1;
		while (TRUE)
		{
			layout();
			printf("\n\t\t\t (I) - Inclus%co  Funcion%crio",198,160);
			printf("\n\t\t\t (C) - Consulta   Funcion%crio",160);
			printf("\n\t\t\t (E) - Excluir   Funcion%crio",160);
			printf("\n\t\t\t (V) - Menu Anterior");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n\t\t\t Op%c%co: ", 135,198);
	    	opc1 = getche();
    		switch(opc1)
        	{
    			case 'I':inclusao_funcionario();break;
     			case 'i':inclusao_funcionario();break;
				case 'e':exclui_funcionario(); break;
				case 'E':exclui_funcionario(); break;
    			case 'C':consulta_funcionario(); break;
     			case 'c':consulta_funcionario(); break;
     			case 'V':return EXIT_SUCCESS;
        	     	return 0;
			     	break;
	        	case 'v':return EXIT_SUCCESS;
        	     	return 0;
			     	break;
        		default:
        		 	printf("\n");
                 	printf("\n\t\t\t Opcao Inv%clida\n",160);
                 	printf("\n\t\t\t ");
                 	system("pause");
        	     	break;
        }
    }
}

int inclusao_funcionario()
{
	layout();
	printf("\n\t\t\t C A D A S T R O  F U N C I O N A R I O");
    printf("\n");
    printf("\n%d %c Cadastro\nDefina um Id para o Usu%crio: ", n + 1,167,160);
	gets(funcionario[n].Id);
	strupr(funcionario[n].Id);
	printf("\nDigite o Nome do Funcion%crio.......: ",160);
	gets(funcionario[n].Name);
	printf("\nDigite a data de Nascimento DD/MM/AAAA..........: ");
	gets(funcionario[n].DateBirthday);
	printf("\nDigite o CPF............: ");
	gets(funcionario[n].CPF);
	printf("\nDigite o Estado Civil............: ");
	gets(funcionario[n].MaritalStatus);
	printf("\nDigite a Nacionalidade............: ");
	gets(funcionario[n].Nationality);
	printf("\nDigite a Cidade............: ");
	gets(funcionario[n].City);
	printf("\nDigite o Bairro............: ");
	gets(funcionario[n].Neighborhood);
	printf("\nDigite a Rua............: ");
	gets(funcionario[n].Street);
	printf("\nDigite o N%cmero............: ",163);
	gets(numstr);
	funcionario[n].Number=atoi(numstr);
	printf("\nDigite o Complemento............: ");
	gets(funcionario[n].Complement);
	printf("\nDigite o Cargo............: ");
	gets(funcionario[n].Office);
	printf("\nDigite o Setor............: ");
	gets(funcionario[n].Sector);
	printf("\nDigite o Turno............: ");
	gets(funcionario[n].Shift);
	printf("\nDigite Data de Admiss%co DD/MM/AAAA............: ",198);
	gets(funcionario[n].DateAdmission);
	printf("\nDigite o Sal%crio............: ",160);
	gets(numstr);
	funcionario[n++].Salary=atof(numstr);		
    printf("\n"); 
    return 0;
    
}

int consulta_funcionario()
{  
	NOVO:layout();
	printf("\n\t\t\t\   C O N S U L T A  F U N C I O N A R I O");
    printf("\n");
    if (n<1)
    {
		printf ("\nLista vazia!\n");
        return;
    }
    printf("\nDigite o Id ou CPF do Funcion%crio...........: \n ",160);
    gets (buscar);//armazena a consulta
    strupr(buscar);//vai comparar a consulta
    for (i = 0; i < n; i++)
    {
		if (strcmp (buscar, funcionario[i].Id) == 0 || strcmp (buscar, funcionario[i].CPF) == 0)//retorna a consulta
        {
        	printf("\nRegistro n%cmero %d\n",163, i+1);
            printf("\nId...........: %s\n", funcionario[i].Id);
            printf("\nNome...........: %s\n", funcionario[i].Name);
            printf("\nData de Nascimento...........: %s\n", funcionario[i].DateBirthday);
            printf("\nCPF...........: %s\n", funcionario[i].CPF);
            printf("\nEstado Civil...........: %s\n", funcionario[i].MaritalStatus);
            printf("\nNacionalidade...........: %s\n", funcionario[i].Nationality);
            printf("\nCidade...........: %s\n",funcionario[i].City);
            printf("\nBairro...........: %s\n", funcionario[i].Neighborhood);
            printf("\nRua...........: %s\n", funcionario[i].Street);
            printf("\nN%cmero...........: %d\n",163, funcionario[i].Number);
            printf("\nComplemento...........: %s\n",funcionario[i].Complement);
            printf("\nCargo...........: %s\n",funcionario[i].Office);
            printf("\nSetor...........: %s\n",funcionario[i].Sector);
            printf("\nTurno...........: %s\n",funcionario[i].Shift);
            printf("\nData de Admiss%co...........: %s\n",198,funcionario[i].DateAdmission);
            printf("\nSal%crio...........: %4.2f\n",160,funcionario[i].Salary);
            printf("\n");
        }
    }
    	
	system("pause")	;
}

int lista_funcionario()
{        
	NOVO:layout();
	printf("\n\t\t\tL I S T A  D E  F U N C I O N A R I O S");
    printf("\n");	
	int j;
	if (n<1)
	{ //se o contador for 0, não haverá listagem
		printf ("\nLista vazia !");
	    return;
	}
	for(j=0;j<n;j++)
	{
		printf("\nRegistro n%cmero %d\n",163, j+1);
        printf("\nId...........: %s\n", funcionario[j].Id);
        printf("\nNome...........: %s\n", funcionario[j].Name);
        printf("\nData de Nascimento...........: %s\n", funcionario[j].DateBirthday);
        printf("\nCPF...........: %s\n", funcionario[j].CPF);
        printf("\nEstado Civil...........: %s\n", funcionario[j].MaritalStatus);
        printf("\nNacionalidade...........: %s\n", funcionario[j].Nationality);
        printf("\nCidade...........: %s\n",funcionario[j].City);
        printf("\nBairro...........: %s\n", funcionario[j].Neighborhood);
        printf("\nRua...........: %s\n", funcionario[j].Street);
        printf("\nN%cmero...........: %d\n",163, funcionario[j].Number);
        printf("\nComplemento...........: %s\n",funcionario[j].Complement);
        printf("\nCargo...........: %s\n",funcionario[j].Office);
        printf("\nSetor...........: %s\n",funcionario[j].Sector);
        printf("\nTurno...........: %s\n",funcionario[j].Shift);
        printf("\nData de Admiss%co...........: %s\n",198,funcionario[j].DateAdmission);
        printf("\nSal%crio...........: %4.2f\n",160,funcionario[j].Salary);
        printf("\n");
	}
	system("pause")	;
}

int grava_funcionario()
{	    
	layout();
    printf("\n\t\t\tG R A V A  F U N C I O N A R I O S");
    printf("\n");
	FILE *fptr;
	if (n<1)
	{
		printf("\nNão é possível gravar lista vazia !n");
	    return;
	}
	if(( fptr = fopen ("Informacoes.txt","wb")) == NULL)
	{
		printf("\nNão é possível abrir arquivo Informacoes.rec\n");
	}else
	{
		fwrite(funcionario,sizeof(funcionario[0]),n,fptr);
		fclose(fptr);
		printf("\n%d registros gravados.\n",n);
	}
    system ("pause");
	return EXIT_SUCCESS;
	return 0;
}

int ler_funcionario()
{
	layout();
	printf("\n\t\t\tL E R  F U N C I O N A R I O S ");
    printf("\n"); 
       
	FILE *fptr;
	if((fptr = fopen ("Informacoes.txt","rb")) == NULL)
	{
		printf("\nNão é possível abrir arquivo Informacoes.rec.n");
	}else
	{
		while(fread(&funcionario[n],sizeof(funcionario[n]),1,fptr) == 1)
		n++;
		fclose(fptr);
		printf("\nArquivo lido!\n");
		printf("\nO total de Cadastros agora e: %d.\n", n);
	}
    system ("pause");
	return EXIT_SUCCESS;//fechou com sucesso
	return 0;
}
      
int exclui_funcionario()
{
	layout();
	printf("\n\t\t\tE X C L  U I R   F U N C I O N A R I O S ");
    printf("\n"); 
        
    FILE* arquivo,*arquiv2;
    FUNC opc;
    int achou = 0,posicao = 0,a;
    char AltNome[50];
    char aa;
	    
    printf("\nDigite o Id ou CPF do Funcion%crio...........: \n ",160);
    fflush(stdin);
    gets(AltNome);
    arquivo = fopen("Informacoes.txt","r");
   	arquiv2 = fopen("Informacoes2.txt","w");
	       
    //system("cls");
    while(fread(&opc, sizeof(FUNC), 1, arquivo)==1){
    	aa='s';
    	if(strcmp(AltNome,opc.Id)!= 0 || strcmp(AltNome,opc.CPF)!= 0){
    		
			fwrite(&opc, sizeof(FUNC),1,arquiv2);
    	}
    	else{
				printf("\nRegistro n%cmero %d\n", i+1,163);
            	printf("\nId...........: %s\n", funcionario[i].Id);
            	printf("\nNome...........: %s\n", funcionario[i].Name);
            	printf("\nData de Nascimento...........: %s\n", funcionario[i].DateBirthday);
            	printf("\nCPF...........: %s\n", funcionario[i].CPF);
            	printf("\nEstado Civil...........: %s\n", funcionario[i].MaritalStatus);
            	printf("\nNacionalidade...........: %s\n", funcionario[i].Nationality);
            	printf("\nCidade...........: %s\n",funcionario[i].City);
            	printf("\nBairro...........: %s\n", funcionario[i].Neighborhood);
            	printf("\nRua...........: %s\n", funcionario[i].Street);
            	printf("\nN%cmero...........: %d\n",163, funcionario[i].Number);
            	printf("\nComplemento...........: %s\n",funcionario[i].Complement);
            	printf("\nCargo...........: %s\n",funcionario[i].Office);
            	printf("\nSetor...........: %s\n",funcionario[i].Sector);
            	printf("\nTurno...........: %s\n",funcionario[i].Shift);
            	printf("\nData de Admiss%co...........: %s\n",198,funcionario[i].DateAdmission);
            	printf("\nSalário...........: %4.2f\n",funcionario[i].Salary);
            	printf("\n");
            	printf("Quer Excluir Mesmo Esse Produto ? S/N ");
            	fflush(stdin);
            	scanf("%c",&aa);
            	if(toupper(aa)=='N'){
					fwrite(&opc, sizeof(FUNC),1,arquiv2);
            	}
            	else{
					printf("Arquivo excluido com sucesso.\n");
                	getch();
            	}
        	}
	}
    fclose(arquivo);
    fclose(arquiv2);
    remove("Informacoes.txt");
    rename("Informacoes2.txt","Informacoes.txt");
    	
    return 0;
}
			
int layout()
{
	system("cls");
	system("color 0a");
    printf("\n\t\t\t\xC9\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBB");
	printf("\n\t\t\t\xBA C O N T R O L  E M P L O Y E E \xBA");
	printf("\n\t\t\t\xC8\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xBC");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	return 0;
}





