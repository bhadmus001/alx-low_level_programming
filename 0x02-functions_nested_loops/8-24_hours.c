#include "main.h"
/**
 * jack_bauer - display every minutes in 24 hours
 */
void jack_bauer(void)
{
	int h_1, h_2, m_1, m_2;
	int s = 9;
	
	h_1 = 0;
	while (h_1 <= 2)
	{
		if ( h_1 == 2)
		{
			s = 3;
		}
		h_2 = 0;
		while (h_2 <= s)
		{
			m_1 = 0;
			while (m_1 <= 5)
			{
				m_2 = 0;
				while (m_2 <=9)
				{
					_putchar('0' + h_1);
					_putchar('0' + h_2);
					_putchar(':');
					_putchar('0' + m_1);
					_putchar('0' + m_2);
					_putchar('\n');
					m_2++;
				}
				m_1++;
			}
			h_2++;
		}
		h_1++;
	}
}


