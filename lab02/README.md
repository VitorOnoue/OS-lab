## Exercício 1
As mensagens são retornadas na ordem de i.


**Retorno do programa ao executá-lo com n = 100:**


```
[ec2-user@ip-172-31-40-80 lab02]$ ./exemplo5 100
i:1 process ID:1554 parent ID:1424 child ID:1555
[ec2-user@ip-172-31-40-80 lab02]$ i:2 process ID:1555 parent ID:1 child ID:1556
i:3 process ID:1556 parent ID:1 child ID:1557
i:4 process ID:1557 parent ID:1 child ID:1558
i:5 process ID:1558 parent ID:1 child ID:1559
i:6 process ID:1559 parent ID:1 child ID:1560
i:7 process ID:1560 parent ID:1 child ID:1561
(...)
i:100 process ID:1653 parent ID:1 child ID:0
```
---
## Exercício 2
Diferenças entre `stdout` e `stderr`:

`stderr`:
- É usado para mostrar mensagens de erro;
  - ao utilizá-lo no lugar de `stdout`. as mensagens de erro serão separada da saída do programa;
    - vantajoso para identificar erros. Boa prática de debugging;
    - dificulta a junção dos erros e da saída num mesmo arquivo.

`stdout`:
+ É usado para mostrar a saída do programa;
  + ao utilizá-lo no lugar de `stderr`, tanto as mensagens de erro quanto a saída do programa irão aparecer no mesmo lugar;
    + pode ser vantajoso para redirecionar a saída do programa para um arquivo;
    + dificulta na localização de erros.