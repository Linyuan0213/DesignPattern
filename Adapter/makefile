src = $(wildcard ./*.cpp)
obj = $(patsubst %.cpp, %.o, $(src))
EXEC_DIR = ./bin
CC = g++
CFLAGS = -Wall -g
LFLAGS = 
target = adapter
all:$(obj)
	@mkdir -p $(EXEC_DIR)
	$(CC)  $(obj) -o  $(EXEC_DIR)/$(target) $(LFLAGS) 

%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
	
.PHONY:clean
clean:
	-rm -f $(obj) $(EXEC_DIR)/$(target)
	-rm -rf $(EXEC_DIR)
