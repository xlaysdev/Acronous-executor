/* Unwind@18003c060 @ 18003c060 */

void Unwind_18003c060(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(*(longlong *)(param_2 + 0x38) + 0x160) != '\x02') {
    lVar1 = *(longlong *)(param_2 + 0x38);
    (**(code **)(*(longlong *)(lVar1 + 0x140) + 0x20))
              (*(undefined8 *)(lVar1 + 0x158),*(undefined8 *)(lVar1 + 0x148),
               *(undefined8 *)(lVar1 + 0x150));
  }
  return;
}


