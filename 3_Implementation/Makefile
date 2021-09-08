#Targetname : Dependencies
#<TAB>Command

SRC = main.c\
src/balance.c\
src/withdraw.c\
unity/unity.c\
src/deposit.c\

INC = inc

c.exe : $(SRC) $(TEST_SRC)
	gcc $^ -I$(INC) -o $@

run: c.exe
	./c.exe

clean :
	del c.exe
