/* Unwind@1800664e0 @ 1800664e0 */

void Unwind_1800664e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(lVar1 + 0x58) != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x58) + 0x20))
              (*(undefined8 *)(lVar1 + 0x70),*(undefined8 *)(lVar1 + 0x60),
               *(undefined8 *)(lVar1 + 0x68));
  }
  return;
}


