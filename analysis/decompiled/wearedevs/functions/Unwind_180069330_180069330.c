/* Unwind@180069330 @ 180069330 */

void Unwind_180069330(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x78);
  if (*(char *)(param_2 + 0x87) == '\0') {
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


