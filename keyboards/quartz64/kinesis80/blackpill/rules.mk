MCU = STM32F103

# GENERIC STM32F103C8T6 board - stm32duino bootloader
OPT_DEFS = -DCORTEX_VTOR_INIT=0x2000
MCU_LDSCRIPT = STM32F103x8_stm32duino_bootloader
BOARD = STM32_F103_STM32DUINO

DFU_ARGS = -d 1eaf:0003 -a2 -R
DFU_SUFFIX_ARGS = -v 1eaf -p 0003

# Enter lower-power sleep mode when on the ChibiOS idle thread
OPT_DEFS += -DCORTEX_ENABLE_WFI_IDLE=TRUE

# GENERIC STM32F103C8T6 board - HID bootloader 4k
#OPT_DEFS = -DCORTEX_VTOR_INIT=0x1000
#MCU_LDSCRIPT = STM32F103x8_hid_bootloader_4k
#BOARD = GENERIC_STM32_F103

# GENERIC STM32F103C8T6 board - no bootloader (programmer over serial or SWD)
#OPT_DEFS =
#MCU_LDSCRIPT = STM32F103x8
#BOARD = GENERIC_STM32_F103

BOOTMAGIC_ENABLE = no       # Virtual DIP switch configuration(+1000)
MOUSEKEY_ENABLE = yes        # Mouse keys(+4700)
EXTRAKEY_ENABLE = yes        # Audio control and System control(+450)
CONSOLE_ENABLE = yes        # Console for debug(+400)
COMMAND_ENABLE = yes         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
NKRO_ENABLE = yes            # USB Nkey Rollover
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality on B7 by default
CUSTOM_MATRIX = no 	        # Custom matrix file
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
MIDI_ENABLE = no            # MIDI support (+2400 to 4200, depending on config)
UNICODE_ENABLE = no         # Unicode
BLUETOOTH_ENABLE = no       # Enable Bluetooth with the Adafruit EZ-Key HID
AUDIO_ENABLE = no           # Audio output on port C6
FAUXCLICKY_ENABLE = no      # Use buzzer to emulate clicky switches
HD44780_ENABLE = no 		    # Enable support for HD44780 based LCDs (+400)
