/* Unwind@18014f380 @ 18014f380 */

void Unwind_18014f380(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(char *)(param_2 + 0x48c) != '\0') &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x478) + 0x78), lVar1 != 0)) {
    lVar2 = *(longlong *)(param_2 + 0x478);
    (**(code **)(lVar1 + 0x20))
              (*(undefined8 *)(lVar2 + 0x90),*(undefined8 *)(lVar2 + 0x80),
               *(undefined8 *)(lVar2 + 0x88));
  }
  return;
}


