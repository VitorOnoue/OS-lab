# Projeto 1

## Compilando o programa em um Linux
Com o GCC instalado, abra o terminal e compile o arquivo C com esse comando:

```
gcc main.c -o [nome_do_programa] -lpthread
```

(O nome do programa não precisa ter o mesmo nome do arquivo)

É importante ressaltar a flag -lpthread, que garante que o programa vincule corretamente com a biblioteca pthread.

Caso não tenha o GCC instalado em seu computador, visite: https://gcc.gnu.org/install/

## Executando o programa
Para executar o programa, basta usar o comando:

```
./[nome_do_programa]
```

## Comprovando que os resultados foram alcançados
Após atender corretamente os valores requisitados pelo programa, **as transferências serão mostradas na tela.**\
A quantidade de transferências deve ser **igual à quantidade de threads fornecidas pelo usuário.**\
O valor de todas as transferências somadas deve ser **igual ao valor a se transferir, caso haja saldo disponível.**\
Caso o saldo seja insuficiente, **o programa deve ser interrompido.**\
Para conferir, veja se na última transferência, os valores das contas são o esperado.

### Caso de teste:
```
Valor da conta from: 100

Valor da conta to: 100

Quantidade de transferências simultâneas (até 100): 10

Valor a ser transferido: 40

Transferir para to (0) ou para from (1): 1
Criando thread 0
Criando thread 1
Criando thread 2
Criando thread 3
Criando thread 4
Criando thread 5
Criando thread 6
Criando thread 7
Criando thread 8
Criando thread 9
Transferência concluída com sucesso!
Saldo de from: 104
Saldo de to: 96
Transferência concluída com sucesso!
Saldo de from: 108
Saldo de to: 88
Transferência concluída com sucesso!
Saldo de from: 116
Saldo de to: 84
Transferência concluída com sucesso!
Saldo de from: 120
Saldo de to: 80
Transferência concluída com sucesso!
Saldo de from: 120
Saldo de to: 80
Transferência concluída com sucesso!
Saldo de from: 124
Saldo de to: 76
Transferência concluída com sucesso!
Saldo de from: 128
Saldo de to: 68
Transferência concluída com sucesso!
Saldo de from: 132
Saldo de to: 68
Transferência concluída com sucesso!
Saldo de from: 136
Saldo de to: 64
Transferência concluída com sucesso!
Saldo de from: 140
Saldo de to: 60
```