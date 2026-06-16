#include <unistd.h>

char	*ft_strcapitalize(char *str);
void	ft_putstr(char *str);

int	main(void)
{
	char	str1[] = "salut, comment tu vas ? 42mots quarante-deux";

	ft_putstr(ft_strcapitalize(str1));
	ft_putstr("\n");
	return (0);
}
