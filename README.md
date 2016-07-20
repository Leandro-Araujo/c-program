# c-program
My codes in C and C++

###Union em C

'union' é um operador no qual permite que você possa criar uma estrutura de dados que contenha vários tipos de dados diferentes dentro dela, imitando um Object em javascript, mas diferente deste, eles compartilham entre si o mesmo tamanho de memória, e esse tamanho é definido de acordo com a maior variável, para acessar o valor interno basta por um ponto '.'. Tome cuidado ao usá-lo, o ideal é calcular adequadamente porque algum dos dados podem ficar corrompidos, ao extrapolar o tamanho da estrutura.

Veja um exemplo [aqui](https://github.com/Leandro-Araujo/c-program/blob/master/union.c)

###Struct em C

'struct' é bem parecido com o 'union' com a diferença que o tamanho total do dado será a soma de todos os elementos que o compõe.

Veja [aqui](https://github.com/Leandro-Araujo/c-program/blob/master/struct.c)

### Sizeof

'sizeof' não é uma função, e sim um operador da linguagem, serve para mostrar o tamanho de uma variável, muito utilizado com 'struct' e 'union'.

Veja [aqui](https://github.com/Leandro-Araujo/c-program/blob/master/sizeof.c)

### __func__

Consoante interna da função que diz o nome dela, mecanismo semelhante é muito útil em *python* por exemplo, porque é muito usado para definir um módulo comum de um módulo raiz.

Veja [aqui](https://github.com/Leandro-Araujo/c-program/blob/master/__func__.c)

### register

Este especificador é opcionalmente colocado antes do tipo da variável serve para dizer que a variável deve ser armazenada, sempre que possível, nos processadores, tonando assim qualquer operação com esta variável mais rápida.

### static

Especificador que serve para criar variáveis que sempre guardará seu valor para as várias vezes que a função seja chamada.

### enum

Serve para criar uma sequencia de numeros inteiros acessados apartir de um conjunto de variáveis.

### volatile

Esta palavra chave, após uma constante(const), permite que qualquer rotina interna possa modificar seu valor, como por exemplo, um hardware.
