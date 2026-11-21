/* Unwind@1800a8cd0 @ 1800a8cd0 */

void Unwind_1800a8cd0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x4fc);
  if (*(char *)(param_2 + 0x4fb) == '\0') {
    *(undefined1 *)(param_2 + 0x4ff) = uVar1;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x4d0) + 0x20))
            (*(undefined8 *)(param_2 + 0x4d8),*(undefined8 *)(param_2 + 0x4e0),
             *(undefined8 *)(param_2 + 0x4b0));
  *(undefined1 *)(param_2 + 0x4ff) = uVar1;
  return;
}


