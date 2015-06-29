/*
 * pov_character_3.c
 *
 * Created: 23-06-2015 12:18:28 PM
 *  Author: Mohit Sharma
 */ 


#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <avr/sfr_defs.h>

#define led1 (1<<PC0)
#define led2 (1<<PC1)
#define led3 (1<<PC2)
#define led4 (1<<PC3)
#define led5 (1<<PC4)
#define led6 (1<<PC5)
#define led7 (1<<PD2)
#define led8 (1<<PD3)
#define ledc PORTC
#define ledd PORTD

void Delay_us(int);
void a();
void b();
void c();
void d();
void e();
void f();
void g();
void h();
void i();
void j();
void k();
void l();
void m();
void n();
void o();
void p();
void q();
void r();
void s();
void t();
void u();
void v();
void w();
void x();
void y();
void z();
void hour_hand();
void minute_hand();

int sec=0;

int main(void)
{
	DDRC = 0xff;
	DDRD = 0xff;
	DDRB |= (1<<PB0);
	PORTB |= (1<<PB0);
	TCCR1B = (1<<CS12);
    while(1)
    {
		if(bit_is_set(PINB,1))
		{
			Delay_us(1300);
			ledc |= led1|led2|led3;
			Delay_us(50);
			ledc &= ~led1 & ~led2 &~led3;
			Delay_us(sec);
			i();
			sec+=10;
		}
// 			if(bit_is_set(PINB,1))
// 			{
// 				Delay_us(500);
// 				d();
// 				r();
// 				i();
// 				s();
// 				h();
// 				t();
// 				i();
// 			}
// 			if(bit_is_set(PINB,1))
// 			{
// 				i();	
// 				Delay_us(555);
// 				hour_hand();			//6 o clock            555    83
// 				Delay_us(595);
// 				i();				//9 o clock
// 				Delay_us(1200);
// 				i();				//12 o clock
// 				Delay_us(1200);
// 				i();
// 				Delay_us(417);
// 				minute_hand();				//3 o clock
// 			}		
		
// 		for(cnt=0;cnt<8 0;cnt++)
// 		{
// 			if(bit_is_set(PINB,1))
// 			{
// 				Delay_us(1800);
// 				m();
// 				o();
// 				h();
// 				i();
// 				t();
// 			}
// 		}
		
     
    }
}

void Delay_us(int n)
{
	while(n--)
	{
		_delay_us(1);
	}
}

void hour_hand()
{
	ledc |= led3|led4|led5;
	Delay_us(50);
	ledc &= ~led3 & ~led4 & ~led5;
}

