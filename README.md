# c-program
My codes in C and C++

###Union em C

'union' é um tipo de dados no qual permite-se que você possa criar uma estrutura de dados que contenha vários tipos de dados diferentes dentro dela, imitando um Object em javascript, mas diferente deste, eles compartilham entre si o mesmo tamanho de memória, e esse tamanho é definido de acordo com a maior variável, para acessar o valor interno basta por um ponto '.'.

Veja um exemplo [aqui](https://github.com/Leandro-Araujo/c-program/blob/master/union.c)

###Struct em C

'struct' é bem parecido com o 'union' com a diferença que o tamanho total do dado será a soma de todos os elementos que o compõe.

### Sizeof

'sizeof' não é uma função, e sim um operador da linguagem, serve para mostrar o tamanho de uma variável, muito utilizado com 'struct' e 'union'.

### __func__

Variável interna da função que diz o dela, muito útil em *python* por exemplo, porque é muito usado para definir um módulo comum de um módulo raiz.
