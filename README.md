<div align="center">

# ♿ Transportador de Cadeirantes em Escadas  
### / Wheelchair Stair Lift System

🌍 README disponível em:  
[🇧🇷 Português](#-sobre-o-projeto) | [🇺🇸 English](#-about-the-project)

</div>

---

## 🇧🇷 Sobre o Projeto

Este projeto apresenta um sistema automatizado capaz de transportar cadeirantes entre diferentes níveis de escadas, garantindo **acessibilidade, autonomia, segurança e inclusão social** em locais onde a instalação de elevadores tradicionais não é possível devido à limitação de espaço físico.

O protótipo foi desenvolvido utilizando **linguagem C**, **PIC18F4550**, componentes eletromecânicos, simulação no **Proteus** e estrutura física em **MDF com materiais reciclados** — reforçando também a preocupação ambiental e sustentável.

> Projeto desenvolvido para fins acadêmicos na **Universidade Cidade de São Paulo — UNICID, 2025**, para as disciplinas de Engenharia de Software e Técnicas de Desenvolvimento de Algoritmos.

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

## ⚙️ Funcionalidades

✅ Movimentação automática de subida e descida  
✅ Comandos internos e externos à plataforma  
✅ Botões de chamada nos patamares  
✅ Sensores de fim de curso  
✅ Botão de emergência prioritário  
✅ Display de 7 segmentos indicando movimento  
✅ LEDs e buzzer como alertas  
✅ Isolamento elétrico via optoacoplador  
✅ Lógica baseada em estados

---

## 🔌 Hardware Utilizado

- PIC18F4550  
- Motor DC 12 V  
- Optoacoplador 4N25  
- Botões e sensores de limite  
- Resistores, capacitores, diodos e transistores  
- Cristal 5 MHz  
- Buzzer, LEDs indicativos  
- PCI e protoboard  
- MDF + peças recicladas ♻️

Grande parte da mecânica foi reaproveitada de **impressoras descartadas**, reduzindo custos e impacto ambiental.

---

## 🧩 Arquitetura e Eletrônica

### PCI — Controle do PIC18F4550

![Esquemático do controlador](https://github.com/user-attachments/assets/bca6f6b2-5b7f-486a-a006-51eb807c5fa4)

### PCI — Controle do Buzzer e Motor

![PCI do buzzer e motor](https://github.com/user-attachments/assets/b54c7362-bf90-4b1f-9f02-f9c05170a103)

---

## 💻 Programação

- Código desenvolvido em **C estruturado**
- Uso de `if`, `else`, `while` e funções modulares
- Manipulação direta de registradores e portas de I/O
- Controle baseado em sensores e estados do sistema

---

## ▶️ Como Executar

1. Abra o projeto no MPLAB  
2. Compile com o XC8  
3. Grave o firmware no PIC18F4550  
4. Monte o circuito ou simule no Proteus  
5. Teste os botões e movimentos da cabine

> Utilize fonte estabilizada e isolamento elétrico adequado.

---

## 🔭 Melhorias Futuras

- Aplicativo mobile  
- Monitoramento IoT  
- Detecção de obstáculos  
- Bateria de emergência  
- Certificação para uso real  
- Controle PWM para suavidade

---

## 👥 Equipe

UNICID — Curso de ADS, 2025

Anna Júlia de Albuquerque Martins
Ellen Mayumi Borges
Felipe Neres Vieira
Gabriel Tavares Vieira da Silva
Gustavo Nascimento
Guilherme dos Santos Matos
Iris Pfister Pascoal
Natália Santos Hernandez Rincão
Victor Leandro da Silva

Orientadores:  
Prof. Francisco de Assis Cavallaro  
Prof. Jadir Custodio Mendonça Junior

---

## 📜 Licença

Projeto acadêmico — uso livre para fins educacionais, demonstrativos e de pesquisa.  
Créditos obrigatórios à equipe original.

---

## 🌍 Mensagem Final

Acessibilidade não é luxo, é **direito, dignidade e cidadania!**.

---

<br>

# 🇺🇸 About the Project

This project introduces an automated system designed to transport wheelchair users across different staircase levels, ensuring **accessibility, autonomy, safety, and social inclusion** in environments where installing a traditional elevator is not possible due to space constraints.

The prototype was developed using **C language**, the **PIC18F4550 microcontroller**, electromechanical components, **Proteus simulation**, and a physical structure made of **MDF and recycled materials**, reinforcing sustainability and environmental responsibility.

> Academic project developed at **Universidade Cidade de São Paulo — UNICID, 2025**, for Software Engineering and Algorithm Development courses.

---

## ✅ Why This Project Matters

- Reduces architectural barriers in public and private spaces  
- Enhances autonomy and mobility for wheelchair users  
- Demonstrates real applications of embedded programming and electronics  
- Encourages sustainable and accessible engineering practices  
- Bridges technology and social responsibility

---

## 🧠 Technologies, Tools & Concepts

- C Programming Language  
- MPLAB + XC8 Compiler  
- PIC18F4550  
- Proteus — electromechanical simulation  
- Digital and analog electronics  
- Sensors, actuators, and control logic  
- Software Engineering for embedded systems

---

## ⚙️ System Features

✅ Automatic upward and downward motion  
✅ Internal and external platform control  
✅ Call buttons on upper and lower landings  
✅ Safety limit switches  
✅ Priority emergency stop  
✅ 7-segment status display  
✅ Visual and audible alerts (LEDs + buzzer)  
✅ Optocoupler isolation between logic and power  
✅ State-based automation

---

## 🔌 Hardware Used

- PIC18F4550  
- 12 V DC Motor  
- 4N25 Optocoupler  
- Push buttons and limit switches  
- Resistors, capacitors, diodes, transistors  
- 5 MHz Crystal  
- Buzzer and indicator LEDs  
- PCB and protoboard  
- MDF + recycled parts ♻️

Much of the mechanical structure was **repurposed from old printers**, reducing cost and environmental impact.

---

## 🧩 Architecture & Electronics

### PCB — PIC18F4550 Controller

![Controller schematic](https://github.com/user-attachments/assets/bca6f6b2-5b7f-486a-a006-51eb807c5fa4)

### PCB — Motor & Buzzer Control

![Buzzer and motor PCB](https://github.com/user-attachments/assets/b54c7362-bf90-4b1f-9f02-f9c05170a103)

---

## 💻 Software & Programming

- Structured C development  
- Use of `if`, `else`, `while`, and modular functions  
- Direct register and I/O port manipulation  
- Control based on system states and sensor input

---

## ▶️ How to Run

1. Open the project in MPLAB  
2. Compile using XC8  
3. Flash the firmware to the PIC18F4550  
4. Build the circuit or simulate it in Proteus  
5. Test platform movement and system responses

> Use a stable power supply and proper electrical isolation.

---

## 🔭 Future Improvements

- Mobile application  
- IoT monitoring  
- Obstacle detection system  
- Emergency backup battery  
- Real-world certification  
- PWM-controlled motor

---

## 👥 Team

UNICID — Software Development, 2025

(Team list remains the same)

---

## 📜 License

Academic project — free for educational, demonstrative and research purposes.  
Credit must be given to the original team.

---

## 🌍 Final Note

Accessibility is not a privilege, it is **a right, dignity, and citizenship!**.
