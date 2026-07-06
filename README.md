# EMU — Sprint 0 : Blink (STM32F767 / libopencm3)

 first project is to blink led of MCU stm32  using [libopencm3](https://github.com/libopencm3/libopencm3).
## hardware
- Carte : **NUCLEO-F767ZI** (STM32F767ZI, Cortex-M7)
- LED : LD1 verte, broche **PB0**
- Programmateur : ST-Link intégré

## Compiler
```bash
cd src
make
```

## Flasher
```bash
cd src
make flash
```

## Structure
```
projet1/
├── src/
│   ├── main.c      # code applicatif (setup GPIO + blink)
│   ├── Makefile    # règles de build
│   └── link.ld     # script de linkage (mapping mémoire)
└── README.md
```

## Statut
- [x] Blink fonctionnel
- [ ] Console UART (Sprint 1)
