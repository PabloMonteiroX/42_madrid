# 42 Madrid — Pablo Monteiro

<div align="center">

![C Badge](https://img.shields.io/badge/C-58.1%25-blue?style=flat-square)
![Shell Badge](https://img.shields.io/badge/Shell-41.9%25-green?style=flat-square)
![License](https://img.shields.io/badge/License-MIT-success?style=flat-square)

Repositorio oficial de la **C Piscine** y **Cursus** de 42 Madrid.

[Sobre el proyecto](#sobre-el-proyecto) • [Estructura](#estructura) • [Requisitos](#requisitos) • [Compilación](#compilación) • [Herramientas](#herramientas) • [Contacto](#contacto)

</div>

---

## 📋 Sobre el proyecto

Este repositorio contiene todos los proyectos y ejercicios completados durante mi participación en **42 Madrid**, el campus de programación más innovador y gratuito que abre las puertas al mercado laboral.

El aprendizaje se basa en una metodología revolucionaria, peer-to-peer learning y proyectos prácticos que desarrollan habilidades reales de programación en C y scripting shell.

---

## 📁 Estructura

| Carpeta | Descripción | Proyectos |
|---------|-------------|-----------|
| **pool/** | C Piscine — Introducción intensiva a C | C00 a C05 |
| **libft/** | Librería propia reimplementando funciones de libc | Proyecto obligatorio del cursus |

### Descripción detallada

### 🏊 pool/ — C Piscine
La C Piscine es la introducción intensiva a la programación en C. Comprende cinco módulos progresivos:

- **C00**: Primeros programas y input/output
- **C01**: Punteros y arrays
- **C02**: Strings y manipulación de caracteres
- **C03**: Comparación y búsqueda de strings
- **C04**: Aritmética de punteros
- **C05**: Recursión

### 📚 libft/ — Librería Propia
Reimplementación de funciones fundamentales de la librería estándar de C (`libc`). Incluye:

- Funciones de manipulación de memoria
- Funciones de strings
- Funciones de caracteres
- Funciones de listas enlazadas
- Funciones variadas

---

## ⚙️ Requisitos

- **Compilador**: `gcc` o `clang`
- **Sistema Operativo**: Linux o macOS
- **Herramientas**:
  - `make` (opcional, para proyectos con Makefile)
  - `valgrind` (para detectar fugas de memoria)
  - `norminette` (validador de estilo de código 42)

```bash
# En macOS (con Homebrew)
brew install gcc valgrind

# En Linux (Debian/Ubuntu)
sudo apt-get install gcc valgrind

# Instalar norminette
pip install norminette
```

---

## 🔨 Compilación

### Compilación básica
```bash
cc -Wall -Wextra -Werror -o programa programa.c
```

### Con sanitizers (recomendado durante desarrollo)
```bash
gcc -fsanitize=address,undefined -Wall -Wextra -Werror -o programa programa.c
```

### Con optimización
```bash
gcc -O2 -Wall -Wextra -Werror -o programa programa.c
```

### Usar Makefile (si está disponible)
```bash
make
make clean
make fclean
make re
```

---

## 🛠️ Herramientas

### Compilación y depuración

| Herramienta | Comando | Propósito |
|------------|---------|----------|
| **gcc** | `gcc -Wall -Wextra -Werror` | Compilador con máxima detección de errores |
| **Sanitizers** | `gcc -fsanitize=address,undefined` | Detectar errores de memoria y comportamientos indefinidos |
| **gdb** | `gdb ./programa` | Depurador interactivo |

### Análisis de memoria

| Herramienta | Comando | Propósito |
|------------|---------|----------|
| **valgrind** | `valgrind --leak-check=full ./programa` | Detectar fugas de memoria y errores de acceso |
| **valgrind** | `valgrind --track-origins=yes ./programa` | Rastrear origen de valores no inicializados |

### Validación de código

| Herramienta | Comando | Propósito |
|------------|---------|----------|
| **norminette** | `norminette` | Validar estilo de código según normas 42 |
| **norminette** | `norminette -R CheckForbiddenSourceHeader` | Ignorar ciertos checks |

### Ejemplos prácticos

```bash
# Compilar y ejecutar con sanitizers
gcc -fsanitize=address,undefined -Wall -Wextra -Werror -o programa programa.c
./programa

# Ejecutar valgrind
valgrind --leak-check=full --show-leak-kinds=all ./programa

# Validar código
norminette *.c *.h

# Depurar con gdb
gdb ./programa
(gdb) run
(gdb) bt
(gdb) quit
```

---

## 📊 Estadísticas del Proyecto

```
Lenguaje de Programación | Porcentaje
------------------------|-----------
C                        | 58.1%
Shell                    | 41.9%
```

---

## 🎯 Objetivos

- ✅ Dominar la programación en C desde cero
- ✅ Entender gestión de memoria y punteros
- ✅ Escribir código limpio y eficiente
- ✅ Aprender buenas prácticas de programación
- ✅ Prepararse para proyectos más avanzados del cursus 42

---

## 📝 Notas importantes

- **Norminette**: Todo código debe pasar la validación de norminette antes de entregar
- **Leaks de memoria**: No se aceptan fugas de memoria (valgrind limpio)
- **Forbidden functions**: Está prohibido usar ciertas funciones de libc; se deben reimplementar
- **Makefile**: Los proyectos deben incluir un Makefile con reglas: `all`, `clean`, `fclean`, `re`

---

## 🚀 Próximos pasos

Tras completar la C Piscine, los siguientes módulos del cursus incluyen:

- Proyectos en C más avanzados
- Sistemas operativos y procesos
- Algoritmos y estructuras de datos
- Networking y programación socket
- Aplicaciones más complejas

---

## 📧 Contacto

- **GitHub**: [@PabloMonteiroX](https://github.com/PabloMonteiroX)
- **Email**: Disponible en mi perfil de GitHub

---

<div align="center">

**Hecho con ❤️ en 42 Madrid**

*"Aprende a tu ritmo, 24/7, de forma gratuita"*

</div>
