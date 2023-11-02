### Implemente uma solução utilizando Mutex e comparece com a anterior. O que mudou? Por quê?

Os valores de pi, que antes eram inconsistentes, passaram a ser fixos. A utilização do mutex impede que variáveis podem ter seus valores alterados por mais de uma thread ao mesmo tempo. Isso garante que as alterações sejam feitas de forma correta.

### No final, entregue no README do repositório uma explicação resumida sobre as diferenças entre os valores atingidos. Quais foram as causas das divergências? Por que elas aconteceram?

Ao não utilizar o mutex, mais de uma thread pode acessar e alterar uma variável simultaneamente. O uso do mutex bloqueia esse acesso simultâneo.

Imagine, por exemplo, que a thread 1 e a thread 2 acessem uma variável x = 10 ao mesmo tempo, e incrementem 1. Não é garantido que x passe a ser 12 após as threads terminarem de executar.

No entanto, ao se utilizar um mutex, as threads 1 e 2 não poderiam acessar x enquanto a outra ainda está    alterando seu valor. Portanto, há a garantia de que x = 12 no fim das execuções.