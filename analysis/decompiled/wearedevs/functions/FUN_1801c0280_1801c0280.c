/* FUN_1801c0280 @ 1801c0280 */

void FUN_1801c0280(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  *(undefined1 *)(param_1 + 1) = 2;
  if ((char)lVar2 == '\x01') {
    lVar2 = *param_1;
    lVar1 = *(longlong *)(lVar2 + 0x820);
    *(longlong *)(lVar2 + 0x820) = lVar1 + -1;
    if (lVar1 == 1 && *(longlong *)(lVar2 + 0x818) == 0) {
      FUN_1801fe8b0();
    }
  }
  return;
}


