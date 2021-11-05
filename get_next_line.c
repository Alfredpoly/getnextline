#include "get_next_line.h"

static char	*get_file(char *file)
{

}

char	*get_next_line(int fd)
{
	static char	*file[OPEN_MAX];
	char		*line;

	file[fd] = get_file(file[fd])
}
