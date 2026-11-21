/* Unwind@1800ca0c0 @ 1800ca0c0 */

void Unwind_1800ca0c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 200);
  if (*(char *)(param_2 + 0xd7) != '\0') {
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],*(undefined8 *)(param_2 + 0xc0));
  }
  return;
}


