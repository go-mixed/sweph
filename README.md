# Swiss ephemeris 2.09.03
The SWISS EPHEMERIS is the high precision ephemeris developed by Astrodienst, largely based upon the DExxx ephemerides from NASA's JPL . The original release in 1997 was based on the DE405/406 ephemeris. Since release 2.00 in February 2014, it is based on the DE431 ephemeris released by JPL in September 2013.

http://www.astro.com/swisseph/


## Build on windows
### Install msys2
- Download and Install from `https://www.msys2.org/`
- Add mirror from

	Path: `\path\to\msys64\etc\pacman.d\`
	- `mirrorlist.mingw32`
	- `mirrorlist.mingw64`
	- `mirrorlist.msys`

	If you visit the official repository slowly.
	Add your mirror url to the top, like this:
	```
	# the CN mirror url
	Server = https://mirrors.tuna.tsinghua.edu.cn/msys2/mingw/i686/
	...
	```


### Install MingW GCC x86/x64

Open `Msys2` console terminal from StartMenu

```
pacman -Syu
pacman -Su
pacman -S mingw-w64-i686-toolchain mingw-w64-cross-toolchain
```

## Build Swiss ephemeris

### Build .dll

Open `MSYS2 MinGW 64-bit` console terminal from StartMenu

> If you want to build the `x86 dll` , Open `MSYS2 MinGW 32-bit`

```
cd /the/codes/folder/
mingw32-make libswe.so
```

Done, `libswe.so` is now in the folder, rename to `libswe.dll`

**Ps:** It's a **static DLL** within any c runtime on windows.

### Build .a

```
mingw32-make libswe.a
```

### Clean build

```
mingw32-make clean
```

### Build on Visual studio

// TODO