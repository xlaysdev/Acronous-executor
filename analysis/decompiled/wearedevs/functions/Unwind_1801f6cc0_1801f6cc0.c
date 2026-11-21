/* Unwind@1801f6cc0 @ 1801f6cc0 */

void Unwind_1801f6cc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x20);
  if (*plVar1 == 1) {
    if (plVar1[2] != 0) {
      thunk_FUN_1801d3330(plVar1[1],plVar1[2],1);
      return;
    }
  }
  else if (*plVar1 == 0) {
    (**(code **)(plVar1[1] + 0x20))(plVar1[4],plVar1[2],plVar1[3]);
  }
  return;
}


