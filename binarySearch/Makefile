SRCS = binarySearch.cpp \
	   main.cpp

OBJ = ${SRCS:.cpp=.o}

CFLAGS = -std=c++11
CC = c++
RM = rm -f

NAME = binary
HEADER = binarySearch.hpp

all: ${NAME}

${NAME}: ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}

%.o: %.cpp ${HEADER}
	${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJ}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:clean all fclean re