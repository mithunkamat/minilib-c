###############################################################################
# Makefile for the project mini
###############################################################################

## General Flags
PROJECT = mini
MCU = atmega32
TARGET = mini.elf
LIB_TARGET = libmini.a
CC = avr-gcc

CPP = avr-g++

## Options common to compile, link and assembly rules
COMMON = -mmcu=$(MCU)

## Path
LIB_PATH = ../../../../lib/avr

## Compile options common for all C compilation units.
CFLAGS = $(COMMON)
CFLAGS += -Wall -gdwarf-2 -std=gnu99 -Os -funsigned-char -funsigned-bitfields -fpack-struct -fshort-enums -D__AVR__ -ffunction-sections  -fdata-sections  
CFLAGS += -MD -MP -MT $(*F).o -MF dep/$(@F).d 

## Assembly specific flags
ASMFLAGS = $(COMMON)
ASMFLAGS += $(CFLAGS)
ASMFLAGS += -x assembler-with-cpp -Wa,-gdwarf2

## Linker flags
LDFLAGS = $(COMMON)
LDFLAGS +=  -Wl,-Map=mini.map -Wl,--gc-sections


## Intel Hex file production flags
HEX_FLASH_FLAGS = -R .eeprom -R .fuse -R .lock -R .signature

HEX_EEPROM_FLAGS = -j .eeprom
HEX_EEPROM_FLAGS += --set-section-flags=.eeprom="alloc,load"
HEX_EEPROM_FLAGS += --change-section-lma .eeprom=0 --no-change-warnings


## Include Directories
INCLUDES = -I"D:\Projets\MCU\ARM\minilib-c\build\avr\mini\..\..\..\include" 

## Objects that must be built in order to link
LIB_OBJECTS = toupper.o isalnum.o isalpha.o isascii.o isblank.o iscntrl.o isdigit.o islower.o isprint.o ispunct.o isspace.o isupper.o isxdigit.o toascii.o tolower.o scanf.o fgetc.o fgets.o fputc.o fputs.o getchar.o printf.o putchar.o strtol.o abs.o assert.o atoi.o atol.o calloc.o div.o exit.o ldiv.o malloc.o rand.o strupr.o bcmp.o bcopy.o bzero.o index.o memccpy.o memchr.o memcmp.o memcpy.o memmove.o mempcpy.o memset.o rindex.o strcat.o strchr.o strcmp.o strcoll.o strcpy.o strcspn.o strlcat.o strlcpy.o strlen.o strlwr.o strncat.o strncmp.o strncpy.o strnlen.o strrchr.o strspn.o strstr.o 

OBJECTS = $(LIB_OBJECTS) test.o syscalls.o

## Objects explicitly added by the user
LINKONLYOBJECTS = 

## Build
all: $(TARGET) $(LIB_TARGET) mini.hex mini.eep mini.lss size

## Compile
test.o: ../test.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

syscalls.o: ../syscalls.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

toupper.o: ../../../../ctype/toupper.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

isalnum.o: ../../../../ctype/isalnum.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

isalpha.o: ../../../../ctype/isalpha.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

isascii.o: ../../../../ctype/isascii.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

isblank.o: ../../../../ctype/isblank.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

iscntrl.o: ../../../../ctype/iscntrl.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

isdigit.o: ../../../../ctype/isdigit.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

islower.o: ../../../../ctype/islower.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

isprint.o: ../../../../ctype/isprint.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

ispunct.o: ../../../../ctype/ispunct.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

isspace.o: ../../../../ctype/isspace.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

isupper.o: ../../../../ctype/isupper.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

isxdigit.o: ../../../../ctype/isxdigit.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

toascii.o: ../../../../ctype/toascii.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

tolower.o: ../../../../ctype/tolower.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

scanf.o: ../../../../stdio/scanf.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

fgetc.o: ../../../../stdio/fgetc.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

fgets.o: ../../../../stdio/fgets.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

fputc.o: ../../../../stdio/fputc.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

fputs.o: ../../../../stdio/fputs.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

getchar.o: ../../../../stdio/getchar.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

printf.o: ../../../../stdio/printf.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

putchar.o: ../../../../stdio/putchar.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strtol.o: ../../../../stdlib/strtol.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

abs.o: ../../../../stdlib/abs.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

assert.o: ../../../../stdlib/assert.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

atoi.o: ../../../../stdlib/atoi.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

atol.o: ../../../../stdlib/atol.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

calloc.o: ../../../../stdlib/calloc.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

div.o: ../../../../stdlib/div.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

exit.o: ../../../../stdlib/exit.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

ldiv.o: ../../../../stdlib/ldiv.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

malloc.o: ../../../../stdlib/malloc.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

rand.o: ../../../../stdlib/rand.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strupr.o: ../../../../string/strupr.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

bcmp.o: ../../../../string/bcmp.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

bcopy.o: ../../../../string/bcopy.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

bzero.o: ../../../../string/bzero.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

index.o: ../../../../string/index.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

memccpy.o: ../../../../string/memccpy.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

memchr.o: ../../../../string/memchr.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

memcmp.o: ../../../../string/memcmp.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

memcpy.o: ../../../../string/memcpy.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

memmove.o: ../../../../string/memmove.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

mempcpy.o: ../../../../string/mempcpy.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

memset.o: ../../../../string/memset.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

rindex.o: ../../../../string/rindex.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strcat.o: ../../../../string/strcat.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strchr.o: ../../../../string/strchr.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strcmp.o: ../../../../string/strcmp.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strcoll.o: ../../../../string/strcoll.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strcpy.o: ../../../../string/strcpy.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strcspn.o: ../../../../string/strcspn.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strlcat.o: ../../../../string/strlcat.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strlcpy.o: ../../../../string/strlcpy.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strlen.o: ../../../../string/strlen.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strlwr.o: ../../../../string/strlwr.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strncat.o: ../../../../string/strncat.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strncmp.o: ../../../../string/strncmp.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strncpy.o: ../../../../string/strncpy.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strnlen.o: ../../../../string/strnlen.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strrchr.o: ../../../../string/strrchr.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strspn.o: ../../../../string/strspn.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

strstr.o: ../../../../string/strstr.c
	$(CC) $(INCLUDES) $(CFLAGS) -c  $<

##Link
$(TARGET): $(OBJECTS)
	 $(CC) $(LDFLAGS) $(OBJECTS) $(LINKONLYOBJECTS) $(LIBDIRS) $(LIBS) -o $(TARGET)

$(LIB_TARGET): $(LIB_OBJECTS)
	 $(CC) $(LDFLAGS) $(LIB_OBJECTS) $(LINKONLYOBJECTS) $(LIBDIRS) $(LIBS) -o $(LIB_TARGET)
	 
%.hex: $(TARGET)
	avr-objcopy -O ihex $(HEX_FLASH_FLAGS)  $< $@

%.eep: $(TARGET)
	-avr-objcopy $(HEX_EEPROM_FLAGS) -O ihex $< $@ || exit 0

%.lss: $(TARGET)
	avr-objdump -h -S $< > $@

size: ${TARGET}
	@echo
	@avr-size -C --mcu=${MCU} ${TARGET}

## Clean target
.PHONY: clean
clean:
	-rm -rf $(OBJECTS) mini.elf dep/* mini.hex mini.eep mini.lss mini.map


## Other dependencies
-include $(shell mkdir dep 2>/dev/null) $(wildcard dep/*)

