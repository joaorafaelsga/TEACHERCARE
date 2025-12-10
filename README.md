# TEACHERCARE

## Projeto: “TeacherCare” – Sistema Inteligente de Monitoramento de Bem-Estar Docente

> Para interessados em entender como funciona o sistema TeacherCare, e também aprender a usá-lo e manuseá-lo corretamente.  
> O TeacherCare monitora, de forma *voluntária, não-invasiva e anônima*, sinais vitais e condições ambientais para prevenir sobrecarga e apoiar a saúde mental de professores.

Existem certas orientações que você como usuário deve seguir para utilizar o programa da melhor maneira — elas estão detalhadas abaixo.

---

## Menu principal

> Ele irá aparecer assim para você

====== MENU PRINCIPAL ======

1. Cadastrar Professor e Wearable  
2. Listar Professores  
3. Editar Professor  
4. Remover Professor  
5. Registrar Ocorrência (Evento do Dia)  
6. Listar Ocorrências  
7. Editar Ocorrência  
8. Excluir Ocorrência  
9. Exibir Alertas Inteligentes  
10. Mostrar Riscos e Tendências  
11. Registrar Histórico de Saúde do Professor  
12. Listar Histórico de Saúde  
13. Sair

- É recomendado escolher números *inteiros* entre 1 e 13 como mostrado acima.

---

## 1. Cadastrar Professor e Wearable (Cadastro)

- Você irá inserir as seguintes informações nessa parte:

1. Nome  
2. Disciplina / Área  
3. Turno  
4. Preferências de privacidade (opções de anonimato / compartilhamento)  
5. Identificador do wearable (ou seleção de dispositivo)

- *Não serão aceitos números* nos seguintes campos:

1. Nome ❌  
2. Disciplina / Área ❌  
3. Turno ❌

- Campos numéricos e formatos obrigatórios:

1. ID do wearable → gerado ou validado pelo sistema ✅  
2. Data de início (registro) → gerada automaticamente pelo sistema ✅

- Regras e observações:

- Cada professor receberá um *ID único*, gerado automaticamente.  
- A data de adesão é registrada automaticamente no momento do cadastro.  
- O sistema pedirá confirmação ao final do cadastro e perguntará se deseja voltar ao menu.  
- Em caso de entrada inválida (ex.: números no campo Nome), o sistema mostrará uma mensagem de erro e solicitará correção.

---

## 2. Listar Professores (Lista dos cadastros)

- Aqui será mostrado todos os professores cadastrados.  
- Cada professor aparecerá com todas as suas respectivas informações de cadastro (ID, disciplina, turno, estado de consentimento).  
- O sistema alertará caso nenhum professor esteja cadastrado.  
- No final será perguntado se o usuário deseja voltar ao menu.

---

## 3. Editar Professor (Alteração na lista)

- O sistema mostrará os IDs dos professores cadastrados, junto ao nome e à disciplina.  
- Digite o *ID* do professor que deseja alterar; caso não digite o ID correto (ou deixe em branco, ou insira letras onde não deve), o sistema *para* e pergunta se o usuário deseja retornar ao menu.  
- Caso não queira alterar algum campo específico, apenas pressione *Enter* para mantê-lo.  
- Caso ocorram alterações, após pressionar *Enter* as alterações serão salvas automaticamente.  
- Se houver regras de validação (ex.: nome sem números), o sistema solicitará o formato correto.  
- No final será perguntado se o usuário deseja voltar ao menu.

---

## 4. Remover Professor (Exclusão do cadastro)

- Digite o *ID* do professor que deseja remover do cadastro; caso não encontre o ID, aparecerá a mensagem de aviso: *"ID não encontrado. Tente novamente."*  
- Após isso, aparecerá um menu de *confirmação*:

1. (s) para confirmar ✅  
2. (n) para cancelar ❌

- Outros formatos além de *(s)* e *(n)* *não* serão aceitos.  
- Após a exclusão, não é possível recuperar o que foi deletado — tome cuidado para não se arrepender.  
- No final será perguntado se o usuário deseja voltar ao menu.

---

## 5. Registrar Ocorrência (Atribuição de evento do dia)

- Escolha o professor (digitando o *ID*) para vincular a ocorrência.  
- Será mostrado os professores cadastrados junto ao seu respectivo ID.  
- Depois selecione o tipo de ocorrência (digitando um número). Exemplo de menu:

1. Aula com conflito  
2. Excesso de demandas  
3. Intervenção externa  
4. Evento emocional intenso  
5. Outra

- É recomendado escolher números *inteiros* entre 1 e 5 conforme acima.  
- Informe a *data* no formato *dia/mês/ano* e descreva o evento no campo *responsável pela descrição*.  
- Caso o usuário escolha a opção 5, será possível digitar a descrição personalizada do tipo de evento.  
- No final será perguntado se o usuário deseja voltar ao menu.

---

## 6. Listar Ocorrências (Exibe a lista das ocorrências registradas)

- Mostra na tela todas as ocorrências registradas até o momento com:

- Nome do professor  
- Tipo de ocorrência  
- Data  
- Descrição / Responsável pelo registro

- Caso não exista nenhuma ocorrência, o sistema avisará.  
- No final será perguntado se o usuário deseja voltar ao menu.

---

## 7. Editar Ocorrência (Edição da lista de ocorrências)

- Exibe uma lista com todas as ocorrências atribuídas.  
- Digite o número ou ID da ocorrência que deseja editar.  
- Você poderá alterar:

- Data  
- Tipo de ocorrência  
- Descrição

- Caso não queira editar algum campo, pressione *Enter* para continuar.  
- Após o *Enter*, as alterações são salvas automaticamente.  
- No final será perguntado se o usuário deseja voltar ao menu.

---

## 8. Excluir Ocorrência (Deleta uma ocorrência da lista)

- Escolha o número (ou ID) da ocorrência para ser excluída.  
- Após isso aparecerá um menu de *confirmação*:

1. (s) para confirmar ✅  
2. (n) para cancelar ❌

- Outros formatos além de *(s)* e *(n)* *não* serão aceitos.  
- Após a exclusão, não é possível recuperar o que foi deletado — tome cuidado.  
- No final será perguntado se o usuário deseja voltar ao menu.

---

## 9. Exibir Alertas Inteligentes (Prazos / Recomendações / Riscos)

- Mostra todas as alertas e recomendações geradas pela análise:

- Nome do professor  
- Alerta / Tipo (p.ex.: pico de estresse, tendência)  
- Motivo (sinais vitais, ruído, histórico)  
- Recomendação (p.ex.: pausa, reduzir carga, intervenção)

- As mensagens poderão ser exibidas desta forma:

- “Atenção: tendência de estresse nas últimas X aula(s).” → alerta de tendência  
- “Alerta crítico: pico de estresse detectado.” → alerta crítico  
- “Dados insuficientes para análise” → quando falta informação

- No final será perguntado se o usuário deseja voltar ao menu.

---

## 10. Mostrar Riscos e Tendências

- Exibe apenas os casos que atuam como *riscos* (padrões repetidos ou picos críticos).  
- Mostra as seguintes informações:

- Nome do professor  
- Tipo de risco identificado  
- Como o risco foi detectado (ex.: HRV, ruído, eventos)  
- Recomendação e tempo desde a detecção

- Essa tela auxilia coordenação a identificar padrões sem expor dados pessoais.  
- No final será perguntado se o usuário deseja voltar ao menu.

---

## 11. Registrar Histórico de Saúde do Professor

- Aparecerão na tela os professores cadastrados com seus respectivos IDs.  
- Caso não exista nenhum cadastro, o sistema avisará.  
- Digite o *ID* corretamente para prosseguir; caso não o faça, o programa encerra a ação e perguntará se deseja voltar ao menu.  
- Digitando o ID correto, será pedido para inserir:

  > - Data (no formato *dia/mês/ano*)  
  > - Tipo de registro (ex.: consulta, observação clínica, recomendação médica)  
  > - Descrição detalhada do evento

- No final será perguntado se o usuário deseja voltar ao menu.

---

## 12. Listar Histórico de Saúde

- Aparecerá na tela os históricos de saúde cadastrados com seus respectivos IDs.  
- Caso não exista, o sistema avisará.  
- Caso queira ver o histórico completo de um professor, digite o *ID* do respectivo professor; caso não o faça o programa encerrará e perguntará se deseja voltar ao menu.  
- No final será perguntado se o usuário deseja voltar ao menu.

---

## 13. Sair do sistema (encerrar o programa)

- Encerra o programa imediatamente.  
- Todos os dados são salvos automaticamente (respeitando as políticas de anonimização).  
- Equipamentos wearables são sincronizados com segurança antes do desligamento.

---

## Regras Gerais de Validação e Privacidade

- Campos de texto essenciais (Nome, Disciplina, Descrição) *não* aceitam números onde não fazem sentido.  
- Datas devem ser inseridas no formato *dd/mm/aaaa*.  
- Todos os registros pessoais são *anonimizados* por padrão e só são acessíveis com consentimento explícito.  
- O sistema prioriza sempre a *privacidade, **transparência* e *controle pelo professor*.  
- Mensagens de erro e validação orientarão o usuário a corrigir qualquer entrada inválida.  

---

## 👨‍💻Autores do trabalho👨‍💻

| Nome | E-mail |
|------|--------|
| Arthur Queiroz | [aqs@cesar.school](mailto:aqs@cesar.school) |
| Daniel Donaire | [ddc@cesar.school](mailto:ddc@cesar.school) |
| Eduardo Boxwell | [ebs2@cesar.school](mailto:ebs2@cesar.school) |
| João Rafael | [jrsga@cesar.school](mailto:jrsga@cesar.school) |
| Kalil Christos | [kcc@cesar.school](mailto:kcc@cesar.school) |
| Luiz Henrique | [lhcv@cesar.school](mailto:lhcv@cesar.school) |
| Matheus Rocha | [mcr@cesar.school](mailto:mcr@cesar.school) |
| Nelson Meira | [nml@cesar.school](mailto:nml@cesar.school) |
