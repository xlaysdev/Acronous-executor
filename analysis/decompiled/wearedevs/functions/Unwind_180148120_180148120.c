/* Unwind@180148120 @ 180148120 */

void Unwind_180148120(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x60);
  (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],*(undefined8 *)(param_2 + 0x40));
  return;
}


