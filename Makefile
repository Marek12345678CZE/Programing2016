
all: marek


marek: marek.c
	gcc $< -o $@
