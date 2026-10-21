CC = gcc
CFLAGS = -O2 -Wall -Wextra -pedantic
SRC_DIR = src
TARGET = Test3DVector

# Список .c-файлов из SRC_DIR
SRC = $(wildcard $(SRC_DIR)/*.c)
OBJ = $(SRC:.c=.o)
DEP = $(OBJ:.o=.d)

# === ОСНОВНЫЕ ЦЕЛИ ===
all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Правило для .o: компилируем и сразу генерируем .d с зависимостями
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -MMD -MP -c -o $@ $<

clean:
	rm -f $(OBJ) $(DEP) $(TARGET)

.PHONY: all clean

# Подключаем файлы зависимостей (если их нет — просто молча пропускаем)
-include $(DEP)