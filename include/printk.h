/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _PRINTK_H_
#define _PRINTK_H_

#ifdef CONFIG_LOG_ERROR
#define KERN_ERR 0
#else
#define KERN_ERR -1
#endif

#ifdef CONFIG_LOG_WARNING
#define KERN_WARN 1
#else
#define KERN_WARN -1
#endif

#ifdef CONFIG_LOG_INFO
#define KERN_INFO 2
#else
#define KERN_INFO -1
#endif

extern int printk(int level, const char *msg);

#endif
