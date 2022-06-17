# StringsEmC
### Algumas funções estruturadas em C para a manipulação de Strings.
#### Funções em teste: 
##### char *replace(char *pointer, char change[], char changeTo[]);
###### Alteração de pedaços de string. Recebe como parâmetros a frase que será modificada, o trecho para modificar e o trecho para substituir.
##### char *getString(FILE *stdBuffer);
###### Recebe da mídia selecionada um trecho de texto e faz uma alocação dinâmica para o mesmo.
##### int stringLength(char *string);
###### Retorna o tamanho de uma string, "strlen", sem contar com o caractere nulo -> '\0'.
##### int getAddress(char *pointer, char *change);
###### Função criada para auxiliar na contrução de replace. Esta em específico, retorna o índice do primeiro caractere de uma sequência em específica.
##### char *newString(char *string);
###### Cria uma nova string de maneira dinâmica, basta apenas informá-la como argumento da função.
