/* Unwind@180046a90 @ 180046a90 */

void Unwind_180046a90(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0xbf) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0xa8);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


