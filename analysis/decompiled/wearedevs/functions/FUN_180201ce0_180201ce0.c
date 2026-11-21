/* FUN_180201ce0 @ 180201ce0 */

void FUN_180201ce0(undefined8 param_1,longlong param_2)

{
  code *pcVar1;
  
  FUN_180201d50(param_1,param_2 * 2 + 1,0,&PTR_s_library_core_src_panicking_rs_180294440);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


