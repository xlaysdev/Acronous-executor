/* Unwind@1800cffc0 @ 1800cffc0 */

void Unwind_1800cffc0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(*(longlong *)(param_2 + 0x858) + 0x350) != '\x02') {
    lVar1 = *(longlong *)(param_2 + 0x858);
    (**(code **)(*(longlong *)(lVar1 + 0x330) + 0x20))
              (*(undefined8 *)(lVar1 + 0x348),*(undefined8 *)(lVar1 + 0x338),
               *(undefined8 *)(lVar1 + 0x340));
  }
  return;
}


