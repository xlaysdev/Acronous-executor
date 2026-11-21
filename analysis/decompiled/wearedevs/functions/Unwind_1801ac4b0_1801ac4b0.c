/* Unwind@1801ac4b0 @ 1801ac4b0 */

void Unwind_1801ac4b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x106) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x48);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


