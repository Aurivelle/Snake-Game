CC = gcc
CFLAGS = -Wall -Wextra -std=c99

# 可執行檔案名稱
TARGET = game

# 所有源文件和對應的物件文件
SRC = main.c game.c draw.c input.c utils.c
OBJ = $(SRC:.c=.o)

# 預設規則
all: $(TARGET)

# 編譯可執行檔
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

# 編譯每個 .c 文件為 .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 清理編譯過程中生成的文件
clean:
	rm -f $(OBJ) $(TARGET)
