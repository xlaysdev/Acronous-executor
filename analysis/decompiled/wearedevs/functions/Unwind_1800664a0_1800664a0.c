/* Unwind@1800664a0 @ 1800664a0 */

void Unwind_1800664a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(lVar1 + 0x38) != 0) {
    (**(code **)(*(longlong *)(lVar1 + 0x38) + 0x20))
              (*(undefined8 *)(lVar1 + 0x50),*(undefined8 *)(lVar1 + 0x40),
               *(undefined8 *)(lVar1 + 0x48));
  }
  return;
}


