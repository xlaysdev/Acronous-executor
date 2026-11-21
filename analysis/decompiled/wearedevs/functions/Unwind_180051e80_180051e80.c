/* Unwind@180051e80 @ 180051e80 */

void Unwind_180051e80(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x3f) == '\x02') {
    plVar1 = *(longlong **)(param_2 + 0x30);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


