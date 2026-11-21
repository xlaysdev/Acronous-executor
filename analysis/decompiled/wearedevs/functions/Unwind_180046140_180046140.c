/* Unwind@180046140 @ 180046140 */

void Unwind_180046140(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x12f) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0xf8);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


