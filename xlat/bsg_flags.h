/* Generated by ./xlat/gen.sh from ./xlat/bsg_flags.in; do not edit. */
#if !(defined(BSG_FLAG_Q_AT_TAIL) || (defined(HAVE_DECL_BSG_FLAG_Q_AT_TAIL) && HAVE_DECL_BSG_FLAG_Q_AT_TAIL))
# define BSG_FLAG_Q_AT_TAIL 0x10
#endif
#if !(defined(BSG_FLAG_Q_AT_HEAD) || (defined(HAVE_DECL_BSG_FLAG_Q_AT_HEAD) && HAVE_DECL_BSG_FLAG_Q_AT_HEAD))
# define BSG_FLAG_Q_AT_HEAD 0x20
#endif

#ifdef IN_MPERS

# error static const struct xlat bsg_flags in mpers mode

#else

static
const struct xlat bsg_flags[] = {
 XLAT(BSG_FLAG_Q_AT_TAIL),
 XLAT(BSG_FLAG_Q_AT_HEAD),
 XLAT_END
};

#endif /* !IN_MPERS */
