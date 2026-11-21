/* Unwind@18015b920 @ 18015b920 */

void Unwind_18015b920(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 399) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x180);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],*(undefined8 *)(param_2 + 0x178));
  }
  return;
}


