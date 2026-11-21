/* Unwind@1801c0100 @ 1801c0100 */

void Unwind_1801c0100(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x60);
  while (lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x18);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    FUN_1801b8990();
  }
  *(undefined1 *)(param_2 + 0x177) = 0;
  *(undefined1 *)(param_2 + 0x176) = 0;
  return;
}


