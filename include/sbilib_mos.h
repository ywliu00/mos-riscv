#ifndef _SBILIB_MOS_H_
#define _SBILIB_MOS_H_

#include <types.h>

#define SBI_SET_TIMER 0
#define SBI_CONSOLE_PUTCHAR 1
#define SBI_CONSOLE_GETCHAR 2
#define SBI_CLEAR_IPI 3
#define SBI_SEND_IPI 4
#define SBI_REMOTE_FENCE_I 5
#define SBI_REMOTE_SFENCE_VMA 6
#define SBI_REMOTE_SFENCE_VMA_ASID 7
#define SBI_SHUTDOWN 8

extern u_int64_t sys_ecall(u_int64_t, u_int64_t, u_int64_t, u_int64_t);

void sbi_console_putchar(unsigned char ch);

#endif
