/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaizhang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 21:23:15 by kaizhang          #+#    #+#             */
/*   Updated: 2022/08/12 11:54:08 by kaizhang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/time.h>
#include<signal.h>
#include<stdlib.h>
#include<fcntl.h>
#include "libft.h"
/*
int main(int argc, char *argv[])
{
	int	i;
	int	fd1;
	int	fd2;
	char *line1;
	char *line2;

	fd1 = open("test1.txt", O_RDONLY);
	fd2 = open("test2.txt", O_RDONLY);
	printf("fd value of test1 : %d\n", fd1);
	printf("fd value of test2 : %d\n", fd2);
	printf("\n\n");
	i = 0;
	while(i >= 0)
	{
		line1 = get_next_line(fd1);
		if(line1)
			printf("%s\n", line1);
		line2 = get_next_line(fd2);
		if(line2)
			printf("%s\n", line2);
		if(!line1 && !line2)
			break;
		i++;
	}
	return (0);
}
*/

//(this is testing program for write(fd, xxx, 3) or other fd function
int main()
{
	int fd_open2_write;
	char *s;

	s = "helloworld";
	fd_open2_write = open("test2.txt", O_RDWR);
	//write(fd_open2_write, "hah!!!", 6);
	ft_putendl_fd(s, fd_open2_write);
	close(fd_open2_write);
	return (0);
}