void minute_hand()
{
	ledc |= led3|led4|led5;
	ledd |= led6|led7|led8;
	Delay_us(50);
	ledc &= ~led3&~led4&~led5;
	ledd &= ~led6&~led7&~led8;
}
void a()
{
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led2&~led4&~led5;
	Delay_us(150);
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void b()
{
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led2&~led4;
	Delay_us(120);
	ledc &= ~led1&~led3&~led5;
	ledc |= led2|led4;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void c()
{
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led2&~led3&~led4;
	Delay_us(150);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void d()
{
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led2&~led3&~led4;
	Delay_us(100)	;
	ledc &= ~led1&~led5;
	ledc |= led2|led4;
	Delay_us(70);
	ledc &= ~led2&~led4;
	ledc |= led3;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void e()
{
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led2&~led4;
	Delay_us(150);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void f()
{
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led2&~led4&~led5;
	Delay_us(150);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void g()
{
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led2&~led3&~led4;
	Delay_us(100);
	ledc |= led3;
	Delay_us(50);
	ledc |= led4;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void h()
{
	
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led1&~led2&~led4&~led5;
	Delay_us(150);
	ledc |= led1|led2|led3;
	Delay_us(50);
	ledc |= led4|led5;
	ledc &= ~led1&~led2&~led3;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
	
}

void i()
{
	ledc = led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc = 0x00;
	Delay_us(60);
}

void j()
{
	ledc |= led4;
	Delay_us(70);
	ledc|= led5;
	ledc &= ~led4;
	Delay_us(150);
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void k()
{
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led1&~led2&~led4&~led5;
	Delay_us(75);
	ledc &= ~led3;
	ledc |= led2|led4;
	Delay_us(50);
	ledc |= led1|led5;
	ledc &= ~led2&~led4;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void l()
{
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4;
	Delay_us(150);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void m()
{
	
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led2&~led3&~led4&~led5;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	ledc|= led2;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	ledc|= led3;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	ledc|= led2;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	ledc|= led1;
	Delay_us(50);
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
	
}

void n()
{
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led2&~led3&~led4&~led5;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	ledc|= led2;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	ledc|= led3;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	ledc|= led4;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	ledc|= led5;
	Delay_us(50);
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void o()
{
	
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led2&~led3&~led4;
	Delay_us(150);
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
	
}

void p()
{
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led2&~led4&~led5;
	Delay_us(80);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	ledc |= led2;
	Delay_us(60);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void q()
{
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led3&~led4;
	Delay_us(70);
	ledc &= ~led2&~led4;
	ledc |= led3;
	Delay_us(50);
	ledc &= ~led2&~led3;
	ledc |= led4;
	Delay_us(50);
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void r()
{
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led2&~led5;
	ledc |= led3;
	Delay_us(50);
	ledc|= led4;
	Delay_us(30);
	ledc &= ~led2&~led4;
	ledc |= led5;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	ledc |= led2|led5;
	Delay_us(60);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
	
}

void s()
{
	
	ledc |= led1|led2|led3|led5;
	Delay_us(70);
	ledc &= ~led2;
	
	Delay_us(150);
	ledc |= led4;
	ledc &= ~led1&~led3;
	Delay_us(50);
	ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
	
}

void t()
{
	ledc |= led1;
	Delay_us(100);
	ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
	ledc &= ~led2&~led3&~led4&~led5;
	Delay_us(100);
	ledc &= ~led1;
	Delay_us(60);
}

void u()
{
		ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
		ledc &= ~led1&~led2&~led3&~led4;
	Delay_us(150);
		ledc |= led1|led2|led3|led4|led5;
	Delay_us(50);
		ledc &= ~led1&~led2&~led3&~led4&~led5;
	Delay_us(60);
}

void v()
{
		ledc |= led1;
	Delay_us(50);
		ledc &= ~led1;
		ledc |= led2;
	Delay_us(50);
		ledc &= ~led2;
		ledc |= led3;
	Delay_us(50);
		ledc &= ~led3;
		ledc |= led4;
	Delay_us(50);
		ledc &= ~led4;
		ledc |= led5;
	Delay_us(50);
		ledc &= ~led5;
		ledc |= led4;
	Delay_us(50);
		ledc &= ~led4;
		ledc |= led3;
	Delay_us(50);
		ledc &= ~led3;
		ledc |= led2;
	Delay_us(50);
		ledc &= ~led2;
		ledc |= led1;
	Delay_us(50);
		ledc &= ~led1;
	Delay_us(60);
}

void w()
{
		ledc |= led1;
	Delay_us(50);
		ledc &= ~led1;
		ledc |= led2;
	Delay_us(50);
		ledc &= ~led2;
		ledc |= led3;
	Delay_us(50);
		ledc &= ~led3;
		ledc |= led4;
	Delay_us(50);
		ledc &= ~led4;
		ledc |= led5;
	Delay_us(50);
		ledc &= ~led5;
		ledc |= led4;
	Delay_us(50);
		ledc &= ~led4;
		ledc |= led3;
	Delay_us(50);
		ledc &= ~led3;
		ledc |= led2;
	Delay_us(50);
		ledc &= ~led2;
		ledc |= led1;
	Delay_us(50);
		ledc &= ~led1;	
	Delay_us(50);
		ledc &= ~led1;
		ledc |= led2;
	Delay_us(50);
		ledc &= ~led2;
		ledc |= led3;
	Delay_us(50);
		ledc &= ~led3;
		ledc |= led4;
	Delay_us(50);
		ledc &= ~led4;
		ledc |= led5;
	Delay_us(50);
		ledc &= ~led5;
		ledc |= led4;
	Delay_us(50);
		ledc &= ~led4;
		ledc |= led3;
	Delay_us(50);
		ledc &= ~led3;
		ledc |= led2;
	Delay_us(50);
		ledc &= ~led2;
		ledc |= led1;
	Delay_us(50);
		ledc &= ~led1;
	Delay_us(60);
}

void x()
{
		ledc |= led1|led5;
	Delay_us(50);
		ledc |= led2|led4;
		ledc &= ~led1&~led5;
	Delay_us(50);
		ledc |= led3;
		ledc &= ~led2&~led4;
	Delay_us(50);
		ledc |= led2|led4;
		ledc &= ~led3;
	Delay_us(50);
		ledc |= led1|led5;
		ledc &= ~led2&~led4;
	Delay_us(50);
		ledc &= ~led1&~led5;
	Delay_us(60);
}

void y()
{
		ledc |= led1|led5;
	Delay_us(50);
		ledc |= led2|led4;
		ledc &= ~led1&~led5;
	Delay_us(50);
		ledc |= led3;
		ledc &= ~led2&~led4;
	Delay_us(50);
		ledc |= led2;
		ledc &= ~led3;
	Delay_us(50);
		ledc |= led1;
		ledc &= ~led2;
	Delay_us(50);
		ledc &= ~led1;
	Delay_us(60);
}

void z()
{
		ledc |= led1|led5;
	Delay_us(50);
		ledc |= led4;
	Delay_us(50);
		ledc |= led3;
		ledc &= ~led4;
	Delay_us(50);
		ledc |= led2;
		ledc &= ~led3;
	Delay_us(50);
		ledc |= led1;
		ledc &= ~led2;
	Delay_us(50);
		ledc &= ~led1&~led5;
		TCNT1=0;
	Delay_us(60);
}
