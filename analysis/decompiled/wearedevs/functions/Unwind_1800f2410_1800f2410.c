/* Unwind@1800f2410 @ 1800f2410 */

void Unwind_1800f2410(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(*(longlong *)(param_2 + 1000) + 0x1c0) != '\x02') {
    lVar1 = *(longlong *)(param_2 + 1000);
    (**(code **)(*(longlong *)(lVar1 + 0x1a0) + 0x20))
              (*(undefined8 *)(lVar1 + 0x1b8),*(undefined8 *)(lVar1 + 0x1a8),
               *(undefined8 *)(lVar1 + 0x1b0));
  }
  return;
}


