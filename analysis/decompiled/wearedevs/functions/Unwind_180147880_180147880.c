/* Unwind@180147880 @ 180147880 */

void Unwind_180147880(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x77) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x48);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


