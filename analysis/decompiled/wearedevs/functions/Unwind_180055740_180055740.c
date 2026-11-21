/* Unwind@180055740 @ 180055740 */

void Unwind_180055740(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x98);
  if (0x8000000000000001 < *(ulonglong *)(param_2 + 0x78)) {
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


