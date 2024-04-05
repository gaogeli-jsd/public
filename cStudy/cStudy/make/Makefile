CC := gcc
CFLAGS := -g -Wall -Wextra

SRCS = fileAppend.c

OBJS = $(SRCS:%.c=%.o)

hello:
	gcc -o hello \
		$(SRCS)

# 例：変数TEXTに入っている文章を表示させるshow_textルールを設定する
TEXT = "this is a sample."

# ルールの文頭に@をつければ表示されなくなる。
show_text:
	@echo $(TEXT)

#test: $(OBJS)
#             gcc -o $@ $(OBJ)
