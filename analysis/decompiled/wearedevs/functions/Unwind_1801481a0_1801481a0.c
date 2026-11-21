/* Unwind@1801481a0 @ 1801481a0 */

void Unwind_1801481a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0xa7) == '\0') {
    return;
  }
  plVar1 = *(longlong **)(param_2 + 0x98);
  (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  return;
}


