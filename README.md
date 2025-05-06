# 🌬️ Rosa dos Ventos - BitDogLab

Este projeto é um exercício prático que simula uma **rosa dos ventos** utilizando a placa **BitDogLab** com o microcontrolador RP2040. O sistema combina uma **matriz de LEDs** para desenhar visualmente as direções, um **display OLED** para mostrar o nome da direção atual, e um **joystick analógico** para capturar a posição escolhida pelo usuário.

## 🔧 Componentes utilizados

- Placa **BitDogLab RP2040**
- Matriz de LEDs 8x8 (controlada via SPI ou GPIOs)
- Display OLED 128x64 (interface I2C)
- Joystick analógico (com dois eixos e botão)

## ⚙️ Funcionamento

1. O usuário move o **joystick** em uma das direções disponíveis.
2. O sistema detecta a direção com base nas leituras analógicas dos eixos X e Y.
3. A **matriz de LEDs** exibe uma seta apontando para a direção selecionada.
4. O **display OLED** mostra o nome da direção em texto (ex: “Norte”, “Sudeste” etc.).

### 🧭 Direções reconhecidas:

- Norte  
- Sul  
- Leste  
- Oeste  
- Nordeste  
- Noroeste  
- Sudeste  
- Sudoeste  
- Centro (sem movimento)

## 📁 Estrutura do Projeto
ROSA_DOS_VENTOS_ADC/
├── libs/
├── src/
│ ├── direcao/
│ │ ├── direcao.c
│ │ └── direcao.h
│ ├── display/
│ │ ├── display.c
│ │ └── display.h
│ ├── joystick/
│ │ ├── joystick.c
│ │ └── joystick.h
│ ├── ssd1306/
│ │ ├── font.h
│ │ ├── ssd1306.c
│ │ └── ssd1306.h
│ ├── utils/
│ │ (diretórios ou arquivos utilitários opcionais)
│ └── exercicio_adc.c # Arquivo principal do projeto
├── CMakeLists.txt
├── pico_sdk_import.cmake
└── .gitignore


## 🛠️ Requisitos

- SDK do Raspberry Pi Pico (pico-sdk)
- Biblioteca para display OLED (`ssd1306.h`)
- Compilador `arm-none-eabi`
- CMake

## 🚀 Como compilar e carregar

1. Clone o repositório:
   ```bash
   git clone https://github.com/seu-usuario/ROSA_DOS_VENTOS_ADC.git
   cd ROSA_DOS_VENTOS_ADC
