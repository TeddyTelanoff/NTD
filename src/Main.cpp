#include <cstdio>

#define UNUSED(x) (static_cast<void>(x))
#define _UNICODE(x) (L##x)
#define _CSTD ::

extern "C" int __cdecl main(unsigned long int nArgs, const char *args[])
{
	UNUSED(nArgs);
	UNUSED(args);

	UNUSED(_CSTD fputws(_UNICODE("Hello, world"), _CSTD __acrt_iob_func(1)));
	UNUSED(_CSTD fgetwc(_CSTD __acrt_iob_func(0)));
	return 0x00000000;
}