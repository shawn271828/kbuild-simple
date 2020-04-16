/* SPDX-License-Identifier: GPL-2.0 */
#include <generated/autoconf.h>
#include <printk.h>

int main(int argc, char **argv)
{
#ifdef CONFIG_EXTRA_MESSAGE
	printk(KERN_ERR, "This is a error message.\n");
	printk(KERN_WARN, "This is a warning message.\n");
	printk(KERN_INFO, "This is a info message.\n");
#endif
	printk(KERN_INFO, CONFIG_GREETINGS"\n");
	printk(KERN_INFO, "What a day!\n");

	return 0;
}
