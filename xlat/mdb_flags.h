/* Generated by ./xlat/gen.sh from ./xlat/mdb_flags.in; do not edit. */

#ifdef IN_MPERS

# error static const struct xlat mdb_flags in mpers mode

#else

static
const struct xlat mdb_flags[] = {
#if defined(MDB_FLAGS_OFFLOAD) || (defined(HAVE_DECL_MDB_FLAGS_OFFLOAD) && HAVE_DECL_MDB_FLAGS_OFFLOAD)
  XLAT(MDB_FLAGS_OFFLOAD),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */