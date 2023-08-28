int puts(const char *s);

#define lineout(a) puts(a)
#define end return(0)

int main()
{
	lineout("Hello there!");
	end;
}

