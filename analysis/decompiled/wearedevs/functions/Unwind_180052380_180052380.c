/* Unwind@180052380 @ 180052380 */

void Unwind_180052380(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x137) != '\0') {
    lVar1 = *(longlong *)(param_2 + 0x128);
    if (*(longlong *)(lVar1 + 8) != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8) + 0x20))
                (*(undefined8 *)(lVar1 + 0x20),*(undefined8 *)(lVar1 + 0x10),
                 *(undefined8 *)(lVar1 + 0x18));
    }
  }
  return;
}


