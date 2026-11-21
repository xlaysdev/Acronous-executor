/* Unwind@1800907c0 @ 1800907c0 */

void Unwind_1800907c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_2 + 0xd7) != '\0') && (lVar1 = **(longlong **)(param_2 + 0xc0), lVar1 != 0))
  {
    thunk_FUN_1801d3330((*(longlong **)(param_2 + 0xc0))[1],lVar1,1);
  }
  return;
}


