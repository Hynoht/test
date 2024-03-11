/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tolrandr <tolrandr@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 08:37:51 by tolrandr          #+#    #+#             */
/*   Updated: 2024/03/11 08:37:52 by tolrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	char *null_str = NULL;
	ft_printf("1, 2, 3, -d test, testing, 0.4s sound, 1, 2, 3xp, sound, -*dtest");
	ft_printf("%c", 'a');
	ft_printf("%c%c%c*", '\0', '1', 1);
	ft_printf("%c small string", 'a');
	ft_printf("%c small string", '\0');
	ft_printf("the char is: %c", 'a');
	ft_printf("the char is: %c", '\0');
	ft_printf("n%cs", 'a');
	ft_printf("%c%c%c%c%c", 'a', 'i', 'u', 'e', 'o');
	ft_printf("l%cl%cl%cl%cl%c", 'a', 'i', 'u', 'e', 'o');
	ft_printf("l%cl%cl%cl%cl%c", '\0', '\0', '\0', 'e', '\0');
	ft_printf("%s", "");
	ft_printf("this is a %s", "test");
	ft_printf("this is 1 %s with %s %s", "test", "multiple", "strings");
	ft_printf("%s%s%s%s", "This ", "is", " an ugly ", "test");
	ft_printf("%s", "This is a rather simple test.");
	ft_printf("%s", "-2");
	ft_printf("%s", "-24");
	ft_printf("%s", "-stop");
	ft_printf("%s", "-0003");
	ft_printf("%s", "000-0003");
	ft_printf("%s", "0x42");
	ft_printf("%s", "0x0000042");
	ft_printf("some naugty tests: %s", "0000%");
	ft_printf("some naugty tests: %s", "    %");
	ft_printf("some naugty tests: %s", "%000");
	ft_printf("%s", "bea thought but bea forgot the loop that the chars cause she was floaty during the amsterdam siren call. she got me by surprise you probably read my mind that look in your eyes and judging by your own cries you probably read my mind this is a really long string and if you see this you must look at your return values!kthxbai this must have more than 127 chars by now isnt it ok 4242 4 life 1337 code everyday to the moon!");
	ft_printf("%s", null_str);
	ft_printf("%s everywhere", null_str);
	ft_printf("everywhere %s", null_str);
	ft_printf("%s", "h");
	ft_printf("t%st%s", "a", "u");
	ft_printf("%s%s%s%s%s%s", "a", "i", "u", "e", "o", "l");
	int test = 42;
	ft_printf("%p", &test);
	ft_printf("%p is a virtual memory address", &test);
	ft_printf("The address of the answer is %p", &test);
	ft_printf("The address is %p, so what?", &test);
	int *ptr = &test;
	ft_printf("A pointer at %p points to %p", &test, &ptr);
	ft_printf("%p", NULL);
	ft_printf("The NULL macro represents the %p address", NULL);
	ft_printf("This %p is even stranger", (void *)-1);
	ft_printf("%d", 0);
	ft_printf("%d", 10);
	ft_printf("%d, %d", 10, 20);
	ft_printf("%d%d%d%d", 10, 20, 30, 5);
	ft_printf("%d %d", 2147483647, (int)-2147483648);
	ft_printf("42 - 84 is %d", -42);
	ft_printf("%d C is the lowest temperature in the universe", -273);
	ft_printf("%dxC is the lowest temperature in the universe", -273);
	ft_printf("%dsC is the lowest temperature in the universe", -273);
	ft_printf("%dpC is the lowest temperature in the universe", -273);
	ft_printf("%i", 0);
	ft_printf("%i", 10);
	ft_printf("%i, %i", 10, 23);
	ft_printf("%i%i%i%i%i%i%i", 10, 23, -2, 37, 200, -9999, 977779);
	ft_printf("%i %i", 2147483647, (int)-2147483648);
	ft_printf("%iq%i", 21447, -21648);
	ft_printf("%u", 42);
	ft_printf("%u", 0);
	ft_printf("%u", 2147483647);
	ft_printf("%u", (unsigned int)2147483648);
	ft_printf("%u", (unsigned int)3147983649);
	ft_printf("%u", (unsigned int)4294967295);
	ft_printf("%u to the power of %u is %u", 2, 32, (unsigned int)4294967295);
	ft_printf("%u%u%u%u", (unsigned int)429896724, 0, 32, (unsigned int)4294967295);
	ft_printf("%x", 0);
	ft_printf("%x", 1);
	ft_printf("%x", 10);
	ft_printf("%x", 16);
	ft_printf("%x", 160);
	ft_printf("%x", 255);
	ft_printf("%x", 256);
	ft_printf("%x", 3735929054u);
	ft_printf("the password is %x", 3735929054u);
	ft_printf("%x is the definitive answer", 66u);
	ft_printf("this is the real number: %x", -1u);
	ft_printf("%X", 0);
	ft_printf("%X", 1);
	ft_printf("%X", 10);
	ft_printf("%X", 16);
	ft_printf("%X", 160);
	ft_printf("%X", 255);
	ft_printf("%X", 256);
	ft_printf("%X", (unsigned int)3735929054);
	ft_printf("the password is %X", (unsigned int)3735929054);
	ft_printf("%X is the definitive answer", (unsigned int)66);
	ft_printf("this is the real number: %X", (unsigned int)-1);
	ft_printf("%%");
	ft_printf("100%%");
	ft_printf("%%p is how you print a pointer in ft_printf");
	ft_printf("the '%%%%' is used to print a %% in ft_printf");
	ft_printf("%%%%%%%%%%%%%%%%");
	ft_printf("%%c%%s%%p%%d%%i%%u%%x%%X%%");
	ft_printf("%c - %s - %p %d - %i - %u - %x %X %%", 'a', "test", (void *)0xdeadc0de, 20, -20, -1, -1, 200000000);
	ft_printf("%c - %s - %p %d - %i - %u - %x %X %%", '\0', "test", (void *)-1, 20, -20, -1, -1, 200000000);
	ft_printf("%c - %s - %p %d - %i - %u - %x %X %%", 'c', "", (void *)-1, 20, -20, -1, -1, 200000000);
	ft_printf("%i - %s - %p %d - %c - %u - %x %X %%", 20, "", (void *)-1, '\0', -20, -1, -1, 200000000);
	ft_printf("%c - %s - %p %d - %i - %u - %x %X %%", 'b', null_str, NULL, 20, -20, -1, -1, 200000000);
	ft_printf("%c %s - %p - %d - %i %u - %x - %X %%", '\0', null_str, (void *)0xdeadc0de, 0, (int)-2147483648, -1, -1, 200000000);
}
