/* FUN_1801b9080 @ 1801b9080 */

void FUN_1801b9080(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = param_1[2];
  while (lVar2 = lVar2 + -1, lVar1 != 0) {
    lVar1 = *(longlong *)(lVar1 + 0x18);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      param_1[1] = 0;
    }
    else {
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    param_1[2] = lVar2;
    FUN_1801b8990();
  }
  return;
}


