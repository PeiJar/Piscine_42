#include <unistd.h>

char    *do_open_loop(char *src)
{
	int    loop_depth;

	loop_depth = 0;
	++src;
	while (*src && (*src != ']' || loop_depth > 0))
	{
		if (*src == '[')
			++loop_depth;
		else if (*src == ']')
			--loop_depth;
		++src;
	}
	return (src);
}

char    *do_close_loop(char *src)
{
	int    loop_depth;

	loop_depth = 0;
	--src;
	while (*src && (*src != '[' || loop_depth > 0))
	{
		if (*src == ']')
			++loop_depth;
		else if (*src == '[')
			--loop_depth;
		--src;
	}
	return (src);
}

void    interpret(char *src, char *pointer)
{
	while (*src)
	{
		if (*src == '>')
			++pointer;
		else if (*src == '<')
			--pointer;
		else if (*src == '+')
			*pointer += 1;
		else if (*src == '-')
			*pointer -= 1;
		else if (*src == '.')
			write(1, pointer, 1);
		else if (*src == '[')
		{
			if (!(*pointer))
				src = do_open_loop(src);
		}
		else if (*src == ']')
			if (*pointer)
				src = do_close_loop(src);
		++src;
	}
}

int        main(int argc, char **argv)
{
	char    buffer[2048];
	char    *pointer;
	int        i;

	i = 0;
	pointer = buffer;
	while (i < 2048)
		buffer[i++] = 0;
	if (argc > 1)
		interpret(argv[1], pointer);
	return (0);
}
