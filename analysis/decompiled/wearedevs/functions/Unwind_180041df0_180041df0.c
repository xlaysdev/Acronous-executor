/* Unwind@180041df0 @ 180041df0 */

void Unwind_180041df0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(*(longlong *)(param_2 + 0x30) + 0x160) != '\x02') {
    lVar1 = *(longlong *)(param_2 + 0x30);
    (**(code **)(*(longlong *)(lVar1 + 0x140) + 0x20))
              (*(undefined8 *)(lVar1 + 0x158),*(undefined8 *)(lVar1 + 0x148),
               *(undefined8 *)(lVar1 + 0x150));
  }
  return;
}


