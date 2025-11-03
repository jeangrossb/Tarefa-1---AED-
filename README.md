
# 860. Lemonade Change

* Cada limonada custa **$5**.
* Os clientes pagam em fila, usando notas de **$5**, **$10** ou **$20**.

A função deve retornar `true` se for possível dar o troco correto para todos na fila, ou `false` se em algum momento não houver troco suficiente.

## A Lógica

1.  **Cliente paga $5:** Apenas recebemos a nota.
2.  **Cliente paga $10:** Precisamos ter uma nota de $5 para dar de troco.
3.  **Cliente paga $20:** Precisamos dar $15 de troco. A prioridade é usar uma nota de $10 e uma de $5. Se não for possível, tentamos usar três notas de $5.

Se em algum momento o troco necessário não estiver disponível, a função retorna `false`. Se todos os clientes forem atendidos, retorna `true`.
