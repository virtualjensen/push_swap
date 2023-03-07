{ 
		char	line[256];
		while (1)
		{
			scanf("%255[^\n]%*c",line);
			if (ft_strcmp(line, "sa") == 0)
				swap_a(data, 1);
			else if (ft_strcmp(line, "sb") == 0)
				swap_b(data, 1);
			else if (ft_strcmp(line, "ss") == 0)
				sa_sb(data);
			else if (ft_strcmp(line, "pa") == 0)
				push_to_a(data);
			else if (ft_strcmp(line, "pb") == 0)
				push_to_b(data);
			else if (ft_strcmp(line, "ra") == 0)
				rotate_a(data, 1);
			else if (ft_strcmp(line, "rb") == 0)
				rotate_b(data, 1);
			else if (ft_strcmp(line, "rr") == 0)
				ra_rb(data);
			else if (ft_strcmp(line, "rra") == 0)
				r_rotate_a(data, 1);
			else if (ft_strcmp(line, "rrb") == 0)
				r_rotate_b(data, 1);
			else if (ft_strcmp(line, "rrr") == 0)
				rrr(data);
			else if (ft_strcmp(line, "exit") == 0)
				break ;
			debug_ps(*data);
		}