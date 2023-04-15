#include <stdint.h>
#include <ti/screen.h>
#include <ti/getcsc.h>
#include <ti/real>
#include <sys/rtc.h>

using namespace ti::literals;

int main(void)
{
    os_ClrHomeFull(); // clear screen

    char buf[] = "C++ toolchain.";
    os_PutStrFull(buf);
    os_NewLine();

    while (!os_GetCSC());

    return 0;
}
