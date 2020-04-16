/* SPDX-License-Identifier: GPL-2.0 */
#include <generated/autoconf.h>
#include <printk.h>
#include <stdio.h>

int printk(int level, const char *msg)
{
#ifdef CONFIG_SHOW_LOG_LEVEL
	printf("LOGLVL: %d, ", level);
#endif
	printf(msg);

	return 0;
}
