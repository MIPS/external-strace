/* Generated by ./xlat/gen.sh from ./xlat/nf_osf_msg_types.in; do not edit. */
#if !(defined(OSF_MSG_ADD) || (defined(HAVE_DECL_OSF_MSG_ADD) && HAVE_DECL_OSF_MSG_ADD))
# define OSF_MSG_ADD 0
#endif
#if !(defined(OSF_MSG_REMOVE) || (defined(HAVE_DECL_OSF_MSG_REMOVE) && HAVE_DECL_OSF_MSG_REMOVE))
# define OSF_MSG_REMOVE 1
#endif

#ifdef IN_MPERS

# error static const struct xlat nf_osf_msg_types in mpers mode

#else

static
const struct xlat nf_osf_msg_types[] = {
 XLAT(OSF_MSG_ADD),
 XLAT(OSF_MSG_REMOVE),
 XLAT_END
};

#endif /* !IN_MPERS */
