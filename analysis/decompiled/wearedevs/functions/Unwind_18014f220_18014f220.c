/* Unwind@18014f220 @ 18014f220 */

void Unwind_18014f220(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x478) + 0x38);
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x490) == '\0') {
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x478);
  (**(code **)(lVar1 + 0x20))
            (*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x40),
             *(undefined8 *)(lVar2 + 0x48));
  return;
}


