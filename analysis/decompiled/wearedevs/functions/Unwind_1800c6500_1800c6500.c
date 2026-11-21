/* Unwind@1800c6500 @ 1800c6500 */

void Unwind_1800c6500(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x38);
  if (*(char *)(lVar1 + 0x410) != '\x02') {
    (**(code **)(*(longlong *)(lVar1 + 0x3f0) + 0x20))
              (*(undefined8 *)(lVar1 + 0x408),*(undefined8 *)(lVar1 + 0x3f8),
               *(undefined8 *)(lVar1 + 0x400));
  }
  return;
}


