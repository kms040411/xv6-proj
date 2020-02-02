	.text

/* Switch from current_thread to next_thread. Make next_thread
 * the current_thread, and set next_thread to 0.
 * Use eax as a temporary register; it is caller saved.
 */
	.globl thread_switch
thread_switch:
	pushal							/* push current thread's general registers to the stack */

	movl current_thread, %eax
    movl %esp, (%eax)               /* Save stack pointer to current_thread->sp */

	movl next_thread, %ebx
	movl (%ebx), %esp				/* restore stack pointer of next_thread */

	movl %ebx, current_thread		/* current_thread now points next_thread */

	popal							/* restore n-ext thread's general registers */

	ret								/* pop return address from stack */