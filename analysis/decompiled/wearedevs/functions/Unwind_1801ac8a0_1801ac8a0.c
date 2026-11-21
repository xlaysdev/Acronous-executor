/* Unwind@1801ac8a0 @ 1801ac8a0 */

void Unwind_1801ac8a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x7f) != '\0') {
    lVar1 = *(longlong *)(param_2 + 0x70);
    (**(code **)(*(longlong *)(lVar1 + 0x30) + 0x20))
              (*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x38),0);
  }
  return;
}


