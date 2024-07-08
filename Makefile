# Compilador y Flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Definicion de directorios
SRC_DIR = src
OBJ_DIR = obj
# Carpeta para archivos de cabecera .h
# como una "interfaz"
INCL_DIR = include

# Definicion de los Archivos Fuente (.c) y Objetos (.o)
# wildcard obtiene una lista de los archivos .c
SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
# patsubst transforma los archivos .c en .o
OBJ_FILES = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC_FILES))

# Nombre del ejecutable
EXEC = makefile

# Regla por defecto que se ejecuta cuando se llama a make sin argumentos.
# Crea el ejecutable
all: $(EXEC)

# Regla para compilar el ejecutable
# Define que el ejecutable depende de los .o
$(EXEC): $(OBJ_FILES)
# Usa el CC para enlazar los .o
	$(CC) $(OBJ_FILES) -o $@

# Regla para compilar los archivos objeto
# Define que cualquier archivo .o depende de su correspondiente .c
# La segunda parte se asegura de que el directorio de .o existe
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $$(OBJ_DIR)
# Usa el cc con las Flags para compilar (-c) el archivo fuente ($<) y generar el archivo objeto ($@)
	$(CC) $(CFLAGS) -c $< -o $@

# Crea el directorio Obj si no existe
$(OBJ_DIR):
# El -p es la condicion de "si no existe"
	mkdir -p $(OBJ_DIR)

# Regla para limpiar los archivos compilados y su directorio
clean:
	rm -rf $(OBJ_DIR)

# Regla para limpiar todo, incluido el ejecutable
# SE basa en clean (: clean) y añade el ejecutable
fclean: clean
	rm -f $(EXEC)

# Regla para recompilar todo
# Ejecuta fclean para limpiar y luego all para compilar de nuevo
re: fclean all

# Los Phony targets son comandos que "make" siempre ejecutará
# Declara que estas reglas no son archivos sino comandos para evitar
# confusiones si existieran archivos con los mismos nombres
.PHONY: all clean fclean re


# Variables automaticas de un Makefile:
# $< = archivo fuente .c
# $@ = archivo objeto .o

# /*.c = busca todos los archivos con esa extension
# % = comodin que puede ser substituido por cualquier caracter (/%.c = cualquiercosa.c)