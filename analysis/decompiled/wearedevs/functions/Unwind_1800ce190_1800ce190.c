/* Unwind@1800ce190 @ 1800ce190 */

void Unwind_1800ce190(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(*(longlong *)(param_2 + 0x2b30) + 0xf80) != '\x02') {
    lVar1 = *(longlong *)(param_2 + 0x2b30);
    (**(code **)(*(longlong *)(lVar1 + 0xf60) + 0x20))
              (*(undefined8 *)(lVar1 + 0xf78),*(undefined8 *)(lVar1 + 0xf68),
               *(undefined8 *)(lVar1 + 0xf70));
  }
  return;
}


