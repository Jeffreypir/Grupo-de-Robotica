---

# 🤖 Grupo de Robótica

<div align="justify">

Bem-vindo ao repositório do **Grupo de Robótica**. Este espaço foi criado para registrar e compartilhar nossos projetos de robótica com foco em **sustentabilidade, inovação tecnológica** e **educação no Ensino Médio**.

[![Wiki do Projeto](https://img.shields.io/badge/wiki-acessar-blue?style=flat-square&logo=github)](https://github.com/Jeffreypir/Grupo-de-Robotica/wiki/)
[![Licença](https://img.shields.io/github/license/Jeffreypir/Grupo-de-Robotica?style=flat-square)](LICENSE)
[![Instagram](https://img.shields.io/badge/Instagram-%40jefferson.0__1-E4405F?style=for-the-badge&logo=instagram&logoColor=white)](https://www.instagram.com/jefferson.0_1?igsh=ZDdkdzRndXJsN3U1)
[![WhatsApp](https://img.shields.io/badge/WhatsApp-Contato-25D366?style=for-the-badge&logo=whatsapp&logoColor=white)](https://wa.me/5575992597174)
</div>

---

## 📌 Introdução

A tecnologia tem transformado profundamente a sociedade, e a **robótica educacional** surge como uma ferramenta poderosa para preparar os estudantes para os desafios do futuro. Este projeto propõe o uso do **Arduino** aliado a práticas **sustentáveis**, promovendo o aprendizado ativo, a consciência ambiental e o pensamento computacional.

---

## 🎯 Objetivos

* 🌱 **Conscientizar** sobre a importância da sustentabilidade na tecnologia.
* 🔧 **Incentivar** o uso de práticas sustentáveis na construção de robôs.
* 💡 **Fomentar a inovação** com foco em eficiência energética e reaproveitamento de materiais.
* 🤝 **Estimular o trabalho em equipe** em projetos colaborativos.
* 👨‍💻 **Desenvolver habilidades práticas** em programação e montagem com Arduino.
* 🚀 **Promover a autonomia criativa** dos estudantes no desenvolvimento de soluções ecológicas.

---

## 🧪 Metodologia

O projeto foi desenvolvido durante o projeto do **Grupo de Robótica** com estudantes do Ensino Médio, que trabalharam em equipes para resolver desafios utilizando **Arduino** e **materiais recicláveis**. As atividades incluíram:

* Modelagem matemática dos sistemas.
* Programação dos robôs.
* Aplicação de técnicas de **eficiência energética**.
* Discussão de impactos ambientais e soluções sustentáveis.

---

## 📈 Resultados

Os estudantes apresentaram um notável progresso em:

* Raciocínio lógico e pensamento computacional.
* Criatividade na resolução de problemas reais.
* Compreensão de conceitos de eletrônica, física e programação.
* Desenvolvimento de robôs com menor impacto ambiental.

As soluções apresentadas visaram não apenas a eficácia técnica, mas também a **responsabilidade ecológica**, utilizando materiais reutilizados e promovendo o uso eficiente de energia.

---

## ✅ Conclusão

A introdução de **práticas sustentáveis na robótica educacional** contribuiu significativamente para o desenvolvimento técnico, social e ambiental dos estudantes. A experiência fortaleceu a formação de uma **cultura de inovação responsável**, estimulando a atuação crítica dos jovens diante dos desafios do século XXI.

---

## 📚 Referências

* SILVA, Leonardo; CARVALHO, Felipe. *Pensando a Robótica na Educação Básica*. Revista de Investigação e Divulgação em Educação Matemática, 2019.
* CAMARGO, Fausto; DAROS, Thuinie. *A sala de aula digital: estratégias pedagógicas para fomentar o aprendizado ativo, on-line e híbrido.* Penso, 2021.
* NETO, Arlindo; OLIVEIRA, Yan. *Eletrônica Analógica e Digital Aplicada à IoT.* Alta Books, 2019.
* DEITEL, Paul; DEITEL, Harvey. *C: Como Programar.* Pearson, 2011.
* MCROBERTS, Michael. *Arduino: Guia do Programador.* Novatec, 2011.
* KERNIGHAN, Brian; RITCHIE, Dennis. *The C Programming Language.* Prentice Hall, 1988.
* STROUSTRUP, Bjarne. *The C++ Programming Language.* Addison-Wesley, 2013.
* MARTIN, Robert C. *Código Limpo: Habilidades Práticas do Agile Software.* Alta Books, 2019.

---

## 🌐 Acesse Também

* [🔎 Wiki do Projeto](https://github.com/Jeffreypir/Grupo-de-Robotica/wiki/) — Documentação completa, tutoriais e registros dos projetos.

[![Instagram](https://img.shields.io/badge/Instagram-%40jefferson.0__1-E4405F?style=for-the-badge&logo=instagram&logoColor=white)](https://www.instagram.com/jefferson.0_1?igsh=ZDdkdzRndXJsN3U1)
---

---

## ⚙️ Como Executar os Projetos

Você pode compilar e carregar os projetos do Grupo de Robótica utilizando:

### 🟦 Arduino IDE

> Recomendado para iniciantes e usuários que preferem interface gráfica.

#### ✅ Passos:

1. Instale a Arduino IDE:

   * [Download para Windows/Linux](https://www.arduino.cc/en/software)
2. Conecte sua placa Arduino via USB.
3. Abra o projeto `.ino` desejado.
4. Selecione a placa correta:

   * *Exemplo:* **Arduino Uno**
5. Selecione a porta serial:

   * No menu: `Ferramentas > Porta`
6. Clique em `✔️ Verificar` para compilar.
7. Clique em `➡️ Carregar` para enviar o código à placa.

---

### 🟢 Arduino-CLI

> Ideal para usuários avançados, automatização e uso via terminal (Linux e Windows PowerShell ou CMD).

#### ✅ Instalação

**Linux (via terminal):**

```bash
curl -fsSL https://raw.githubusercontent.com/arduino/arduino-cli/master/install.sh | sh
```

**Windows (via PowerShell):**

```powershell
Invoke-WebRequest https://downloads.arduino.cc/arduino-cli/arduino-cli_latest_Windows_64bit.zip -OutFile arduino-cli.zip
Expand-Archive .\arduino-cli.zip -DestinationPath "C:\ArduinoCLI"
```

Adicione `C:\ArduinoCLI` ao `PATH` do sistema.

#### ✅ Configuração Inicial

```bash
arduino-cli config init
arduino-cli core update-index
arduino-cli core install arduino:avr
```

#### ✅ Compilar e Enviar o Código

```bash
arduino-cli compile --fqbn arduino:avr:uno Caminho/Do/Projeto
arduino-cli upload --port COM3 --fqbn arduino:avr:uno Caminho/Do/Projeto
```

> No Linux, a porta pode ser algo como `/dev/ttyUSB0`.
> Verifique com: `arduino-cli board list`

---

### 📦 Dependências

Alguns projetos podem usar bibliotecas externas. Para instalá-las com a Arduino IDE ou Arduino-CLI:

#### Arduino IDE:

* `Sketch > Incluir Biblioteca > Gerenciar Bibliotecas...`

#### Arduino-CLI:

```bash
arduino-cli lib install "NomeDaBiblioteca"
```

---


