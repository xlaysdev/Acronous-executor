/* Unwind@1800a4ea0 @ 1800a4ea0 */

void Unwind_1800a4ea0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_2 + 0x88);
  do {
    plVar1 = (longlong *)*plVar2;
    thunk_FUN_1801d3330(plVar2,8,8);
    plVar2 = plVar1;
  } while (plVar1 != (longlong *)0x0);
  return;
}


