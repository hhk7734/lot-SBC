![license](https://img.shields.io/github/license/loliot/lot-SBC)
![version](https://img.shields.io/github/v/tag/loliot/lot-SBC?sort=semver)
![language](https://img.shields.io/github/languages/top/loliot/lot-SBC)

# lot-API

## Adding New board

```bash
git clone https://github.com/loliot/lot-SBC.git
```

Change **lot-SBC** to **lot-\<your board\>** in `debian/*` and Doxyfile.
Make the board name a combination of lowercase letters and hyphens.

Rewrite README.md.

```bash
git remote rename origin lot-SBC &&\
git remote add origin https://github.com/loliot/lot-<your board>.git &&\
git add . &&\
git commit -m "init" &&\
git push -f -u origin master
```

## Pin mapping

Pin mapping is based on physical pinout of board.

### Example

In case using an 8-bit processor and using PA3, PA4, PC0, PC2, PD1, and PD4.

Set port A, C, and D numbers to 0, 16, and 32, respectively.

Set PA3 and PA4 to 3(0+3) and 4(0+4).  
Set PC0 and PC2 to 16(16+0) and 18(16+2).  
Set PD1 and PD4 to 33(32+1) and 36(32+4).

```bash
|     | LOT |  PHY  | LOT |     |
| PA3 |   3 | 1 | 2 |   4 | PA4 |
| PD4 |  36 | 3 | 4 |  16 | PC0 |
| PC2 |  18 | 5 | 6 |  33 | PD1 |
```

## Structure

```bash
lot-<your borad>
├── lot-API
│   ├── II2c.h
│   ├── ISpi.h
│   ├── IUart.h
│   ├── Log.h
│   ├── lotdef.h
│   ├── lot_gpio.h
│   ├── lot_time.h
│   └── ...
├── SBC.h
├── lot.h
├── Gpio.h
├── I2c.h
├── Spi.h
├── Uart.h
└── ...
```

## Editing Makefile

If adding a.cpp source to lot-\<your board\>, add the source name to CXXSRCS in Makefile as shown below.

```make
CSRCS = \

SXXSRCS = a.cpp \

INCS_DIR = .\

```

## Code formatting

```bash
make clang
```
