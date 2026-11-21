/* Unwind@18007acc0 @ 18007acc0 */

void Unwind_18007acc0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  if (*(char *)(lVar1 + 0x68) != '\x02') {
    (**(code **)(*(longlong *)(lVar1 + 0x48) + 0x20))
              (*(undefined8 *)(lVar1 + 0x60),*(undefined8 *)(lVar1 + 0x50),
               *(undefined8 *)(lVar1 + 0x58));
  }
  return;
}


