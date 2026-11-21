/* FUN_1801e6810 @ 1801e6810 */

longlong * FUN_1801e6810(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong *plVar4;
  
  if ((param_2 == (longlong *)0x0) ||
     ((TypeDescriptor *)*param_2 != &rust_panic::RTTI_Type_Descriptor)) {
    FUN_1801d35b0();
    pcVar3 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar3)();
    return plVar4;
  }
  lVar1 = param_2[1];
  lVar2 = param_2[2];
  param_2[1] = 0;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_library_panic_unwind_src_seh_rs_180292140);
  }
  *param_1 = lVar1;
  param_1[1] = lVar2;
  return param_1;
}


