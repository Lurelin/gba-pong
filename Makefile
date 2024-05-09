game:
	C:\devkitPro\devkitARM\bin\arm-none-eabi-gcc.exe -mthumb -c src/pong.cpp -o build/temp/pong.o -I src/include/tonc -L lib/tonc

	C:\devkitPro\devkitARM\bin\arm-none-eabi-gcc.exe -specs=gba.specs -mthumb build/temp/pong.o -o build/temp/pong.elf 

	C:\devkitPro\devkitARM\bin\arm-none-eabi-objcopy.exe -O binary build/temp/pong.elf build/pong.gba

	C:\devkitPro\tools\bin\gbafix.exe build/pong.gba

	"C:\Program Files\mGBA\mGBA.exe" build/pong.gba
