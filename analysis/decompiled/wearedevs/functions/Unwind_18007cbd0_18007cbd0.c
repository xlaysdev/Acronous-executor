/* Unwind@18007cbd0 @ 18007cbd0 */

void Unwind_18007cbd0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if ((char)plVar1[4] != '\x02') {
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  return;
}


