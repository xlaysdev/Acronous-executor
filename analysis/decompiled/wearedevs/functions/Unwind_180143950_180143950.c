/* Unwind@180143950 @ 180143950 */

void Unwind_180143950(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x58);
  if ((*(byte *)(param_2 + 0x67) & *plVar1 != 0) != 0) {
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


