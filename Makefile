NAME = converter
SRCS = $(wildcard *.cpp)
OBJS = ${SRCS:.cpp=.o}
CC = c++

all: ${NAME}

${NAME}: ${OBJS}
	@${CC} ${OBJS} ${CXXFLAGS} -o ${NAME}

clean :
	@rm -rf *.o

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re .c.o