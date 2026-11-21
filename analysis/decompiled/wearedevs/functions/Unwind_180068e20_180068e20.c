/* Unwind@180068e20 @ 180068e20 */

void Unwind_180068e20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x8f) == '\0') {
    plVar1 = *(longlong **)(param_2 + 0x80);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


