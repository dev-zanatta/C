#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // para usar getch(), getche()
#include <locale.h>// para setar linguagem.
#include <string.h>// para usar funçoes de strings ex:strcmp()

typedef struct elemento ELEMENTO;// elemento é um apelido, ELEMENTO é nome do tipo que será usado no programa.
struct elemento{
    char nome[30];
    char sigla[3];
    int grupo;
    int periodo;
    int numero_atomico;
    double massa_atomica;
};

/* void nome_do_programa();
 * acao:        limpa a tela e printa um cabeçalho do programa
 * entrada:     nenhuma
 * saida:       nenhuma
 * suposicoes:  nenhuma
 * algoritmo:   imprime instruçoes na tela.
 */
void nome_do_programa();

/* void input_elemento();
 * acao:        acrescenta elemento na tabela periódica.
 * entrada:     nenhuma
 * saida:       nenhuma
 * suposicoes:  nenhuma
 * algoritmo:   abre arquivo em modo append, atraves de estrutura de repetiçao "do" recebe entradas do usuario e escreve no arquivo.
 */
void input_elemento();

//função para listar tabela de elementos.
void print_tabela();

//função para excluir elementos.
void excluir_elemento();

//função para calcular mols de substancia.
void calculadora_mols_para_gramas();

//função para calcular gramas de substancia.
void calculadora_gramas_para_mols();

//função para distribuição eletrônica.
void distribuicao_eletronica();

//função que pesquisa elemento pela sigla e retorna double com sua massa atomica.
double pesquisar_massa_por_sigla(char sigla[]);

//função que pesquisa elemento pela sigla e retorna double com seu número atômico.
int pesquisar_numeroatomico_por_sigla(char sigla[]);

//função de pesquisa do menu por nome.
int pesquisar_nome(char pesquisa[], char categoria_da_pesquisa[]);

//função de pesquisa do menu por grupo e periodo.
int pesquisar_g_p(int pesquisa, char categoria_da_pesquisa[]);

