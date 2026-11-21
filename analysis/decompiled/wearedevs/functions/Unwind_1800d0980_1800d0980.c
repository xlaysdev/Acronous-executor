/* Unwind@1800d0980 @ 1800d0980 */

void Unwind_1800d0980(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0xf7) == '\0') {
    *(undefined1 *)(param_2 + 0xf5) = 0;
    return;
  }
  if (*(char *)(*(longlong *)(param_2 + 0x150) + 0x20) != '\x02') {
    plVar1 = *(longlong **)(param_2 + 0x150);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
  }
  *(undefined1 *)(param_2 + 0xf5) = 1;
  return;
}


