#ifndef __ASM_LINKAGE_H
#define __ASM_LINKAGE_H

#define __ALIGN		.align 4
#define __ALIGN_STR	".align 4"

/*
 * Annotate a function as position independent, i.e., safe to be called before
 * the kernel virtual mapping is activated.
 */
#define SYM_FUNC_START_PI(x)			\
		SYM_FUNC_START_ALIAS(__pi_##x);	\
		SYM_FUNC_START(x)

#define SYM_FUNC_START_WEAK_PI(x)		\
		SYM_FUNC_START_ALIAS(__pi_##x);	\
		SYM_FUNC_START_WEAK(x)

#define SYM_FUNC_START_WEAK_ALIAS_PI(x)		\
		SYM_FUNC_START_ALIAS(__pi_##x);	\
		SYM_START(x, SYM_L_WEAK, SYM_A_ALIGN)

#define SYM_FUNC_END_PI(x)			\
		SYM_FUNC_END(x);		\
		SYM_FUNC_END_ALIAS(__pi_##x)

#define SYM_FUNC_END_ALIAS_PI(x)		\
		SYM_FUNC_END_ALIAS(x);		\
		SYM_FUNC_END_ALIAS(__pi_##x)

/*
 * Annotate a function as position independent, i.e., safe to be called before
 * the kernel virtual mapping is activated.
 */
#define SYM_FUNC_START_PI(x)			\
		SYM_FUNC_START_ALIAS(__pi_##x);	\
		SYM_FUNC_START(x)

#define SYM_FUNC_START_WEAK_PI(x)		\
		SYM_FUNC_START_ALIAS(__pi_##x);	\
		SYM_FUNC_START_WEAK(x)

#define SYM_FUNC_START_WEAK_ALIAS_PI(x)		\
		SYM_FUNC_START_ALIAS(__pi_##x);	\
		SYM_START(x, SYM_L_WEAK, SYM_A_ALIGN)

#define SYM_FUNC_END_PI(x)			\
		SYM_FUNC_END(x);		\
		SYM_FUNC_END_ALIAS(__pi_##x)

#define SYM_FUNC_END_ALIAS_PI(x)		\
		SYM_FUNC_END_ALIAS(x);		\
		SYM_FUNC_END_ALIAS(__pi_##x)

#endif
