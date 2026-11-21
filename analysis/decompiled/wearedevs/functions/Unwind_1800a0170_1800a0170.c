/* Unwind@1800a0170 @ 1800a0170 */

void Unwind_1800a0170(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x67) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x48);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


