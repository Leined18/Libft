#ifndef STRUCTS_H
# define STRUCTS_H

# include "shared.h"

/* ************************************************************************** */
/*                                 STRUCTS                                    */
/* ************************************************************************** */

typedef void			(*t_del_func)(void *);

typedef struct s_hash_entry
{
	int64_t				value;
	struct s_hash_entry	*next;
}						t_hash_entry;

typedef enum e_bool
{
	FALSE,
	TRUE
}						t_bool;

typedef struct s_list
{
	void				*content;
	struct s_list		*next;
}						t_list;

#endif // STRUCTS_H