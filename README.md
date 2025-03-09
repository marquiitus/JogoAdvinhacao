# Jogo de Adivinhação 🎯

Bem-vindo ao repositório do **Jogo de Adivinhação**! Este é um jogo desenvolvido em **linguagem C** no qual o jogador tenta adivinhar um número secreto gerado aleatoriamente pelo sistema.

## 📌 Sobre o Jogo
O jogo gera um número secreto entre **0 e 99**, e o jogador tem um número limitado de tentativas para adivinhar. Há três níveis de dificuldade disponíveis:

- **Fácil:** 20 tentativas
- **Médio:** 15 tentativas
- **Difícil:** 6 tentativas

A cada tentativa, o jogador recebe dicas se o palpite foi **maior** ou **menor** que o número secreto. O jogo calcula uma pontuação baseada na proximidade dos palpites ao número secreto.

## 🎮 Como Jogar
1. Escolha o nível de dificuldade.
2. Digite um número como palpite.
3. O jogo informará se seu palpite foi maior ou menor que o número secreto.
4. Continue tentando até acertar ou esgotar suas tentativas.
5. Se acertar, o jogo exibe sua pontuação final! E se errar...

## 🔧 Tecnologias Utilizadas
- **Linguagem C**
- **Bibliotecas padrão:** `stdio.h`, `stdlib.h`, `time.h`

## 📂 Estrutura do Código
```
📁 Jogo-Adivinhacao
│── 📄 jogo.c      # Código-fonte principal
│── 📄 README.md   # Documentação do projeto
```

## 🚀 Como Executar o Jogo
1. Clone este repositório:
   ```bash
   git clone https://github.com/marquiitus/jogo-adivinhacao.git
   ```
2. Acesse o diretório do projeto:
   ```bash
   cd jogo-adivinhacao
   ```
3. Compile o código usando `gcc`:
   ```bash
   gcc jogo.c -o jogo
   ```
4. Execute o jogo:
   ```bash
   ./jogo
   ```

🎯 **Divirta-se jogando e aprimorando suas habilidades em C!** 🚀