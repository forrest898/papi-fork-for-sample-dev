/* $Id: arch.h,v 1.2 2005/01/16 22:55:11 mikpe Exp $
 * Architecture-specific support code.
 *
 * Copyright (C) 2004  Mikael Pettersson
 */

extern unsigned long ucontext_pc(const struct ucontext *uc);

extern void do_setup(const struct perfctr_info *info,
		     struct perfctr_cpu_control *cpu_control);
