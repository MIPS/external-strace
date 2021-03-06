/* Generated by ./xlat/gen.sh from ./xlat/v4l2_control_flags.in; do not edit. */

#ifdef IN_MPERS

extern const struct xlat v4l2_control_flags[];

#else

# if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
# endif
const struct xlat v4l2_control_flags[] = {
#if defined(V4L2_CTRL_FLAG_DISABLED) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_DISABLED) && HAVE_DECL_V4L2_CTRL_FLAG_DISABLED)
  XLAT(V4L2_CTRL_FLAG_DISABLED),
#endif
#if defined(V4L2_CTRL_FLAG_GRABBED) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_GRABBED) && HAVE_DECL_V4L2_CTRL_FLAG_GRABBED)
  XLAT(V4L2_CTRL_FLAG_GRABBED),
#endif
#if defined(V4L2_CTRL_FLAG_READ_ONLY) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_READ_ONLY) && HAVE_DECL_V4L2_CTRL_FLAG_READ_ONLY)
  XLAT(V4L2_CTRL_FLAG_READ_ONLY),
#endif
#if defined(V4L2_CTRL_FLAG_UPDATE) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_UPDATE) && HAVE_DECL_V4L2_CTRL_FLAG_UPDATE)
  XLAT(V4L2_CTRL_FLAG_UPDATE),
#endif
#if defined(V4L2_CTRL_FLAG_INACTIVE) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_INACTIVE) && HAVE_DECL_V4L2_CTRL_FLAG_INACTIVE)
  XLAT(V4L2_CTRL_FLAG_INACTIVE),
#endif
#if defined(V4L2_CTRL_FLAG_SLIDER) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_SLIDER) && HAVE_DECL_V4L2_CTRL_FLAG_SLIDER)
  XLAT(V4L2_CTRL_FLAG_SLIDER),
#endif
#if defined(V4L2_CTRL_FLAG_WRITE_ONLY) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_WRITE_ONLY) && HAVE_DECL_V4L2_CTRL_FLAG_WRITE_ONLY)
  XLAT(V4L2_CTRL_FLAG_WRITE_ONLY),
#endif
#if defined(V4L2_CTRL_FLAG_VOLATILE) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_VOLATILE) && HAVE_DECL_V4L2_CTRL_FLAG_VOLATILE)
  XLAT(V4L2_CTRL_FLAG_VOLATILE),
#endif
#if defined(V4L2_CTRL_FLAG_HAS_PAYLOAD) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_HAS_PAYLOAD) && HAVE_DECL_V4L2_CTRL_FLAG_HAS_PAYLOAD)
  XLAT(V4L2_CTRL_FLAG_HAS_PAYLOAD),
#endif
#if defined(V4L2_CTRL_FLAG_EXECUTE_ON_WRITE) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_EXECUTE_ON_WRITE) && HAVE_DECL_V4L2_CTRL_FLAG_EXECUTE_ON_WRITE)
  XLAT(V4L2_CTRL_FLAG_EXECUTE_ON_WRITE),
#endif
#if defined(V4L2_CTRL_FLAG_MODIFY_LAYOUT) || (defined(HAVE_DECL_V4L2_CTRL_FLAG_MODIFY_LAYOUT) && HAVE_DECL_V4L2_CTRL_FLAG_MODIFY_LAYOUT)
  XLAT(V4L2_CTRL_FLAG_MODIFY_LAYOUT),
#endif
 XLAT_END
};

#endif /* !IN_MPERS */
