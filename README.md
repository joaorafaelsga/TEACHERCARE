# 🩺 TeacherCare — Sistema Inteligente de Monitoramento de Bem-Estar Docente

O *TeacherCare* é um sistema acadêmico focado em acompanhar o bem-estar de professores utilizando dados fornecidos por wearables, registros de ocorrências e histórico clínico. Ele atua de forma *não-invasiva, voluntária e anonimamente*, gerando alertas inteligentes e analisando padrões de risco associados a estresse, sobrecarga e condições de trabalho.

---

## 🧭 Menu Principal e Funcionalidades

O sistema opera por meio de um menu central:


====== MENU PRINCIPAL ======

Cadastrar Professor e Wearable

Listar Professores

Editar Professor

Remover Professor

Registrar Ocorrência (Evento do Dia)

Listar Ocorrências

Editar Ocorrência

Excluir Ocorrência

Exibir Alertas Inteligentes

Mostrar Riscos e Tendências

Registrar Histórico de Saúde do Professor

Listar Histórico de Saúde

Sair

A seguir, cada funcionalidade é explicada *de forma contínua e unificada, exatamente como você pediu — **sem divisão em seções separadas*:

---

### *Cadastrar Professor e Wearable*
Nesta opção o usuário insere nome, disciplina/área, turno, preferências de privacidade e identificador do wearable. Campos textuais não aceitam números e o sistema gera automaticamente a data de adesão e um ID único para cada professor. Em caso de erros, mensagens de validação orientam a correção.

### *Listar Professores*
Mostra todos os professores cadastrados com suas informações completas: ID, nome, disciplina, turno, privacidade configurada, wearable vinculado e data de registro. Caso não haja cadastros, o sistema informa.

### *Editar Professor*
Permite selecionar um professor digitando seu ID. O usuário pode modificar nome, disciplina, turno, preferências e wearable. Pressionar Enter mantém o valor anterior. O sistema valida entradas e salva alterações automaticamente.

### *Remover Professor*
Solicita o ID e exibe uma confirmação (s/n) antes de excluir permanentemente o cadastro. IDs inexistentes geram alertas de erro. Dados removidos não podem ser recuperados.

### *Registrar Ocorrência (Evento do Dia)*
O usuário escolhe o professor e seleciona o tipo de ocorrência:  
1) aula com conflito,  
2) excesso de demandas,  
3) intervenção externa,  
4) evento emocional intenso ou  
5) outro (personalizável).  
Em seguida insere data no formato dd/mm/aaaa e descrição do evento.

### *Listar Ocorrências*
Exibe todas as ocorrências com nome do professor, tipo, descrição, data e ID. Se não houver registros, o sistema informa.

### *Editar Ocorrência*
O usuário seleciona a ocorrência pelo ID e pode ajustar data, descrição e tipo do evento. Deixar o campo vazio mantém o valor original. Alterações são salvas automaticamente.

### *Excluir Ocorrência*
Remove uma ocorrência selecionada por ID com confirmação (s/n). Após excluir, o dado não pode ser recuperado.

### *Exibir Alertas Inteligentes*
Mostra alertas gerados pelo sistema com base em sinais vitais, ruído ambiental, número de ocorrências e padrões de comportamento. Exibe mensagens como “tendência de estresse” ou “alerta crítico”. Também apresenta recomendações automáticas como pausa sugerida, redução de demanda ou monitoramento adicional.

### *Mostrar Riscos e Tendências*
Exibe somente riscos já caracterizados como contínuos ou críticos, como HRV baixa repetida, excesso de ocorrências negativas ou ambientes ruidosos constantes. Mostra nome, tipo de risco, como foi detectado e recomendações.

### *Registrar Histórico de Saúde do Professor*
Após selecionar o professor via ID, o usuário informa data (dd/mm/aaaa), tipo de registro (consulta, observação clínica etc.) e descrição detalhada. O sistema mantém esses dados anonimizados internamente.

### *Listar Histórico de Saúde*
Mostra o histórico completo ou filtrado por professor. IDs inexistentes geram aviso. Se não houver histórico, o sistema informa.

---

## 🔐 Regras Gerais de Validação e Privacidade

- Campos textuais não aceitam números indevidos.  
- Datas sempre no formato dd/mm/aaaa.  
- IDs são únicos e obrigatórios para operações de edição e remoção.  
- Todos os dados pessoais passam por anonimização interna.  
- O sistema opera com transparência, consentimento e controle total por parte do professor.  
- Mensagens de erro sempre orientam a correção do usuário.

---

## 👨‍💻 Autores do Projeto

| Nome | E-mail |
|------|--------|
| Arthur Queiroz | aqs@cesar.school |
| Daniel Donaire | ddc@cesar.school |
| Eduardo Boxwell | ebs2@cesar.school |
| João Rafael | jrsga@cesar.school |
| Kalil Christos | kcc@cesar.school |
| Luiz Henrique | lhcv@cesar.school |
| Matheus Rocha | mcr@cesar.school |
| Nelson Meira | nml@cesar.school |
