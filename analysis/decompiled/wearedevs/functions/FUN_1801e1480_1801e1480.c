/* FUN_1801e1480 @ 1801e1480 */

void FUN_1801e1480(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 local_48 [16];
  longlong local_38;
  
  lVar1 = *(longlong *)(*param_1 + 8);
  lVar2 = *(longlong *)(*param_1 + 0x10);
  FUN_1801ef8f0(local_48);
  if (lVar2 != 0) {
    do {
      local_38 = lVar1;
      FUN_1801ef790(local_48,&local_38,&DAT_180290948);
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 1;
    } while (lVar2 != 0);
  }
  FUN_1801ef8b0(local_48);
  return;
}


