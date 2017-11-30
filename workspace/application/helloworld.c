#include <xparameters.h>
#include <xuartps_hw.h>

int main() {

    char character = 'a';

    XUartPs_SendByte(STDOUT_BASEADDRESS, character);

    int a;
    int b = 1;

    int c = a + b;

    return 0;
}
