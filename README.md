# ♿ Transportador de Cadeirantes em Escadas

Este projeto apresenta um sistema automatizado capaz de transportar cadeirantes entre diferentes níveis de escadas, garantindo **acessibilidade, autonomia, segurança e inclusão social** em locais onde a instalação de elevadores tradicionais não é possível devido à limitação de espaço físico.

O protótipo foi desenvolvido utilizando **linguagem C**, **PIC18F4550**, componentes eletromecânicos, simulação no **Proteus** e estrutura física em **MDF com materiais reciclados** — reforçando também a preocupação ambiental e sustentável.

> Projeto desenvolvido para fins acadêmicos na **Universidade Cidade de São Paulo — UNICID, 2025** para as disciplinas de Engenharia de Software e Téc. e Desenvolvimento de Algoritmos.

---

## ✅ Por que este projeto importa?

- Reduz barreiras arquitetônicas em ambientes públicos e privados
- Amplia mobilidade e autonomia para pessoas cadeirantes
- Demonstra aplicação real de programação embarcada e engenharia eletrônica
- Incentiva soluções sustentáveis, acessíveis e replicáveis
- Conecta tecnologia à responsabilidade social

---

## 🧠 Tecnologias, Ferramentas e Conceitos

- Linguagem C
- MPLAB + XC8 Compiler
- PIC18F4550
- Proteus – simulação eletromecânica
- Eletrônica digital e analógica
- Sensores, atuadores e lógica de controle
- Engenharia de Software aplicada a sistemas embarcados

---

## ⚙️ Funcionalidades do Sistema

✅ Movimentação automática de subida e descida  
✅ Plataforma com acionamento externo e interno  
✅ Botões de chamada no patamar superior e inferior  
✅ Sensores de fim de curso para parada segura  
✅ Controle de emergência com prioridade absoluta  
✅ Display de 7 segmentos mostrando status do movimento  
✅ LEDs indicadores e buzzer para alerta  
✅ Isolamento entre potência e controle via optoacoplador  
✅ Lógica de automação baseada em estados

---

## 🔌 Hardware Utilizado

- PIC18F4550  
- Motor DC 12 V  
- Optoacoplador 4N25  
- Botões de acionamento  
- Sensores de limite  
- Resistores, capacitores, diodos e transistores  
- Cristal 5 MHz  
- Buzzer, LEDs indicativos  
- PCI e protoboard  
- Estrutura física em MDF + peças recicladas ♻️  

Grande parte da mecânica foi reaproveitada de **impressoras antigas**, reduzindo custos e impacto ambiental.

---

## 🧩 Arquitetura e Eletrônica

### PCI — Controle do PIC18F4550

![Esquemático do controlador](https://github.com/user-attachments/assets/bca6f6b2-5b7f-486a-a006-51eb807c5fa4)

### PCI — Controle do Buzzer e Motor

![PCI do buzzer e motor](https://github.com/user-attachments/assets/b54c7362-bf90-4b1f-9f02-f9c05170a103)

Esses esquemáticos demonstram toda a comunicação entre sensores, botões, LEDs, buzzer, relés e o microcontrolador responsável pela automação.

---

## 💻 Software e Programação

- Código desenvolvido em **C estruturado**
- Uso de `if`, `else`, `while` e funções modulares
- Manipulação direta de registradores e portas de I/O
- Controle baseado em leitura de sensores e estados do sistema
