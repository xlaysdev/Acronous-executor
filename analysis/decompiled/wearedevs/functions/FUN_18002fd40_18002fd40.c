/* FUN_18002fd40 @ 18002fd40 */

void FUN_18002fd40(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_40;
  undefined1 local_38 [16];
  
  lVar1 = *(longlong *)(*param_1 + 8);
  lVar2 = *(longlong *)(*param_1 + 0x10);
  FUN_1801ef8f0(local_38);
  if (lVar2 != 0) {
    do {
      local_40 = lVar1;
      FUN_1801ef790(local_38,&local_40,&DAT_180206180);
      lVar2 = lVar2 + -1;
      lVar1 = lVar1 + 1;
    } while (lVar2 != 0);
  }
  FUN_1801ef8b0(local_38);
  return;
}


