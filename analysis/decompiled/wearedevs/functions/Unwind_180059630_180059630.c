/* Unwind@180059630 @ 180059630 */

void Unwind_180059630(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (0x8000000000000001 < *(ulonglong *)(param_2 + 0x30)) {
    plVar1 = *(longlong **)(param_2 + 0x38);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


