/* Unwind@1801b3a80 @ 1801b3a80 */

void Unwind_1801b3a80(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x4f) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x40);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


