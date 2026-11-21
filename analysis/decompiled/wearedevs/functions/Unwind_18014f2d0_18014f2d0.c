/* Unwind@18014f2d0 @ 18014f2d0 */

void Unwind_18014f2d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x478) + 0x58);
  if (lVar1 == 0) {
    return;
  }
  if (*(char *)(param_2 + 0x4a4) == '\0') {
    return;
  }
  lVar2 = *(longlong *)(param_2 + 0x478);
  (**(code **)(lVar1 + 0x20))
            (*(undefined8 *)(lVar2 + 0x70),*(undefined8 *)(lVar2 + 0x60),
             *(undefined8 *)(lVar2 + 0x68));
  return;
}


