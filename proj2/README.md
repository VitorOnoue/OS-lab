# Projeto 2

## Compilando o programa em um Linux
Com o GCC instalado, abra o terminal e compile o arquivo C com esse comando:

```
gcc main.c -o [nominput/E_do_programa]
```

(O nome do programa não precisa ter o mesmo nome do arquivo)

Caso não tenha o GCC instalado em seu computador, visite: https://gcc.gnu.org/install/

## Executando o programa
Para executar o programa, basta usar o comando:

```
./[nominput/E_do_programa]
```

## Comprovando os resultados
Para facilitar, execute o arquivo samples.c.

Nesse arquivo as entradas são lidas de outros arquivos de teste (que estão na pasta input, e são nomeados input/E_x, sendo que x está entre 1 e 58), ao invés de terem sido requisitadas pelo usuário.

Há também arquivos de saída (que seguem a mesma regra dos arquivos de entrada com outros nomes: pasta output e nomeados S_x, x entre 1 e 58). A saída S_1 se refere à entrada input/E_1, e assim por diante.

Esses arquivos de saída são printados juntamente com o resultado obtido pelos cálculos do programa. Portanto, para comprovar os resultados, basta verificar se todas as respostas das saídas e dos cálculos são iguais.

## Saída do programa samples.c

```
input/E_1 - Resultado esperado = 23 - Resultado obtido = 23
input/E_2 - Resultado esperado = 29 - Resultado obtido = 29
input/E_3 - Resultado esperado = 35 - Resultado obtido = 35
input/E_4 - Resultado esperado = 42 - Resultado obtido = 42
input/E_5 - Resultado esperado = 35 - Resultado obtido = 35
input/E_6 - Resultado esperado = 56 - Resultado obtido = 56
input/E_7 - Resultado esperado = 77 - Resultado obtido = 77
input/E_8 - Resultado esperado = 100 - Resultado obtido = 100
input/E_9 - Resultado esperado = 109 - Resultado obtido = 109
input/E_10 - Resultado esperado = 806 - Resultado obtido = 806
input/E_11 - Resultado esperado = 791 - Resultado obtido = 791
input/E_12 - Resultado esperado = 733 - Resultado obtido = 733
input/E_13 - Resultado esperado = 7960 - Resultado obtido = 7960
input/E_14 - Resultado esperado = 7665 - Resultado obtido = 7665
input/E_15 - Resultado esperado = 8037 - Resultado obtido = 8037
input/E_16 - Resultado esperado = 79301 - Resultado obtido = 79301
input/E_17 - Resultado esperado = 79675 - Resultado obtido = 79675
input/E_18 - Resultado esperado = 79205 - Resultado obtido = 79205
input/E_19 - Resultado esperado = 80242 - Resultado obtido = 80242
input/E_20 - Resultado esperado = 78850 - Resultado obtido = 78850
input/E_21 - Resultado esperado = 80008 - Resultado obtido = 80008
input/E_22 - Resultado esperado = 79293 - Resultado obtido = 79293
input/E_23 - Resultado esperado = 79159 - Resultado obtido = 79159
input/E_24 - Resultado esperado = 79390 - Resultado obtido = 79390
input/E_25 - Resultado esperado = 80316 - Resultado obtido = 80316
input/E_26 - Resultado esperado = 79791 - Resultado obtido = 79791
input/E_27 - Resultado esperado = 79721 - Resultado obtido = 79721
input/E_28 - Resultado esperado = 79723 - Resultado obtido = 79723
input/E_29 - Resultado esperado = 79104 - Resultado obtido = 79104
input/E_30 - Resultado esperado = 80500 - Resultado obtido = 80500
input/E_31 - Resultado esperado = 79126 - Resultado obtido = 79126
input/E_32 - Resultado esperado = 78932 - Resultado obtido = 78932
input/E_33 - Resultado esperado = 79488 - Resultado obtido = 79488
input/E_34 - Resultado esperado = 41 - Resultado obtido = 41
input/E_35 - Resultado esperado = 53 - Resultado obtido = 53
input/E_36 - Resultado esperado = 45 - Resultado obtido = 45
input/E_37 - Resultado esperado = 63 - Resultado obtido = 63
input/E_38 - Resultado esperado = 61 - Resultado obtido = 61
input/E_39 - Resultado esperado = 64 - Resultado obtido = 64
input/E_40 - Resultado esperado = 524 - Resultado obtido = 524
input/E_41 - Resultado esperado = 515 - Resultado obtido = 515
input/E_42 - Resultado esperado = 514 - Resultado obtido = 514
input/E_43 - Resultado esperado = 5055 - Resultado obtido = 5055
input/E_44 - Resultado esperado = 5084 - Resultado obtido = 5084
input/E_45 - Resultado esperado = 5183 - Resultado obtido = 5183
input/E_46 - Resultado esperado = 50034 - Resultado obtido = 50034
input/E_47 - Resultado esperado = 49882 - Resultado obtido = 49882
input/E_48 - Resultado esperado = 49480 - Resultado obtido = 49480
input/E_49 - Resultado esperado = 49826 - Resultado obtido = 49826
input/E_50 - Resultado esperado = 49987 - Resultado obtido = 49987
input/E_51 - Resultado esperado = 60 - Resultado obtido = 60
input/E_52 - Resultado esperado = 465 - Resultado obtido = 465
input/E_53 - Resultado esperado = 4515 - Resultado obtido = 4515
input/E_54 - Resultado esperado = 45015 - Resultado obtido = 45015
input/E_55 - Resultado esperado = 75 - Resultado obtido = 75
input/E_56 - Resultado esperado = 570 - Resultado obtido = 570
input/E_57 - Resultado esperado = 5520 - Resultado obtido = 5520
input/E_58 - Resultado esperado = 55020 - Resultado obtido = 55020
```