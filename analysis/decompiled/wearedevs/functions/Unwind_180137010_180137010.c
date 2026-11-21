/* Unwind@180137010 @ 180137010 */

void Unwind_180137010(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x67) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x58);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