//função principal.
int main(){
    setlocale(LC_ALL,"Portuguese");//linha do codigo que seta a língua, resolvendo problemas de acentuação.
    int opcao;//salva a escolha que usuario der de entrada.

    //Menu com estrutura de repetição.
    do{
        fflush(stdin);
        nome_do_programa();
        printf("[1] _ Inserir Elemento\n");
        printf("[2] _ Pesquisar Elemento\n");
        printf("[3] _ Pesquisar Elemento por Grupo\n");
        printf("[4] _ Pesquisar Elemento por Período\n");
        printf("[5] _ Tabela de elementos\n");
        printf("[6] _ Excluir elemento\n");
        printf("[7] _ Calculadora mols para gramas\n");
        printf("[8] _ Calculadora gramas para mols\n");
        printf("[9] _ Distribuição Eletrõnica\n");
        printf("[0] _ Sair\n\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);//linha do codigo que pega a entrada do usuario.

        //escopo de opções com switch case, cada case tem seu break.
        switch(opcao){
        case 1:
            input_elemento();//caso digite 1 chama a função de inserir.
            break;

        case 2:{
            nome_do_programa();
            char tipo_de_pesquisa[]="nome";
            char nome[30];
            fflush(stdin);
            printf("Digite o nome de elementos a pesquisar: ");
            gets(nome);
            pesquisar_nome(nome, tipo_de_pesquisa);
            system("pause");
            break;
        }

        case 3:{
            nome_do_programa();
            char tipo_de_pesquisa[]="grupo";
            int grupo;
            fflush(stdin);
            printf("Digite o grupo de elementos a pesquisar: ");
            scanf("%d", &grupo);
            pesquisar_g_p(grupo, tipo_de_pesquisa);
            system("pause");
            break;
        }

        case 4:{
            nome_do_programa();
            char tipo_de_pesquisa[]="periodo";
            int periodo;
            fflush(stdin);
            printf("Digite o período de elementos a pesquisar: ");
            scanf("%d", &periodo);
            pesquisar_g_p(periodo, tipo_de_pesquisa);
            system("pause");
            break;
        }

        case 5:
            print_tabela();//caso digite 5 chama função q lista a tabela.
            break;

        case 6:
            excluir_elemento();//caso digite 6 chama função para excluir elemento.
            break;

        case 7:
            calculadora_mols_para_gramas();//caso digite 7 chama função da calculadora mols para gramas.
            break;

        case 8:
            calculadora_gramas_para_mols();//caso digite 8 chama função da calculadora mols para gramas.
            break;

        case 9:
            distribuicao_eletronica();//caso digite 9 chama função de distribuição eletrônica.
            break;

        case 0:
            nome_do_programa();
            printf("CRÉDITOS...\n\n");
            printf("_______________________________________________________________________________________________\n\n");
            printf("Colaboradores:\n\n");
            printf("Vitor Augusto Philipssen Bohn\n");
            printf("João Paulo Paiva\n");
            printf("Gustavo Zanatta\n");
            printf("Rafael Susin\n");
            printf("Lucas Meneguetti Gaias\n\n\n");
            printf("   ______ _          _                 _            \n");
            printf("  |  __  | |        (_)               | |       _   \n");
            printf("  | |  | | |__  _ __ _  __ _  __ _  __| | ___  | |  \n");
            printf("  | |  | | '_ || '__| || _` |/ _` |/ _` || _ | | |  \n");
            printf("  | |__| | |_) | |  | | (_| | (_| | (_| | (_)| |_|  \n");
            printf("  |______|_.__/|_|  |_||__, ||__,_||__,_||___|  _   \n");
            printf("                        __/ |                  |_|  \n");
            printf("                       |___/                        \n");
            printf("_______________________________________________________________________________________________\n\n");
            getch();//fica esperando entrada.
            break;

        default:
            printf("Opção Inválida!\n");//caso o usuario digite uma opção diferente.
            getch();//fica esperando entrada pra continuar rodando.
            break;
        }
       }while(opcao!=0);//condição de saida da estrutura de repetição do menu.
return 0;
}

void nome_do_programa(){
    system("cls");//limpa a tela.
    printf("_______________________________________________________________________________________________\n\n");
    printf(" _____     _        _         _____        _        _ _           ______ _      _ _         _  \n");
    printf("|_   _|   | |      | |       | ___ |      (_)      | (_)          |  _  (_)    (_) |       | | \n");
    printf("  | | __ _| |__ ___| | __ _  | |_/ /_ _ __ _ ___ __| |_ ___ __ _  | | | |_ __ _ _| |_  __ _| | \n");
    printf("  | || _` | '_ | _ | |/ _` | |  __/_ | '__| | _ | _` | | __/ _` | | | | | | _` | | __|/ _` | | \n");
    printf("  | ||(_| | |_)| __/ ||(_| | | | | __/ |  | |(_)|(_| | |(__|(_| | | |/ /| |(_| | | |_ |(_| | | \n");
    printf("  |_||__,_|_.__/___|_||__,_| |_| |___|_|  |_|___|__,_|_|___|__,_| |___/ |_|__, |_|___||__,_|_| \n");
    printf("                                                                            _/ |               \n");
    printf("                                                                           |___/               \n");
    printf("_______________________________________________________________________________________________\n\n");
}

void input_elemento(){
    FILE*arquivo;//ponteiro pra arquivo.
    ELEMENTO elm;//referencia de ELEMENTO.

    arquivo=fopen("elementos.txt", "ab");// abre para acréscimo se já existe e cria se nao existir, arquivo binário modo append

//pode haver falha na hora de abrir o arquivo.
//logo testamos se não ocorrerá problemas verificando se a variável nao esta vazia.
    if(arquivo==NULL){
        printf("Falha na leitura do arquivo!!!\n");// caso variável esteja vazia mostra mensagem na tela.
    }
    else{
        //estrutura de repetição para inserir dados do elemento.
        do{
            nome_do_programa();//limpa o menu da tela e mostra o cabeçalho.
            printf("_______________________________________________________________________________________________\n\n");
            printf("CADASTRANDO ELEMENTO...\n");
            printf("Digite o número atômico: ");
            scanf("%d", &elm.numero_atomico); //scanf pq recebe valor no tipo int

            fflush(stdin);
            printf("Digite a sigla do elemento: ");
            gets(elm.sigla);

            fflush(stdin);//limpa o buffer do teclado, porque serão usadas strings.
            printf("Digite o nome do elemento: ");
            gets(elm.nome);//recebe no formato do ELEMENTO, gets porque é vetor de char.

            printf("Digite a massa atômica: ");
            scanf("%lf", &elm.massa_atomica);//scanf pq recebe valor no tipo double

            printf("Digite o grupo do elemento: ");
            scanf("%d", &elm.grupo); //scanf pq recebe valor no tipo int

            printf("Digite o período do elemento: ");
            scanf("%d", &elm.periodo); //scanf pq recebe valor no tipo int

            printf("_______________________________________________________________________________________________\n\n");

            fwrite(&elm, sizeof(ELEMENTO), 1, arquivo);//grava no arquivo a referencia elm de elemento, tamanho de ELEMENTO, 1 linha, no arquivo.
            fflush(stdin);
            printf("Deseja continuar? (s/n)");

        }while(getche() == 's');//roda a estrutura de repetição ate que o usuario digite o caractere 's'.
        fclose(arquivo);//fecha o arquivo.
    }
}

void print_tabela(){
    FILE*arquivo;//ponteiro pra arquivo.
    ELEMENTO elm;//referencia de ELEMENTO.

    arquivo=fopen("elementos.txt", "rb");// abre para leitura, arquivo binário modo read

    nome_do_programa();//mostra cabeçalho.

//pode haver falha na hora de abrir o arquivo.
//logo testamos se não ocorrerá problemas verificando se a variável nao esta vazia.
    if(arquivo==NULL){
        printf("Falha na leitura do arquivo!!!\n");// caso variável esteja vazia mostra mensagem na tela.
    }
    else{
        printf("_______________________________________________________________________________________________\n\n");
        while(fread(&elm, sizeof(ELEMENTO), 1, arquivo)==1){ //enquanto fread conseguir me retornar 1 linha, "==1" significa que ele conseguiu ler alinha do arquivo, entao nao chegou no final ainda.
            printf("Número atômico: %d\n", elm.numero_atomico);
            printf("Sigla do elemento: %s\n", elm.sigla);
            printf("Nome do elemento: %s\n", elm.nome);
            printf("Massa atômica: %.3lf\n", elm.massa_atomica);
            printf("Grupo do elemento: %d\n", elm.grupo);
            printf("período do elemento: %d\n", elm.periodo);
            printf("__________________________________________\n\n");
        }
    }
    fclose(arquivo);// fecha arquivo.
    getch();//necessario para os prints permanecerem na tela ate nova entrada.
}

void excluir_elemento(){
    FILE *arquivo, *arquivo_temp;//ponteiro para arquivo e arquivo temporario.
    ELEMENTO elm;//referencia da struct ELEMENTO.
    char nome[30];//variavel para receber entrada do usuario.

    arquivo=fopen("elementos.txt", "r+b");// abre para leitura e escrita, arquivo binário, apartir do inicio o arquivo deve existir.
    arquivo_temp=fopen("temporario.txt", "wb");// cria arquivo vazio para escrita, se ele já existia é perdido.

//pode haver falha na hora de abrir o arquivo.
//logo testamos se não ocorrerá problemas verificando se a variável nao esta vazia.
    if(arquivo==NULL||arquivo_temp==NULL){
        printf("\nFalha na leitura do arquivo!!!\n");// caso variável esteja vazia mostra mensagem na tela.
    }
    else{
        nome_do_programa();//limpa o menu da tela e mostra o cabeçalho.
        printf("_______________________________________________________________________________________________\n\n");
        fflush(stdin);//limpa o buffer do teclado, porque serão usadas strings.
        printf("Digite o nome do elemento que deseja excluir: ");
        gets(nome);//recebe e salva na variavel nome, gets porque é vetor de char.

        while(fread(&elm, sizeof(ELEMENTO), 1, arquivo)==1){//enquanto fread conseguir me retornar 1 linha, "==1", significa que ele conseguiu ler a linha do arquivo, entao nao chegou no final ainda.
            if(strcmp(nome, elm.nome)!=0){ //compara se o nome do elmento for diferente do que eo usuario deseja excluir
                fwrite(&elm, sizeof(ELEMENTO), 1, arquivo_temp);//escreve a struct do elemento no arquivo temporario
                }
        }
    }
    if(ferror(arquivo_temp)){//caso arquivo apresente erro.
        printf("_______________________________________________________________________________________________\n\n");
        printf("\nERRO AO EXCLUIR!!!\n");//printa mensagem para o usuário de erro.
        printf("_______________________________________________________________________________________________\n\n");
    }
    else{
        printf("_______________________________________________________________________________________________\n\n");
        printf("\nEXCLLUIDO COM SUCESSO!!!\n");//printa mensagem para o usuário de sucesso.
        printf("_______________________________________________________________________________________________\n\n");
    }
    fclose(arquivo);//fecha uarquivo.
    fclose(arquivo_temp);//fecha arquivo temporario.
    remove("elementos.txt");//exclui arquivo elemento.txt.
    rename("temporario.txt", "elementos.txt");//renomeia temporario.txt para elemento.txt.
    system("pause");//pausa programa esperando entrada do usuario
}

void calculadora_mols_para_gramas(){
    char substancia[30];//variavel que recebe a substancia entrada do usuário.
    char *elementos[10];// variavel que recebe a string substancia dividida por elementos.
    char *elementos_atomos[2];//variavel que recebe os elementos separados do numero de atomos. posição[0]sigla\\posição[1]atomos
    int i=0, j=0;//variaveis auxiliares
    int contador_de_elementos=0;//salvar o numero total de elementos da substancia
    double massa_total;//variavel que armazena os valores da massa atomica dos elementos enquanto estao sendo calculados.
    double numero_moleculas;//variavel que recebe o número de moléculas entrada do usuário.

    nome_do_programa();//limpa o menu da tela e mostra o cabeçalho.
    fflush(stdin);//limpa o buffer do teclado, porque serão usadas strings.
    printf("Insira a substancia separando elementos com espaços e atomos por elemento com vírgula(Ex: Na S O,4): ");
    gets(substancia);//recebe a entrada.
//função strtok ultlizada para separar strings.
    elementos[i] = strtok(substancia," ");//separa a string substancia pelo caractere "\0" e salva pela primeira vez.
    while (elementos[i] != NULL){ //enquanto o indice for diferente de nulo.
        elementos[++i] = strtok(NULL," ");//incrementa o indice e roda a função strtok novamente continuando de onde parou.
        contador_de_elementos++;//conta quantos elementos foram separados pela função.
    }
    for(j=0; j<contador_de_elementos; j++){ //laço for que percorre o vetor aonde foram salvos os elementos separados pela função strtok.
        int k=0;//variavel auxiliar, valor retorna a 0 a cada repetição do laço.
//função strtok ultlizada para separar strings.
        elementos_atomos[k] = strtok(elementos[j],",");//separa cada elemento do seu numero de atomos pelo caractere",".
        while (elementos_atomos[k] != NULL){//enquanto o indice for diferente de nulo.
            elementos_atomos[++k] = strtok(NULL,",");//incrementa o indice e roda a função strtok novamente continuando de onde parou.
        }
        printf("_______________________________________________________________________________________________\n\n");
        printf("\n%s\n", elementos_atomos[0]);//printa o elemento
        printf("Massa atômica: %.3lf\n", pesquisar_massa_por_sigla(elementos_atomos[0]));//chama a função e printa o valor da massa atomica pesquisando pela sigla no arquivo.

        if(elementos_atomos[1]==NULL){ //caso o elemento tenha valor nulo de atomos como entrada.
            elementos_atomos[1]="1";//iguala o valor a um_atomo, resolvido de maneira a continuar sendo char.
            printf("Número de atomos do elemento: %s\n", elementos_atomos[1]);//printa o valor.
        }
        else{//caso o valor nao seja nulo.
            printf("Número de atomos do elemento: %s\n", elementos_atomos[1]);//printa o valor.
        }
//atribui valor a massa total, usando a função que retorna o numero da massa atomica do elemento.
//multiplicadndo esse valor pelo valor do numero de atomos do elemento.
//ultilização da função atoi para converter char em int.
//observe como o valor da massa atomica é double sera convertido automaticamente para o maior.
        massa_total+=(pesquisar_massa_por_sigla(elementos_atomos[0])*atol(elementos_atomos[1]));
        printf("_______________________________________________________________________________________________\n\n");
    }//final do laço
    printf("_______________________________________________________________________________________________\n\n");
    printf("\nDigite o número de moléculas da substância: \n");//pede entrada do usuário.
    scanf("%lf", &numero_moleculas);
    printf("\nMassa Atômica: %.3lf g/mol\n\n", massa_total);
    printf("\nValor em gramas de %.lf moléculas da substância: %.3lf g\n", numero_moleculas, massa_total*numero_moleculas);//retorna o resultado, multiplicando a massa atomica total pelo numero de moleculas.
    printf("_______________________________________________________________________________________________\n\n");
    system("pause");//pausa programa esperando entrada do usuario.
}

void calculadora_gramas_para_mols(){
    char substancia[30];//variavel que recebe a substancia entrada do usuário.
    char *elementos[10];// variavel que recebe a string substancia dividida por elementos.
    char *elementos_atomos[2];//variavel que recebe os elementos separados do numero de atomos. posição[0]sigla\\posição[1]atomos
    int i=0, j=0;//variaveis auxiliares
    int contador_de_elementos=0;//salvar o numero total de elementos da substancia
    double massa_total;//variavel que armazena os valores da massa atomica dos elementos enquanto estao sendo calculados.
    double peso_substancia;

    nome_do_programa();//limpa o menu da tela e mostra o cabeçalho.
    fflush(stdin);//limpa o buffer do teclado, porque serão usadas strings.
    printf("Insira a substancia separando elementos com espaços e atomos por elemento com vírgula(Ex: Na S O,4): ");
    gets(substancia);//recebe a entrada.
//função strtok ultlizada para separar strings.
    elementos[i] = strtok(substancia," ");//separa a string substancia pelo caractere "\0" e salva pela primeira vez.
    while (elementos[i] != NULL){ //enquanto o indice for diferente de nulo.
        elementos[++i] = strtok(NULL," ");//incrementa o indice e roda a função strtok novamente continuando de onde parou.
        contador_de_elementos++;//conta quantos elementos foram separados pela função.
    }
    for(j=0; j<contador_de_elementos; j++){ //laço for que percorre o vetor aonde foram salvos os elementos separados pela função strtok.
        int k=0;//variavel auxiliar, valor retorna a 0 a cada repetição do laço.

        //função strtok ultlizada para separar strings.
        elementos_atomos[k] = strtok(elementos[j],",");//separa cada elemento do seu numero de atomos pelo caractere",".
        while (elementos_atomos[k] != NULL){//enquanto o indice for diferente de nulo.
            elementos_atomos[++k] = strtok(NULL,",");//incrementa o indice e roda a função strtok novamente continuando de onde parou.
        }
        printf("_______________________________________________________________________________________________\n\n");
        printf("\n%s\n", elementos_atomos[0]);//printa o elemento
        printf("Massa atômica: %.3lf\n", pesquisar_massa_por_sigla(elementos_atomos[0]));//chama a função e printa o valor da massa atomica pesquisando pela sigla no arquivo.

        if(elementos_atomos[1]==NULL){ //caso o elemento tenha valor nulo de atomos como entrada.
            elementos_atomos[1]="1";//iguala o valor a um_atomo, resolvido de maneira a continuar sendo char.
            printf("Número de atomos do elemento: %s\n", elementos_atomos[1]);//printa o valor.
        }
        else{//caso o valor nao seja nulo.
            printf("Número de atomos do elemento: %s\n", elementos_atomos[1]);//printa o valor.
        }
//atribui valor a massa total, usando a função que retorna o numero da massa atomica do elemento.
//multiplicando esse valor pelo valor do numero de atomos do elemento.
//ultilização da função atoi para converter char em int.
//observe como o valor da massa atomica é double sera convertido automaticamente para o maior.
        massa_total+=(pesquisar_massa_por_sigla(elementos_atomos[0])*atol(elementos_atomos[1]));
        printf("_______________________________________________________________________________________________\n\n");
    }//final do laço
        printf("_______________________________________________________________________________________________\n\n");
        printf("\nDigite o peso em gramas da substância: \n");//pede entrada do usuário.
        scanf("%lf", &peso_substancia);
        printf("\nMassa Atômica: %.3lf g/mol\n\n", massa_total);
        printf("\nNúmero de mols em %.3lf gramas da subtância: %lf\n",peso_substancia, peso_substancia/massa_total);//retorna o resultado, multiplicando a massa atomica total pelo numero de moleculas.
        printf("_______________________________________________________________________________________________\n\n");
        system("pause");//pausa programa esperando entrada do usuario.
}

void distribuicao_eletronica(){
    int i=0, numero_atomico=0;//variaveis auxiliares
    int K=0, L=0, M=0, N=0, O=0, P=0, Q=0;//declaração de inteiros para as camadas
    int v[18];//vetor de inteiros numero de atomos por subnivel
    char *sb[18];//vetor de char para as subniveis
    char sigla[3];
    nome_do_programa();
    fflush(stdin);
    printf("Digite a sigla do elemento.(Ex:Cádmio --> Sigla:Cd): ");
    gets(sigla);
    numero_atomico=pesquisar_numeroatomico_por_sigla(sigla);
//inicializando valores no vetor de subniveis
    v[0]=2;//1s2
    v[1]=2;//2s2
    v[2]=6;//2p6
    v[3]=2;//3s2
    v[4]=6;//3p6
    v[5]=2;//4s2
    v[6]=10;//3d10
    v[7]=6;//4p6
    v[8]=2;//5s2
    v[9]=10;//4d10
    v[10]=6;//5p6
    v[11]=2;//6s2
    v[12]=10;//5d10
    v[13]=6;//6p6
    v[14]=2;//7s2
    v[15]=14;//5f14
    v[16]=10;//6d10
    v[17]=6;//7p6
//inicializando valores no vetor de camadas
    sb[0]="1s";
    sb[1]="2s";
    sb[2]="2p";
    sb[3]="3s";
    sb[4]="3p";
    sb[5]="4s";
    sb[6]="3d";
    sb[7]="4p";
    sb[8]="5s";
    sb[9]="4d";
    sb[10]="5p";
    sb[11]="6s";
    sb[12]="5d";
    sb[13]="6p";
    sb[14]="7s";
    sb[15]="5s";
    sb[16]="6s";
    sb[17]="7s";
    printf("\n\n_______________________________________________________________________________________________\n\n");
    printf("Distribuicao eletronica por subniveis:\n\n");
    for (i=0; i<18; i++){//laço que percorre subniveis.
        if (numero_atomico>=v[i]){//se o subnivel tiver valor menor que o número atômico.
            printf("%s%d ", sb[i], v[i]);
            if (strstr(sb[i], "1")!=NULL){//verifica se está na camada K.
                K+=v[i];
            }
            if (strstr(sb[i], "2")!=NULL){//verifica se está na camada L.
                L+=v[i];
            }
            if (strstr(sb[i], "3")!=NULL){//verifica se está na camada M.
                M+=v[i];
            }
            if (strstr(sb[i], "4")!=NULL){//verifica se está na camada N.
                N+=v[i];
            }
            if (strstr(sb[i], "5")!=NULL){//verifica se está na camada O.
                O+=v[i];
            }
            if (strstr(sb[i], "6")!=NULL){//verifica se está na camada P.
                P+=v[i];
            }
            if (strstr(sb[i], "7")!=NULL){//verifica se está na camada Q.
                Q+=v[i];
            }
            numero_atomico-=v[i];
        }
        else
            if(numero_atomico!=0){
                printf("%s%d ", sb[i], numero_atomico);
                if (strstr(sb[i], "1")!=NULL){//verifica se está na camada K.
                    K+=numero_atomico;
                }
                if (strstr(sb[i], "2")!=NULL){////verifica se está na camada L.
                    L+=numero_atomico;
                }
                if (strstr(sb[i], "3")!=NULL){////verifica se está na camada M.
                    M+=numero_atomico;
                }
                if (strstr(sb[i], "4")!=NULL){////verifica se está na camada N.
                    N+=numero_atomico;
                }
                if (strstr(sb[i], "5")!=NULL){////verifica se está na camada O.
                    O+=numero_atomico;
                }
                if (strstr(sb[i], "6")!=NULL){////verifica se está na camada P.
                    P+=numero_atomico;
                }
                if (strstr(sb[i], "7")!=NULL){////verifica se está na camada Q.
                    Q+=numero_atomico;
                }
                break;
        }
    }
    printf("\n\n_______________________________________________________________________________________________\n\n");
    printf("Distribuicao eletronica por camadas: \n\n");
    printf("K = %d\nL = %d\nM = %d\nN = %d\nO = %d\nP = %d\nQ = %d\n", K, L, M, N, O, P, Q);//printa as camadas.
    printf("_______________________________________________________________________________________________\n\n");
    system("pause");
}

//função double de suporte para calculadora conseguir buscar valor da massa atomica do elemento dentro da struct no arquivo.
double pesquisar_massa_por_sigla(char sigla[]){//recebe uma variavel double e um vetor de char com a string da sigla a ser pesquisada.
    double massa;
    FILE*arquivo;//ponteiro pra arquivo.
    ELEMENTO elm;//declaração da referencia da struct Elemento.

    arquivo=fopen("elementos.txt", "rb");//abre arquivo binário pra leitura.

    if(arquivo==NULL){//caso o arquivo de um valor nulo.
        printf("Falha na leitura do arquivo!!!\n");//avisa usuário sobre falha.
    }
    else{//caso nao falhe prossegue.
        while(fread(&elm, sizeof(ELEMENTO), 1, arquivo)==1){//enquanto fread conseguir me retornar 1 linha, "==1" significa que ele conseguiu ler alinha do arquivo, entao nao chegou no final ainda.
            if(strcmp(sigla, elm.sigla)==0){ //compara o parametro de sigla recebido com as siglas das structs no arquivo, caso seja igual, "==0".
                    massa=elm.massa_atomica;//copia valor para variavel recebida como parametro.
            }
        }
    }
    fclose(arquivo);//fecha arquivo.
    return massa;//retorna valor da massa atomica do elemento pesquisado pela sigla.
}

int pesquisar_numeroatomico_por_sigla(char sigla[]){//recebe uma variavel double e um vetor de char com a string da sigla a ser pesquisada.
    int numero_atomico;
    FILE*arquivo;//ponteiro pra arquivo.
    ELEMENTO elm;//declaração da referencia da struct Elemento.

    arquivo=fopen("elementos.txt", "rb");//abre arquivo binário pra leitura.

    if(arquivo==NULL){//caso o arquivo de um valor nulo.
        printf("Falha na leitura do arquivo!!!\n");//avisa usuário sobre falha.
    }
    else{//caso nao falhe prossegue.
        while(fread(&elm, sizeof(ELEMENTO), 1, arquivo)==1){//enquanto fread conseguir me retornar 1 linha, "==1" significa que ele conseguiu ler alinha do arquivo, entao nao chegou no final ainda.
            if(strcmp(sigla, elm.sigla)==0){ //compara o parametro de sigla recebido com as siglas das structs no arquivo, caso seja igual, "==0".
                numero_atomico=elm.numero_atomico;
            }
        }
    }
    fclose(arquivo);//fecha arquivo.
    return numero_atomico;//retorna valor da massa atomica do elemento pesquisado pela sigla.
}

int pesquisar_nome(char pesquisa[], char categoria_da_pesquisa[]){
    ELEMENTO elm;
    FILE*arquivo;
    arquivo=fopen("elementos.txt", "rb");

    if(arquivo==NULL){
        printf("Falha na leitura do arquivo!!!\n");
    }
    else{
        if(strcmp(categoria_da_pesquisa, "nome")==0){
            while(fread(&elm, sizeof(ELEMENTO), 1, arquivo)==1){
                if(strcmp(pesquisa, elm.nome)==0){
                    printf("Número atômico: %d\n", elm.numero_atomico);
                    printf("Sigla do elemento: %s\n", elm.sigla);
                    printf("Nome do elemento: %s\n", elm.nome);
                    printf("Massa atômica: %.3lf\n", elm.massa_atomica);
                    printf("Grupo do elemento: %d\n", elm.grupo);
                    printf("período do elemento: %d\n", elm.periodo);
                    printf("__________________________________________\n\n");
                }
            }
        }
    }
    fclose(arquivo);
    return 0;
}

int pesquisar_g_p(int pesquisa, char categoria_da_pesquisa[]){
    ELEMENTO elm;
    FILE*arquivo;
    arquivo=fopen("elementos.txt", "rb");

    if(arquivo==NULL){
        printf("Falha na leitura do arquivo!!!\n");
    }
    else{
        if(strcmp(categoria_da_pesquisa, "grupo")==0){
            while(fread(&elm, sizeof(ELEMENTO), 1, arquivo)==1){
                if(pesquisa==elm.grupo){
                    printf("Número atômico: %d\n", elm.numero_atomico);
                    printf("Sigla do elemento: %s\n", elm.sigla);
                    printf("Nome do elemento: %s\n", elm.nome);
                    printf("Massa atômica: %.3lf\n", elm.massa_atomica);
                    printf("Grupo do elemento: %d\n", elm.grupo);
                    printf("período do elemento: %d\n", elm.periodo);
                    printf("__________________________________________\n\n");
                }
            }
        }
        else{
            while(fread(&elm, sizeof(ELEMENTO), 1, arquivo)==1){
                if(pesquisa==elm.periodo){
                    printf("Número atômico: %d\n", elm.numero_atomico);
                    printf("Sigla do elemento: %s\n", elm.sigla);
                    printf("Nome do elemento: %s\n", elm.nome);
                    printf("Massa atômica: %.3lf\n", elm.massa_atomica);
                    printf("Grupo do elemento: %d\n", elm.grupo);
                    printf("período do elemento: %d\n", elm.periodo);
                    printf("__________________________________________\n\n");
                }
            }
        }
    }
    fclose(arquivo);
    return 0;
}
