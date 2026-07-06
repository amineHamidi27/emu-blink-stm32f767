# Nom de votre fichier binaire final
BINARY = main

# Dossier où se trouve libopencm3
OPENCM3_DIR = /home/amine/Desktop/stm32_prepaexam/libopencm3


# Target spécifique pour le STM32F767
TOOLCHAIN_PREFIX = arm-none-eabi-
DEVICE           = stm32f767zi

# Flags de compilation pour le Cortex-M7 avec FPU
CFLAGS          += -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-d16
CFLAGS += -DSTM32F7 -I$(OPENCM3_DIR)/include


# Flags de liaison (Linker)
LDFLAGS         += --static -nostartfiles
LDFLAGS += -L$(OPENCM3_DIR)/lib -lopencm3_stm32f7
LDFLAGS         += -T link.ld

# Règles de build de base
all: $(BINARY).elf $(BINARY).bin

$(BINARY).elf: main.o
	$(TOOLCHAIN_PREFIX)gcc $(CFLAGS) main.o -o $(BINARY).elf $(LDFLAGS)

$(BINARY).bin: $(BINARY).elf
	$(TOOLCHAIN_PREFIX)objcopy -O binary $(BINARY).elf $(BINARY).bin

main.o: main.c
	$(TOOLCHAIN_PREFIX)gcc $(CFLAGS) -c main.c -o main.o

clean:
	rm -f *.o *.elf *.bin