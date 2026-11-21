/* FUN_180126980 @ 180126980 */

void FUN_180126980(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_40;
  undefined1 local_38 [16];
  
  lVar1 = *(longlong *)(*param_1 + 8);
  lVar2 = *(longlong *)(*param_1 + 0x10);
  FUN_1801ef8f0(local_38);
  if (lVar2 != 0) {
    lVar2 = lVar2 << 5;
    do {
      local_40 = lVar1;
      FUN_1801ef790(local_38,&local_40,&DAT_180240140);
      lVar2 = lVar2 + -0x20;
      lVar1 = lVar1 + 0x20;
    } while (lVar2 != 0);
  }
  FUN_1801ef8b0(local_38);
  return;
}


