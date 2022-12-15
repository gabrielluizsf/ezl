# Compilador EZL
EZL é um compilador de linguagem de programação simples semelhante ao C++ construído usando Lex e Yacc.

Para mais informações sobre o EZL, consulte este [doc.txt](https://github.com/the-ezlang/ezl/tree/main/docs).

# Como usar
### 1. Instale o Lex & Yacc
Baixe e instale os pacotes geradores de compiladores **Lex** e **Yacc**.

Este compilador é construído sobre:

| Pacote | Versão |
| ----------------------- | -------------- |
| Lex | Flex v2.6.4 |
| Yacc | Bison v3.8.2 |


### 2. Instale o compilador GCC.

### 3. Crie o compilador EZL.
Execute `make build` da pasta principal do repositório para compilar o compilador.

### 4. Execute o compilador EZL.
Execute `make run` para executar o compilador recém-criado.

**_Nota:_** Você pode alterar o arquivo de entrada do `Makefile`.

# Comandos do Compilador EZL
**Sintaxe**: `EZL [-h|--help] [-v|--version] [-w|--warn] [-o|--output <output_file>] [-s|--sym_table <nome do arquivo>] <arquivo_de_entrada>`

| Comando | Descrição |
| ----------------------------------------------- | -------------------------------------------------- -------------- |
| `-h` ou `--help` | Imprima o menu de ajuda e saia. |
| `-o` ou `--output` `<nome do arquivo>` | Especifique o nome do arquivo de saída. |
| `-s` ou `--sym_table` `<nome do arquivo>` | Saída da tabela de símbolos para o arquivo fornecido |
| `-v` ou `--version` | Imprima o número da versão instalada e saia. |
| `-w` ou `--warn` | Mostrar mensagens de aviso. |

# Visão geral
Nesta seção, daremos uma breve descrição e exemplos da sintaxe e semântica permitida pelo EZL. Como dissemos, é quase idêntico à linguagem C, mas com menos recursos.

## Tipos de dados
No EZL, oferecemos suporte aos tipos de dados básicos, mas, infelizmente, não oferecemos suporte a arrays ou ponteiros.
Os tipos suportados:
- `void`: só é válido como um tipo de retorno de função para informar que não há valor para retornar.
- `int`: é um tipo de dado de valor numérico inteiro.
- `float`: é um tipo de dado de valor numérico real.
- `char`: é um tipo de dados de valor de caractere.
- `bool`: é um tipo de dados de valor booleano que aceita `true` ou `false`.

## Declarações de Variáveis/Constantes
No EZL, oferecemos suporte à declaração de variáveis e constantes com escopo definido. Cada variável ou constante tem seu próprio escopo, e várias variáveis/constantes podem ser declaradas com o mesmo identificador apenas se estiverem em escopos diferentes. Como na linguagem C, as constantes devem ser inicializadas ao serem declaradas.

**por exemplo.**

```C++
const float PI = 3.14;
const float EPS = 1e-9;
intx;
char c = 'c';
sinalizador bool = verdadeiro;
int a = 0, b, MAX = 100;
```

## Instruções de controle If-Else
Oferecemos suporte à instrução de controle if-else quase exatamente da mesma maneira que na linguagem C. Se a condição if for avaliada como um valor diferente de zero, o corpo if será executado. Caso contrário, o outro corpo será executado, se existir. If-body e else-body podem ser uma instrução ou várias instruções dentro de um bloco.

**por exemplo.**

```C++
se (x) {
     se (y > 0)
         /* if-body */
     senão se (z & 1)
         /* else-if-body */
     senão
         /* outro corpo */
}
```

## Instruções de troca
Assim como a instrução if, oferecemos suporte à instrução switch quase da mesma maneira que na linguagem C. A expressão switch deve ser de valor inteiro e a expressão case deve ser um valor inteiro constante. Além disso, não são permitidas várias expressões de caso que avaliam o mesmo valor. Como em C, o código do caso correspondente será executado e a execução continuará no código abaixo de outros casos até que uma instrução break seja encontrada.


**por exemplo.**

```C++
alternar (estado) {
caso 1:
caso 2:
     /* faça alguma coisa */
case RUNNING: // RUNNING deve ser definido como constante
     /* faça alguma coisa */
     pausa;
predefinição:
     /* padrão */
}
```

## Loops For/While/Do-While
EZL suporta loops quase da mesma maneira que na linguagem C. Damos suporte a loops for, loops while e loops do-while. Instruções de interrupção e instruções de continuação são suportadas dentro do escopo de um loop e funcionam como na linguagem C, interrompem ou continuam a execução do loop mais interno.

**por exemplo.**
```C++
for (int i = 0; i < n; ++i) {
     for (int j = 0; j < m; ++j) {
         while (i < j) // faz algo
         Prosseguir;
     }
}

Faz {
     se (condição)
         pausa;
     // faça alguma coisa
} enquanto (verdadeiro);
```

## Funções
EZL suporta funções, mas com funcionalidades limitadas do que a linguagem C. Não oferecemos suporte a parâmetros padrão. Não oferecemos suporte à prototipagem de funções nem à sobrecarga de funções.
Instruções de retorno são permitidas dentro do escopo de uma função. E as funções só podem ser definidas no escopo global.

**por exemplo.**
```C++
int fibonacci(int number) {
     return fibonacci(number - 1) + fibonacci(number - 2);
}
```

## Expressões
No EZL, oferecemos suporte a expressões complexas semelhantes às da linguagem C. Damos suporte a quase todo o conjunto de operadores suportados pela linguagem C com a mesma precedência e associatividade.

**por exemplo.**
```C++
(((++x) = y++) = (5 * 300 - MAX) ^ (1 << i)) = (z = 3);
```

## Comentários
O EZL suporta os mesmos estilos de comentário da linguagem C. Os comentários podem ser:
- Comentário de linha
    ```C++
    // Este é um comentário de linha
    ```
- Bloquear comentário (comentário de várias linhas)
   ```C++
   /**
    * Este é um comentário em bloco
    * que pode abranger
    * várias linhas
    */
   ```

# Erros detectados pelo EZL
## Erros de sintaxe
### Erros relacionados ao escopo
1. Blocos de código ou instruções (que não sejam variáveis, constantes e declaração/definição de função) no escopo global.
2. Instrução `continue` fora dos escopos `for`, `while` ou `do-while`.
3. Instrução `break` fora dos escopos `for`, `while`, `do-while` ou `switch`.
4. Instrução `return` fora do escopo da função.
5. Rótulos `case` e `default` fora do escopo do switch.

### Outros erros
1. Variável ou constante declarada com o tipo `void`.
2. Declaração constante sem inicialização.

## Erros Semânticos
### Erros relacionados a identificador/expressão
1. Redeclaração do identificador no mesmo escopo.
2. Acesso de identificador não declarado.
3. Atribuição constante após declaração.
4. Tipos de operandos inválidos. (ou seja, operandos do tipo `void` ou ponteiro para função).
5. Operando flutuante para operador de módulo.
6. Operando flutuante para operadores bit a bit.
7. Uso de variável não inicializada.
8. Operadores de incremento e decremento com o operando `rvalue`.

### Erros relacionados à instrução switch
1. Instruções `switch` e `case` com expressão não inteira.
2. Instrução `case` com expressão não constante.
3. Múltiplos rótulos `padrão` no escopo `switch`.
4. Múltiplos rótulos `case` com a mesma expressão constante no escopo `switch`.
5. Inicialização de variáveis cruzadas na instrução `switch`.

### Erros relacionados à função
1. Valor retornado na função `void` e vice-versa.
2. Void retornado na função de valor digitado.
3. Chamada de variável ou constante como uma função.
4. Chamada de função com mais/menos argumentos que seus parâmetros.
5. Chamada de função com tipo de argumento inválido (ou seja, argumento do tipo `void` ou ponteiro para função).
6. Parâmetro da função com valor padrão.

# Uso do Lex

### Lex em execução
Para gerar o código lexer usando **_Flex_**, digite o seguinte comando:

```Console
flex -o <saída>.c <entrada>.l
```

Onde `<entrada>.l` é o nome do arquivo de especificações lex de entrada e `<saída>.c` é o nome do arquivo C lexer gerado.

Para compilar o programa lexer gerado, digite o seguinte comando:

```Console
gcc <saída>.c -o <lexer_name>.exe
```

Onde `<saída>.c` é o nome do arquivo C lexer gerado e `<nome_lexer>.exe` é o nome do programa lexer compilado.

# Como usar a GUI
A GUI é construída usando python3 e PyQt5.

Para iniciar a GUI:
1. Navegue até a pasta `gui/`.
2. Rode no console:

     ```Console
     python3 main.py <ezl> <Quadruplues>.txt <SymbolsTable>.txt
     ```


