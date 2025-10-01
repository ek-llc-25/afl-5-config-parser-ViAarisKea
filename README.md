# Aflevering 5: config settings parser

Den udleverede skabelon indeholder den config-parser som blev udarbejdet til undervisningen.

Der er et eksempel i [config.ini](./config.ini) som ser sådan her ud:

```
name = Simon
age = 40
```

Den udleverede parser producerer en `struct config_t` som indeholder op til 20 `char *`, altså strings.

Men den skulle meget gerne i stedet producere op til `struct setting_t *`, altså _settings_!

## Delopgaver

### 1. Omskriv den interne datastruktur

Den udleverede `struct config_t` ser sådan her ud:

```c
struct config_t {
    char *lines[20];
    size_t count;
};
```

Men ved aflevering skal den gerne se sådan her ud:

```c
struct setting_t {
    char *name;
    char *value;
};

struct config_t {
    struct setting_t *lines[20];
    size_t count;
};
```

Altså: Hver setting er en pointer til en struct, i stedet for en string.

### 2. Lav funktionen `setting_converter()` og brug den i `read_config()`

Funktionen `setting_converter()` har sjovt nok til formål at konvertere fra `char *` til `struct setting_t *`.

Funktionen `setting_converter()` ligger i den udleverede skabelon, men den mangler en del.

Den handler om at bygge en lille parser der laver `name = Simon` om til to strings. Loop hen over pladserne i `line`
indtil du støder på et `=`. Så ved du at name-delen slutter og at value-delen begynder. Skal man lave to allokeringer
eller findes der en måde at genbruge `line`? Der findes flere løsninger, og det er din opgave at vælge en løsning her.

### 3. Lav funktionen `print_setting()` og brug den i `print_config()`

Den her opgave er ret nem, og er bare med til at bekræfte at `read_config()` virker.
