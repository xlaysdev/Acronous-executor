/* Unwind@1801ab100 @ 1801ab100 */

void Unwind_1801ab100(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x6f) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x60);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


